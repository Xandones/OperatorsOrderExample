#include <iostream>

int main()
{
	int x, y, w, a, b, c;
	int z = 0;

	std::cout << "Type 5 integer values leaving a blank space between them then press <ENTER>: " << "\n";
	std::cin >> x >> y >> w >> a >> b >> c;
	z = (((x * y) * w) + (a * b)) + c;
	/*
		 The operators are calculated from the inner parethesis to the outer.
		 
		 The matemathical operators order is:
		 1st - Potentiation and radiciation (from left to right, in the order of apearance).
		 2nd - Multiplication, division and module (from left to right, in the order of apearance).
		 3rd - Sum and subtraction (from left to right, in the order of apearance).
	*/
	std::cout << "z = (((x * y) * w) + (a * b)) + c = " << z << "\n";
	system("PAUSE");
}