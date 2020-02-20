##############
# DIRECTIONS #
##############
# Build shared urho3d library
# Add libUrho3D.so.0 shortcut to the current directory
# Install clang.cindex and mako.template and stringcase
#   sudo apt install libclang-dev python-clang
#   sudo -H pip install Mako
#   sudo -H pip install stringcase




IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

#lib: libtest_parse.so
#	g++ result.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 -lpython2.7 -L . -ltest_parse -shared -fPIC -o urho.so
lib: test_parse.o bindings
	g++ result.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 -lpython2.7 test_parse.o -shared -fPIC -o urho.so
	

libNoBind: test_parse.o
	g++ result.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 -lpython2.7 test_parse.o -shared -fPIC -o urho.so
	
CXX_FLAGS = -std=gnu++14 -g3 -gdwarf-2 -Wno-invalid-offsetof -pthread -DURHO3D_CXX11=1 -DURHO3D_FMT -g -DDEBUG -D_DEBUG  

#CXX_DEFINES = -DGLEW_NO_GLU -DGLEW_STATIC -DURHO3D_ANGELSCRIPT -DURHO3D_CPP11 -DURHO3D_LOGGING -DURHO3D_NAVIGATION -DURHO3D_NETWORK -DURHO3D_OPENGL -DURHO3D_PHYSICS -DURHO3D_PROFILING -DURHO3D_SSE -DURHO3D_STATIC_DEFINE -DURHO3D_THREADING -DURHO3D_URHO2D
CXX_DEFINES = -DGLEW_NO_GLU -DGLEW_STATIC -DHAVE_SINCOSF -DTOLUA_RELEASE -DURHO3D_ANGELSCRIPT -DURHO3D_CXX11 -DURHO3D_FILEWATCHER -DURHO3D_IK -DURHO3D_LOGGING -DURHO3D_LUA -DURHO3D_NAVIGATION -DURHO3D_NETWORK -DURHO3D_PHYSICS -DURHO3D_PROFILING -DURHO3D_THREADING -DURHO3D_URHO2D -DUrho3D_EXPORTS

CXX_INCLUDES =  -I/home/nathan/Projects/Urho3D/SharedBuild/include/ -I/usr/local/include -I/home/nathan/Projects/Urho3D/SharedBuild/include/Urho3D/ThirdParty -I/usr/local/include/Urho3D/ThirdParty -I/usr/local/include/Urho3D/ThirdParty/Bullet -I/usr/local/include/Urho3D

LINK_TARGET = -ldl -lrt -lGL

# -Wl,--no-undefined

processed: Urho3DProcessed.h

Urho3DAll.h: ;

Urho3DProcessed.h: Urho3DAll.h
	clang++ -E -P Urho3DAll.h -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 $(CXX_INCLUDES) $(CXX_DEFINES) -fPIC -o Urho3DProcessed.h

#     -I/home/nathan/Projects/Urho3D/SharedBuild/Source/Urho3D -I/home/nathan/Projects/Urho/Urho3D/Source/Urho3D -I/home/nathan/Projects/Urho3D/SharedBuild/include/Urho3D/ThirdParty -I/home/nathan/Projects/Urho3D/SharedBuild/include/Urho3D/ThirdParty/Bullet -I/home/nathan/Projects/Urho3D/SharedBuild/include/Urho3D/ThirdParty/Detour -I/home/nathan/Projects/Urho3D/SharedBuild/include/Urho3D/ThirdParty/Lua  -frtti -fvisibility=default -std=gnu++11 -Wno-invalid-offsetof -march=native -ffast-math -pthread


urholib: urhobindings
	g++ result.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 $(CXX_INCLUDES) -lpython2.7 -L . -lUrho3D $(LINK_TARGET) $(CXX_DEFINES) -shared -fPIC -o urho.so
	
urho.so: bindresult.cpp
	g++ bindresult.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 $(CXX_INCLUDES) -lpython2.7 -L . -lUrho3D $(LINK_TARGET) $(CXX_DEFINES) -shared -fPIC -fmax-errors=3 -o urho.so -ftime-report
	
manualTestBind: 
	g++ manualTestBind.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 $(CXX_INCLUDES) -lpython2.7 -L . -lUrho3D $(LINK_TARGET) $(CXX_DEFINES) -shared -fPIC -fmax-errors=3 -o urho.so -ftime-report
	

bindresult.cpp: Urho3DProcessed.h bind-template.mako
	python3.6 parseobjects.py Urho3DProcessed.h -o bindresult.cpp -i Urho3D/Urho3DAll.h
	
bindresult-brokenusing.cpp: Urho3DProcessedBrokenUsing.h bind.py bind-template.mako
	python bind.py Urho3DProcessedBrokenUsing.h -o bindresult.cpp -i Urho3D/Urho3DAll.h
# 	python bind.py Urho3DProcessed.h -o bindresult.cpp -i Urho3D/Urho3DAll.h
	
	
bind: bindresult.cpp

simplebind.cpp: VerySimpleTest.hpp bind.py bind-template.mako
	python bind.py VerySimpleTest.hpp -o simplebind.cpp -i VerySimpleTest.hpp
	
simplebind.so: simplebind.cpp
	g++ simplebind.cpp -std=c++14 -I /home/nathan/Projects/Urho/PythonBindings/pybind11/include -I /usr/include/python2.7 $(CXX_INCLUDES) -lpython2.7 -I . -L . $(LINK_TARGET) $(CXX_DEFINES) -shared -fPIC -fmax-errors=3 -o simplebind.so -ftime-report
	
simpleTestAST:
	clang -std=c++14 -Xclang -ast-dump -ast-dump-filter=Urho3D::JSONValue::test2 VerySimpleTest.hpp
	
testsimplebind: simplebind.so
	LD_LIBRARY_PATH='.' python -c "import simplebind; v = urho.Deleted(1);"

test:
#	LD_LIBRARY_PATH='.' python -c "import urho; v = urho.Vector3(1, 2, 3);"
	LD_LIBRARY_PATH='.' python -i test.py 
	
pyManualTest:
#	LD_LIBRARY_PATH='.' python -c "import urho; v = urho.Vector3(1, 2, 3);"
	LD_LIBRARY_PATH='.' python -i manualTestBind.py 

fulltest: bindresult.cpp urho.so test
#fulltest: bindresult test

manualtest: manualTestBind pyManualTest


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
