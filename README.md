#include <iostream>
#include <fstream>

int main()
{
	std::fstream fstr("data.txt");
	if (fstr.fail())
	{
		std::cerr << "file not found" << std::endl;
		return 1;
	}
	
	double val;
	double s;
	double sum = 0;
	int counter = 0;
	while (fstr>>val)
	{
		if (fstr>=1.0 & fstr<=2.0)
		{
			s = val*(-0.5);
			
		}
		else 
		{
			s = val*(0.4);
		}
		counter++;
		sum += s;
	}
	
	
	
    return 0;
}

