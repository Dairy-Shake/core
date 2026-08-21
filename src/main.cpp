#include <iostream>
#include <vector>
#include <string_view>
#include <string>

void execREPL();
void show_help();
bool st_empty(const std::string& str);

int main(int argc, char* argv[]) {
	if (argc == 1) {
		execREPL();
		return 0;
	}

	std::string_view inputFile = "";

	for (int i = 1; i < argc; ++i) {
		std::string_view arg = argv[i];
		if (arg == "-h" || arg == "--help") {
			show_help();
			return 0;
		} else if (arg == "-v" || arg == "--version") {
			std::cout << "[ \x1B[33mVERSION\x1B[0m ] 1.1.0-alpha" << std::endl;
			return 0;
		}
	}
}

void show_help() {
	std::cout
		<< "[ \x1B[33mHELP\x1B[0m ] Displaying -h/--help information.\n\n"
		<< "Usage: dairyshake [flags] [args]\n"
		<< "  if you use 'dairyshake' => Open REPL\n"
		<< "  if you use 'dairyshake -h' (or --help) => Displays help\n"
		<< "  if you use 'dairyshake -v' (or --version) => Displays the project version\n"
		<< "  { Warning: \x1b[094mNot yet implemented\x1b[0m } | if using 'dairyshake -f file.txt' (or --file) => Interprets commands from a local file"
		<< std::endl;
}

bool st_empty(const std::string& str) {
	for (char c : str) {
		if (c != ' ' || c != 0x09) {
			return false;
		}
	}
	return true;
}

void execREPL() {
	std::string enter;

	while (true) {
		std::cout << "\x1b[95m>>>\x1b[0m ";

		if (!std::getline(std::cin, enter)) break;
		else if (enter == "leave") break;
		else if (st_empty(enter)) continue;
	}
}