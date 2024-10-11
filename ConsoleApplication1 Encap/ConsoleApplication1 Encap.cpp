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
#include "StaticObjet.h"
#include "BreakableObject.h"
#include "Mob.h"

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
	

	Alive alive(5);
	alive.SetHpm(10);
	alive.SetHp(2);
	alive.Damage(5);

	cout << alive.hp << endl;

	StaticObjet stobj(1,2);
	stobj.SetXY(7.2, 6.9);
	cout << stobj.ToString() << endl;
	

	BreakableObject brobj(1, 2, 10);
	brobj.Set_XY_HPM(5.3, 8.45, 10);
	brobj.Damage(5);
	cout << brobj.ToString() << endl;
	*/
	
	Vector2 vec2(1.2, 3.6);
	Vector2 new_dir(2.6, 8.6);
	Mob mob(7.4, 5.6, 10, vec2);
	cout << mob.ToString() << endl;
	mob.Damage(5);
	mob.Deplacer(new_dir);

	return 0;
}

