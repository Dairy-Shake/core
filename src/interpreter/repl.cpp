#include <iostream>
#include <cctype>
#include <string>

namespace Dairyshake::Repl {
	bool st_empty(const std::string& str) {
		return str.find_first_not_of(" \t\n\r") == std::string::npos;
	}

	void execREPL(int argc, char* argv[]) {
		std::string enter;
		
		while (1) {
			std::cout << "\x1b[95m>>>\x1b[0m " << std::flush;

			if (!std::getline(std::cin, enter)) break;
			else if (st_empty(enter)) continue;

			if (enter == "leave") break;
		}
	}
}