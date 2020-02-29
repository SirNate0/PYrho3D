# Set project name
cmake_policy (SET CMP0048 NEW)
project (Pyrho3D)# VERSION 0.0.1 DESCRIPTION "Python bindings for Urho3D" LANGUAGES "CXX")
# Set minimum version
cmake_minimum_required (VERSION 3.5.1)
#if (COMMAND cmake_policy)
#    cmake_policy (SET CMP0003 NEW)
#    if (CMAKE_VERSION VERSION_GREATER 2.8.12 OR CMAKE_VERSION VERSION_EQUAL 2.8.12)
#        # INTERFACE_LINK_LIBRARIES defines the link interface
#        cmake_policy (SET CMP0022 NEW)
#    endif ()
#    if (CMAKE_VERSION VERSION_GREATER 3.0.0 OR CMAKE_VERSION VERSION_EQUAL 3.0.0)
#        # Disallow use of the LOCATION target property - therefore we set to OLD as we still need it
#        cmake_policy (SET CMP0026 OLD)
#        # MACOSX_RPATH is enabled by default
#        cmake_policy (SET CMP0042 NEW)
#    endif ()
#endif ()


# Set CMake modules search path
set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake/Modules)

set (URHO3D_HOME /home/nathan/Projects/Urho/Urho3D/Build CACHE PATH "" FORCE)
set (URHO3D_LIB_TYPE SHARED CACHE STRING "docstring" FORCE)

# Binding file count
set (BINDING_FILE_COUNT 0 CACHE STRING "Number of files to split the bindings into. 0 for CPU count.")
if (BINDING_FILE_COUNT EQUAL 0)
    include(ProcessorCount)
    ProcessorCount(N)
    if(NOT N EQUAL 0)
        set(ACTUAL_BINDING_FILE_COUNT ${N})
    else()
        message("Could not get the number of cores. Defaulting to 1 file.")
        set(ACTUAL_BINDING_FILE_COUNT 1)
    endif()
else()
    set(ACTUAL_BINDING_FILE_COUNT ${BINDING_FILE_COUNT})
endif()

list(APPEND BINDING_FILES ${CMAKE_CURRENT_BINARY_DIR}/bindresult.cpp)
foreach(N RANGE 1 ${ACTUAL_BINDING_FILE_COUNT})
    if(NOT N EQUAL ${ACTUAL_BINDING_FILE_COUNT})
        list(APPEND BINDING_FILES ${CMAKE_CURRENT_BINARY_DIR}/bindresult${N}.cpp)
    endif()
endforeach()

# Include Urho3D Cmake common module
include (UrhoCommon)
# Find Urho3D library
find_package (Urho3D REQUIRED)

#base include dir is .../include/Urho3D -- added by me
list (APPEND URHO3D_INCLUDE_DIRS ${BASE_INCLUDE_DIR} "../libRocket/Include" "../tinytoml/include/toml")

# Define target name
set (TARGET_NAME pyrho3d)

include_directories (${URHO3D_INCLUDE_DIRS})

find_package (Urho3D REQUIRED)
include_directories (${URHO3D_INCLUDE_DIRS})

#message("${URHO3D_INCLUDE_DIRS}")
#message("${INCLUDE_DIRECTORIES}")

include_directories(/home/nathan/Projects/Urho/PythonBindings/pybind11/include /usr/include/python2.7 ./)
#find_package (Python3 COMPONENTS Interpreter)
#find_package (Python2 COMPONENTS Development)

#include(GNUInstallDirs)


#add_definitions(-std=gnu++14 -D__cplusplus=201403)
if (NOT WEB)
	SET(CMAKE_CXX_FLAGS "-std=gnu++14 -g3 -gdwarf-2 -Wno-invalid-offsetof -Wall -Werror=return-type -pthread -DURHO3D_CXX11 -ftime-report") # -DURHO3D_FMT)# -DFORCE_AS_PORTABLE")# -L. -lRocketCore
else()
	SET(CMAKE_CXX_FLAGS "-std=gnu++14 -DURHO3D_FMT" )
endif()


#Things to make: Urho3DProcessed.h > bindresult.cpp > pyrho3d.so

get_directory_property(dirs INCLUDE_DIRECTORIES)
set(global_includes "")
foreach(dir IN LISTS dirs)
    set(global_includes ${global_includes} -I ${dir})
endforeach()

get_directory_property(_compile_defs COMPILE_DEFINITIONS)
set(global_defines "")
foreach(def IN LISTS _compile_defs)
    set(global_defines ${global_defines} -D${def})
endforeach()

ADD_CUSTOM_COMMAND(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Urho3DProcessed.h
#    COMMAND sh -c 'clang++ -E -P ${URHO3D_HOME}/include/Urho3D/Urho3DAll.h ${CMAKE_CXX_FLAGS} -o Urho3DProcessed.h ${global_includes}'
# TODO: Maybe create an Urho3DAll.cpp file with one line : #include <Urho3D/Urho3DAll.h>?
    COMMAND clang++ -E -P ${URHO3D_HOME}/include/Urho3D/Urho3DAll.h -o Urho3DProcessed.h  -std=c++14 ${global_includes} ${global_defines}
    MAIN_DEPENDENCY ${URHO3D_HOME}/include/Urho3D/Urho3DAll.h
)

ADD_CUSTOM_TARGET(process_header DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/Urho3DProcessed.h)

ADD_CUSTOM_COMMAND(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/bindresult.cpp
    COMMAND python3.6 ${CMAKE_CURRENT_SOURCE_DIR}/parseobjects.py ${CMAKE_CURRENT_BINARY_DIR}/Urho3DProcessed.h -o ${CMAKE_CURRENT_BINARY_DIR}/bindresult.cpp -i Urho3D/Urho3DAll.h -n ${ACTUAL_BINDING_FILE_COUNT}
    DEPENDS process_header
)


#define_source_files (${CMAKE_CURRENT_BINARY_DIR}/bindresult.cpp)
#ADD_CUSTOM_TARGET(bind_result DEPENDS bindresult.cpp)

define_source_files (${BINDING_FILES})
ADD_CUSTOM_TARGET(bind_result DEPENDS ${BINDING_FILES})


# Based on https://stackoverflow.com/questions/49053544/how-do-i-run-a-python-script-every-time-in-a-cmake-build
add_library(pyrho3d SHARED ${BINDING_FILES})

add_dependencies(bind_result process_header)
add_dependencies(pyrho3d bind_result)

#target_link_libraries(pyrho3d -lpython2.7 -L. -lUrho3D)
target_link_libraries(pyrho3d -lpython2.7 ${URHO3D_LIBRARIES})

set_target_properties(pyrho3d PROPERTIES PREFIX "")

#set_target_properties(pyrho3d PROPERTIES VERSION ${PROJECT_VERSION})

#set_target_properties(mylib PROPERTIES PUBLIC_HEADER include/mylib.h)

#target_include_directories(mylib PRIVATE .)

#install(TARGETS pyrho3d
#    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})


#add_custom_target(processed_header ALL
#        ${CMAKE_CURRENT_BINARY_DIR}/Urho3DProcessed.h
#        DEPENDS ${URHO3D_HOME}/include/Urho3D/Urho3DAll.h
#        OUTPUT
#)

#add_custom_command(TARGET pyrho3d
#        PRE_BUILD
#        OUTPUT
#        COMMAND python3.6 
#)
