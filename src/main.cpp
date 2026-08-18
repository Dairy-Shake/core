#include <iostream>
#include <vector>
#include <external/CLI11.hpp>

int main(int argc, char** argv) {
	CLI::App app{"Dairy Shake Core"};
	std::string path_file;

	bool debug_mode = 0;

	app.add_flag("-d,--debug", debug_mode, "Activates Debug Mode");

	CLI11_PARSE(app, argc, argv);


    return 0;
}