#include <iostream>
using namespace std;

#define PI 3.14159

int main(){
	int raio;
	float perim,area;
	
	cout << "Entre com o valor do raio: ";
	cin >> raio;

	perim = 2 * PI * raio;
	area = PI * raio * 2;
	
	cout << "O perimetro da circuferencia de raio " << raio << " eh " << perim << endl;

	cout << "A area eh " << area << endl;

	return (0);
}
