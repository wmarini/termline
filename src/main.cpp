#include "termline.h"
#include "appexceptions.h"
#include <iostream>

int main() 
{
    using namespace app;
    try {
        auto app = Termline::instance();
        app.run();
    } catch (...) {
        handle_exception();
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}
