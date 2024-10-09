// ConsoleApplication1 Encap.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/TEST.h"
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/test.cpp"
#include"\Users\lguillermont\source\repos\ConsoleApplication1 Encap/ENTITE.h"
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/entite.cpp"
#include "Entite2.h"
#include "Abstraite.h"
#include "Alive.h"

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
	
	
	Point point;
	point.x = 0.1f;
	point.y = 7.2f;
	point.z = 3.4f;

	cout << point.ToString();
	

	Vector2 vector2;
	vector2.ToSetX(2.3);
	vector2.ToSetY(4.3);
	cout << vector2.ToGetX() << "\n" << vector2.ToGetY();
	

	Vector2 Pos;
	Entite2 entite2(Pos);
	entite2.SetPos(4.31, 15.96);
	cout << entite2.ToString();
	*/
	/*
	Vector2 vec2;
	Abstraite abs(vec2, 0);
	abs.SetSpeed(5);

	Vector2 new_direction(2.5, 1.3);
	abs.Direction(new_direction);

	abs.Deplacer(new_direction);
	cout << abs.ToString() << endl;
	*/

	Alive alive(5);
	alive.SetHpm(10);
	alive.SetHp(2);
	alive.Damage(5);

	cout << alive.hp << endl;


	return 0;
}

