#include "termline.h"
#include <iostream>
#include <readline/readline.h>
#include <readline/history.h>

namespace app {

Termline& Termline::instance()
{
    static Termline app;
    return app;
}

void Termline::history()
{
    HIST_ENTRY** hist_list = history_list();
    if (hist_list == nullptr) {
        return;
    }
    for (int i = 0; hist_list[i] != nullptr; ++i) {
        std::cout << hist_list[i]->line << std::endl;
    }

}

int Termline::run()
{
    init();

    for (bool done = false; done == false; ) {
        line_ = readline(prompt_.c_str());
        if (line_ == nullptr or *line_ == '\0') {
            done = true;
        } else {
            std::string line{line_};
            if (line_[0] != '\0') {
                add_history(line_);
            }
            free(line_);
            std::cout << "You entered: " << line << std::endl;
            if (line == "quit") {
                done = true;
                continue;
            } else if (line == "help") {
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else if (line == "history") {
                history();
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else if (line == "read") {
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else if (line == "add") {
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else if (line == "list") {
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else if (line == "remove") {
                std::cout << "You can type 'quit' to exit the program." << std::endl;
            } else {
                std::cout << "You can type 'help' for help." << std::endl;
            }
        }
    }
    return 0;
}

void Termline::init()
{
    rl_readline_name ="Termline";
}
} // namespace app
