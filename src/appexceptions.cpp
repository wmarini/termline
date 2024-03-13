#include "appexceptions.h"
#include <iostream>

namespace app {

void handle_exception()
{
    try {
        throw;
    } catch (const TermlineException& e) {
        std::cerr << "Termline exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
    }
    std::exit(EXIT_FAILURE);
}

} // namespace app
