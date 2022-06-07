// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include "./include/FileManip.hpp"

int main ( int argc, char **argv )
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Expected: filename, string_1, string_2" << std::endl;
		return (0);
	}
	FileManip manip = FileManip(argv[1], argv[2], argv[3]);
	manip.replace();
	return 0;
}
