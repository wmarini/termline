#ifndef APP_EXCEPTIONS_H
#define APP_EXCEPTIONS_H

#include <stdexcept>
#include <string>

namespace app {

class TermlineException : public std::runtime_error {
public:
    TermlineException(const std::string& message) 
    : std::runtime_error(message) {}
};

void handle_exception();

} // namespace app

#endif // APP_EXCEPTIONS_H
