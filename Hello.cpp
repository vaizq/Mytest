#include <iostream>
#include <string>

std::string s = "Hello world!";

int main(int argc, char *argv[])
{	
	for(int i = 0; i < s.size(); i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j < i)
				std::cout << " ";
			else
				std::cout << s[j] << std::endl;
		}
	}
}
