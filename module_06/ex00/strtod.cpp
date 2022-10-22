#include <cstdlib>
#include <iostream>

int main(void)
{
	/* char *s = "12.5 37.5"; */
	/* char *s = "12.5f"; */
	/* char *s = "a"; */
	/* char *s = "-inff"; */
	/* char *s = "+inff"; */
	char *s = "-inf";
	/* char *s = "12.5hjk"; */
	char *end;
	double d1;
	float f = 1;
	d1 = strtod(s, NULL);
	std::cout << "D1 -> " << d1 << std::endl;
	std::cout << "f -> " << f << std::endl;
	return (0);
}
