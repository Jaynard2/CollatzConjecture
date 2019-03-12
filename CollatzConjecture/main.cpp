#include <iostream>
#include <sstream>
#include <vector>
#include "Collatz.h"

int main(int argc, char** arg)
{
	while (true)
	{
		unsigned long num;
		std::string temp;
		std::cin >> temp;

		if (!temp.compare("quit"))
			break;

		try
		{
			num = stoul(temp);

			std::vector<unsigned long> nums = { num };
			std::string tab = "";
			static unsigned long counter = 0;

			for (unsigned long i = 0; nums[i] != 1; ++i)
			{
				static int width = 0;
				static bool increase = true;

				nums.push_back(collatz.Equation(nums[i]));
				++counter;

				if (nums[i + 1] % 2 == 0)
					std::cout << tab << nums[i + 1] << std::endl;
				else
				{
					if ((width == 50) && increase)
						increase = false;
					if ((width == 0) && !increase)
						increase = true;

					if (increase)
					{
						tab += "  ";
						++width;
					}
					else
					{
						if(tab != "")
							tab.pop_back();
						--width;
					}
					std::cout << tab << nums[i + 1] << std::endl;
				}
			}
			std::cout << "Steps: " << counter << std::endl;
		}
		catch (const std::out_of_range& e)
		{
			std::cout << "Number to large" << std::endl;
		}
		catch (const std::invalid_argument& e)
		{
			std::cout << "Not a number" << std::endl;
		}
	}

	return 0;
}
