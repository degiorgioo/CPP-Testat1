#include <string>
#include <vector>

#ifndef DIGITS_H_
#define DIGITS_H_

	std::vector<std::vector<std::string>> const numbers{
		{"  -   ", " | |  "," | |  ", " | |  ", "  -   "},
		{"      ", "   |  ","      ", "   |  ", "      "},
		{"  -   ", "   |  ","  -   ", " |    ", "  -   "},
		{"   -  ", "    | ","   -  ", "    | ", "   -  "},
		{"      ", " |  | ","   -  ", "    | ", "      "},
		{"   -  ", "  |   ","   -  ", "    | ", "   -  "},
		{"   -  ", "  |   ","   -  ", "  | | ", "   -  "},
		{" —-   ", "   |  ","   |  ", "   |  ", "      "},
		{"   -  ", "  | | ","   -  ", "  | | ", "   -  "},
		{"  -   ", " | |  ","  -   ", "   |  ", "  -   "},
	};

	std::vector<std::vector<std::string>> const error{
		{"   _  ", "  |   ","   _  ", "  |   ", "   _  "},
		{"      ", "      ","  _   ", " |    ", " |    "},
		{"      ", "      ","  _   ", " |    ", " |    "},
		{"      ", "      ","  _   ", " | |  ", "  _   "},
		{"      ", "      ","  _   ", " |    ", " |    "},
	};

	void printLargeNumber(int i, std::ostream &outputStream);
	void printError(std::ostream &outputStream);

#endif /* DIGITS_H_ */
