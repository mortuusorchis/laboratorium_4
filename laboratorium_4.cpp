//****zadanie_1****
/*
#include <iostream>
#include <string>
using namespace std;


void powitanie(string imie) {
	cout << "czesc " << imie << endl; // proptotyp funkcji  
}
int main()

{  /*
	string imie;
	cout << "Podaj imie: ";
	cin >> imie;

	powitanie(imie);

	return 0;
} */

// ****zadanie_2****
/*
#include <iostream>
using namespace std;

void tabliczka(); 

int main() {

tabliczka(); // wywołanie funkcji
	return 0;
}
void tabliczka() {// definicja funkcji 
	for (int a = 1; a <= 10; a++) {
			for (int b = 1; b <= 10; b++) {
				cout << a << "*" << b << "=";
				cout << a * b << "\t";

			}
			cout << endl;
		}
		return; // nie może być return 0, bo void jest funkcją, która nic nie zwraca!!
	} */
	
//****zadanie_3**** 
/*
#include <iostream>
using namespace std;

void wyswietlwieksza(int a, int b);
int zwrocwieksza(int a, int b);
// prototypy obu funkcji

int main() {
	int liczba1, liczba2;
	cout << "Podaj pierwsza liczba: ";
	cin >> liczba1;
	cout << "Podaj druga liczba: ";
	cin >> liczba2;

	wyswietlwieksza(liczba1, liczba2); // wywołanie funkcji void i przekazanie do niej kopii wartości z liczba1 i liczba2

	int wynik = zwrocwieksza(liczba1, liczba2); // wywołanie funkcji int, która oblicza wynik i wysyła go z powrotem
	cout << "Zwrocona wieksza wartosc to : " << wynik << endl; // przypisanie tej wartości do nowej zmiennej 'wynik'

	return 0;
}
// początek ciała funkcji void --> typ void wykonuje akcję ale nic nie zwraca
void wyswietlwieksza(int a, int b) {
	if (a > b) {
		cout << "Liczba " << a << " jest wieksza.\n";
	}
	else if (b > a) {
		cout << "Liczba " << b << " jest wieksza.\n";
    }
	else {
		cout << "Obie liczby sa rowne.\n";
	}
}
// początek ciała funkcji int --> typ int musi fizycznie zwrócić wartość do main
int zwrocwieksza(int a, int b) {
	if (a > b) {
		return a; // return natychmiat przerywa działanie funkcji, zwraca a do main
	}
	else {
		return b;
	}
} */
//****zadanie_4****
/* 
#include <iostream>
using namespace std;

void wyswietlnajmniejsza(int a, int b, int c);
int zwrocnajmniejsza(int a, int b, int c);
// prototypy obu funkcji

int main() {
	int liczba1, liczba2, liczba3;
	cout << "Podaj pierwsza liczba: ";
	cin >> liczba1;
	cout << "Podaj druga liczba: ";
	cin >> liczba2;
	cout << "Podaj trzecia liczba: ";
	cin >> liczba3;

	wyswietlnajmniejsza(liczba1, liczba2, liczba3);

	int wynik = zwrocnajmniejsza(liczba1, liczba2, liczba3);
	cout << "Zwrocona najmniejsza wartosc to: " << wynik << endl;

	return 0;
}
void wyswietlnajmniejsza(int a, int b, int c) {
	int najmniejsza = a; // Na start zakładamy, że 'a' jest najmniejsza

	if (b < najmniejsza) {
		najmniejsza = b; // Jeśli 'b' jest mniejsze, to ono staje się najmniejszą
	}
	if (c < najmniejsza) {
		najmniejsza = c; // Jeśli 'c' jest jeszcze mniejsze, to ono wygrywa
	}
	cout << "Najmniejsza wartosc to: " << najmniejsza << "\n";

}
	

int zwrocnajmniejsza(int a, int b, int c) {
	int najmniejsza = a; // Ponownie zakładamy, że 'a' jest najmniejsza

	if (b < najmniejsza) {
		najmniejsza = b; // Jeśli 'b' jest mniejsze, aktualizujemy zmienną
	}
	if (c < najmniejsza) {
		najmniejsza = c; // Jeśli 'c' jest mniejsze, aktualizujemy zmienną
	}

	return najmniejsza; // Zwracamy wyznaczoną liczbę do funkcji main()
} */

//****zadanie_5****
/*
#include <iostream>
using namespace std;

double poletrojkata(double a, double b); // prototyp funkcji

int main() {
	double podstwa, wysokosc;
	cout << "Podaj podstawe trojkata: ";
	cin >> podstwa;
	cout << "Podaj wysokosc trojkata: ";
	cin >> wysokosc;

	double pole = poletrojkata(podstwa, wysokosc);
	
	cout << "Podwojone pole trojkata to: " << pole * 2 << endl;
	return 0;
}

double poletrojkata(double a, double b) { // bez ; bo to ciało funkcji double !!

	double pole = (a * b) / 2.0;
	cout << "Pole trojkata to " << pole << endl;

	return pole;
} */

//****zadanie_6****
#include <iostream>
using namespace std;

void wyswietldzielniki(int n);

int main() {
	int liczba;

	cout << "Podaj liczbe calkowita dodatnia (>0): ";
	cin >> liczba;

	if (liczba <= 0) {
		cout << "Blad! Podana liczba musi byc wieksza od 0." << endl;
		return 1; // Kończymy program z kodem błędu
	}
	wyswietldzielniki(liczba);

	return 0;
}
void wyswietldzielniki(int n) {
	cout << "Dzielniki " << n << " to: ";

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}