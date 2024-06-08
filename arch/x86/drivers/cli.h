#ifndef CLI_H
#define CLI_H
#include "../inc/types.h"
#include "../io/GlobalObj.h"
#define COMMAND_IN_DIR                          "cd"
#define COMMAND_OUT_DIR                         ".."
#define COMMAND_LIST_DIR                        "ls"
#define COMMAND_DELETE_CONTENT                  "rm"
#define COMMAND_MAKE_FILE                       "mkfile"
#define COMMAND_MAKE_DIR                        "mkdir"

class cli
{
public:
    void init_cli();
    void cli_statr_screen();
    void execute_command(char* command);
    char* get_path();
};
#endif