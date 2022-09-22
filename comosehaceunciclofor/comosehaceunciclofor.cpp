// comosehaceunciclofor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{

	cout << "digita el X: " << endl;
	int matriz;
	cin >> matriz;
	
	int aaaaaaa;
	cout << "digita el Y " << endl;
	cin >> aaaaaaa;

	for (int ciclo = 0; ciclo < matriz; ciclo++) {
		for (int github = 0; github < aaaaaaa; github++) {

			if (ciclo == 0 || github == 0|| ciclo == matriz - 1 || github == aaaaaaa - 1) {
				cout << "1";

			}
			else {
				cout << "0";
			}
			
			
			
			
		}
		cout << "\n";
	}

	



}
