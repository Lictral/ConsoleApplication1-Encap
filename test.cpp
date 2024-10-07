#include <iostream>
#include "\Users\lguillermont\source\repos\ConsoleApplication1 Encap/TEST.h"
#include <sstream>
using namespace std;

std::string Point::ToString() {
	std::stringstream stream;
	
	stream << "Point: x:" << x << "y:" << y << "z:" << z;
	
	return stream.str();

}
