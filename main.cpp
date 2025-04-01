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
		if (val>=1.0 && val<=2.0)
		{
			s = val*(-0.5);
			std::cout << val << " " << s << std::endl;
		}
		else 
		{
			s = val*(0.4);
			std::cout << val << " " << s << std::endl;
		}
		counter++;
		sum = sum + s;
	}
	std::cout << "sum: " << sum <<std::endl;
	double media;
	std::cout << "counter (dati totali): " << counter <<std::endl;
	media = sum/counter;
	std::cout << "media: " << media <<std::endl;
	
    return 0;
}
