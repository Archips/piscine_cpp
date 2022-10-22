#include <cstdlib>
#include <iostream>

int main(void)
{
	/* char *s = "12.5 37.5"; */
	/* char *s = "12.5f"; */
	/* char *s = "a"; */
	/* char *s = "-inff"; */
	/* char *s = "+inff"; */
	char *s = "nanf";
	/* char *s = "12.5hjk"; */
	char *end;
	double d1, d2;
	d1 = strtod(s, &end);
	d2 = strtod(end, NULL);
	std::cout << "D1 -> " << d1 << " & D2 -> " << d2 << std::endl;
	return (0);
}
