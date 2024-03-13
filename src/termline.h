#ifndef TERMLINE_H
#define TERMLINE_H

#include <string>

namespace app {

class Termline final {
public:
    static Termline& instance();

    ~Termline() = default;
    Termline(const Termline&) = default;
    Termline& operator=(const Termline&) = default;

    int run();

private:
    Termline() = default;
    Termline(Termline&&) = delete;
    Termline& operator=(Termline&&) = delete;

    void init();
    void history();

private:
    std::string prompt_{"> "};
    char* line_{nullptr};
};

} // namespace app

#endif // TERMLINE_H
