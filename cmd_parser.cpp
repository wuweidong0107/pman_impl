#include <string>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <sstream>
#include <map>
#include "cmd_parser.h"

namespace {
    map<string, Command> commandMap = {
        {"status", STATUS},
        {"start", START},
        {"stop", STOP},
        {"restart", RESTART},
        {"kill", KILL},
        {"echo", ECHO},
    };
};

void CmdParser::parse()
{

}