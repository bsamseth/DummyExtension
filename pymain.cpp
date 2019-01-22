#include <pybind11/pybind11.h>

int foo(int a, int b) {
    return a + b;
}

int bar(int a, int b) {
    return a - b;
}

namespace py = pybind11;


PYBIND11_MODULE(mypackage, m) {
    auto subA = m.def_submodule("subA");
    subA.def("foo", &foo);

    auto subB = m.def_submodule("subB");
    subB.def("bar", &bar);


#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}
