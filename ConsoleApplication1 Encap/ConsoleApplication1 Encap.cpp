// ConsoleApplication1 Encap.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/TEST.h"
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/test.cpp"
using namespace std;
/*
void addOnep(int* pa) {
	*pa += 1;
}

void addOne(int& b) {
	b += 1;
}
*/
int main(int argc, const char* argv[]) {
	/*
	vector<string> strArray;
	
	cout << "Hello, World" << endl;

	string str;
	//string word = "toto";
	

	int a = 1;
	int b = 1;

	addOnep(&a);
	addOne(b);

	cout << a << endl;
	cout << b << endl;
	*/
	
	Point point;
	point.x = 0.1f;
	point.y = 7.2f;
	point.z = 3.4f;

	cout << point.ToString();

	
	return 0;


}

