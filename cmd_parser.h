#include <string>

enum Command {
    DAEMON,
    STATUS,
    START,
    STOP,
    RESTART,
    KILL,
    ECHO
};

class CmdParser {
private:
	int argc;
	char **argv;
    int cursor;
    Command command_;
    std::string program_;
    std::string conffile_;
public:
	CmdParser(int argc, char **argv)
		:argc(argc), argv(argv), cursor(0), command_(DAEMON) {};
    Command command() { return this->command_; }
    void parse();
};