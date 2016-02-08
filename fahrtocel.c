#include <stdio.h>

int main()
{
	printf("\n %20s %15s \n %20s %15s \n", "Fahrenheit", "Celsius", "==========", "=======");
	
	int Fahrenheit;

	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 10)
	{
		printf("%21d %15.0f \n", Fahrenheit, (5.0/9.0)*(Fahrenheit-32));

	}
		
	return 0;

}