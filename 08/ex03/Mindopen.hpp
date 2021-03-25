#pragma once
#include <fstream>
#include <array>
#include <queue>
#include <cstdlib>

namespace Mindopen {
	class Instruction;
	class MovePrevious;
	class MoveNext;
	class Write;
	class Read;
	class Inc;
	class Dec;
	class StartLoop;
	class EndLoop;
	class Mindopen
	{
	public:
		Mindopen();
		Mindopen(const Mindopen &);
		Mindopen &operator=(const Mindopen &);
		~Mindopen();
		void read(std::ifstream & file);
		void execute(void);
	private:
		std::vector<Instruction*> commands;
		std::string memory;
		static bool checkalpha(char c);
	};
}