
#include <Urho3D/Engine/Application.h>


class PyApplication : public Urho3D::Application {
public:
    using Urho3D::Application::Application; // Inherit constructors
    //std::string go(int n_times) override { PYBIND11_OVERLOAD_PURE(std::string, Dog, go, n_times); }

    /// Setup before engine initialization. This is a chance to eg. modify the engine parameters. Call ErrorExit() to terminate without initializing the engine. Called by Application.
    void Setup() override { engineParameters_["ResourcePrefixPaths"] = "/home/nathan/Projects/Urho/PythonBindings/NewTest2020Separated"; engineParameters_["FullScreen"] = false; PYBIND11_OVERLOAD(void, Urho3D::Application, Setup, ); }
    
    /// Setup after engine initialization and before running the main loop. Call ErrorExit() to terminate without running the main loop. Called by Application.
    void Start() override { PYBIND11_OVERLOAD(void, Urho3D::Application, Start, ); }
    
    /// Cleanup after the main loop. Called by Application.
    void Stop() override { PYBIND11_OVERLOAD(void, Urho3D::Application, Stop, ); }

};

class ApplicationPublicist : public Urho3D::Application {
public:
    using Urho3D::Application::engineParameters_;
};
