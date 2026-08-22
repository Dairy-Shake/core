#ifndef REPL_HPP
#define REPL_HPP

#include <string>

namespace Dairyshake::Repl {
	bool st_empty(const std::string& str);
	void execREPL(int argc, char* argv[]);
}
#endif