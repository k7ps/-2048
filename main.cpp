#include <iostream>
#include <sstream>
#include <exception>

//#include "../Graph_lib/Graph.h"
//#include "../Graph_lib/Simple_window.h"

#include "window.h"

//using namespace Graph_lib;

int main ()
try {
    ExWindow win(Point{2,0}, 500, 500, "ok");
    win.wait_for_button();
    return 0;
} catch (std::exception& e) {
    std::cerr << e.what() << std::endl;
    return 1;
} catch (...) {
    std::cerr <<"Oops, something went wrong..."<< std::endl;
    return 2;
a
