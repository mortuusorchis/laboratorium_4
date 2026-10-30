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
/* #include <iostream>
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
} */

//****zadanie_7****

/*#include <iostream>
using namespace std;

double srednia_wazona(double ocena1,double ocena2); // prototyp funkcji

int main() {
 double ocena1, ocena2;
 cout << "Podaj pierwsza ocene: "; 
 cin >> ocena1;
 cout << "Podaj druga ocene: ";
 cin >> ocena2;

 double wynik = srednia_wazona(ocena1, ocena2); // wywołanie funkcji 
 // przekazanie pobranych ocen do funkcji jako argumenty, zwrócony wynik jest zapisywany w zmiennej "wynik"
 cout << "Srednia wazona dla podanych liczb wynosi " << wynik << endl;

 return 0;
}
// definicja funkcji, tutaj jest rzeczywisty kod, który wykonuje funkcja
 double srednia_wazona(double ocena1, double ocena2) // zmienne lokalne dostępne tylko wewnątrz tej funkcji
 {
  double waga1, waga2;

  cout << "Podaj wage dla " << ocena1 << ": ";
  cin >> waga1;
  cout << "Podaj wage dla " << ocena2 << ": ";
  cin >> waga2;

  double srednia = (ocena1 * waga1 + ocena2 * waga2) / (waga1 + waga2);

  return srednia;
}
*/

//****zadanie_8****

/*#include <iostream>
using namespace std;

double srednia_wazona(double ocena1,double ocena2); // prototyp funkcji

int main() {
	double ocena1, ocena2;
	cout << "Podaj pierwsza ocene: "; 
	cin >> ocena1;
	cout << "Podaj druga ocena: ";
	cin >> ocena2;
	
	double wynik = srednia_wazona(ocena1, ocena2); // wywołanie funkcji 
	// przekazanie pobranych ocen do funkcji jako argumenty, zwrócony wynik jest zapisywany w zmiennej "wynik"
	cout << "Srednia wazona dla podanych liczb wynosi " << wynik << endl;

	return 0;
}
// definicja funkcji, tutaj jest rzeczywisty kod, który wykonuje funkcja
double srednia_wazona(double ocena1, double ocena2) // zmienne lokalne dostępne tylko wewnątrz tej funkcji
{ 
	double waga1, waga2;

	cout << "Podaj wage dla " << ocena1 << ": ";
	cin >> waga1;
	cout << "Podaj wage dla " << ocena2 << ": ";
	cin >> waga2;

	double srednia = (ocena1 * waga1 + ocena2 * waga2) / (waga1 + waga2);

	return srednia;
}*/

//****zadanie_8****

/*#include <iostream>
#include <cmath>
using namespace std;


void przeciwprostokatna(double bok1, double bok2);

int main()
{
	double bok1, bok2;
	cout << "Podaj dlugosc pierwszej przyprostokatnej: ";
	cin >> bok1;
	cout << "Podaj dlugosc drugiej przyprostokatnej: ";
	cin >> bok2;

	przeciwprostokatna(bok1, bok2);
	
	return 0;
}

void przeciwprostokatna(double bok1, double bok2) {
	
	double wynik = std::sqrt(bok1 * bok1 + bok2 * bok2);
    cout << "Dlugosc przeciwprostokatnej wynosi: " << wynik << endl;
}*/

//****zadanie_9****
/*#include <iostream>
#include <string>
using namespace std;

// deklaracje funkcji -> funkcje przyjmują dwie liczby i zwracają potem wynik
double dodawanie(double a, double b);
double odejmowanie(double a, double b);
double mnozenie(double a, double b);
double dzielenie(double a, double b); // Ta funkcja ma w sobie zabezpieczenie

int main() {
	string slowo;
	double a, b;
	char znak;

	while (true) {
		cout << "Podaj wartosc a: ";
		cin >> a;
		cout << "Podaj wartosc b: ";
		cin >> b;
		cout << "Okresl jaka operacje chcesz wykonac, wybierz z podanych: (+, -, *, /): ";
		cin >> znak;

	

		switch (znak) {
		case '+': {
			double wynikdodawania = dodawanie(a, b); // <-- Tradycyjne wywołanie funkcji
			cout << "Wynik wynosi: " << wynikdodawania << endl;
			break;
		}
		case '-': {
			double wynikodejmowania = odejmowanie(a, b); // <-- Tradycyjne wywołanie funkcji
			cout << "Wynik wynosi: " << wynikodejmowania << endl;
			break;
		}
		case '*': {
			double wynikmnozenia = mnozenie(a, b); // <-- Tradycyjne wywołanie funkcji
			cout << "Wynik wynosi: " << wynikmnozenia << endl;
			break;
		}
		case '/': {
			double wynikdzielenia = dzielenie(a, b); // <-- Tradycyjne wywołanie funkcji
			if (b != 0) {
				cout << "Wynik wynosi: " << wynikdzielenia << endl;
			}
			break;
		}
		}

		cout << "\nCzy chcesz zakonczyc dzialanie programu? (TAK/NIE): ";
		cin >> slowo;

		if (slowo == "TAK" || slowo == "tak") {
			cout << "To juz koniec. " << endl;
			return 0;
		}
	}
	return 0;
}

// DEFINICJE FUNKCJI

double dodawanie(double a, double b) {
	return a + b; // Zwraca wynik dodawania
}

double odejmowanie(double a, double b) {
	return a - b; // Zwraca wynik odejmowania
}

double mnozenie(double a, double b) {
	return a * b; // Zwraca wynik mnożenia
}

double dzielenie(double a, double b) {
	// Zgodnie z poleceniem: zabezpieczenie dla dzielenia przez 0 
	if (b == 0) {
		cout << "Blad w funkcji! Nie mozna dzielic przez zero." << endl;
		return 0; 
	}
	return a / b; // Zwraca wynik dzielenia
}*/

//****zadanie_10****
#include <iostream>
using namespace std;

// prototypy funkcji 
double suma(double liczba_skladnikow);       // Wersja 1: oblicza i ZWRACA sumę (dlatego double)
void wartosc_sumy(double liczba_skladnikow); // Wersja 2: oblicza i OD RAZU WYŚWIETLA sumę (dlatego void)


int main() {
	
	double liczba_skladnikow;
	cout << "Podaj ile masz skladnikow: ";
	cin >> liczba_skladnikow;

	//wersja 1: funkcja zwraca wynik wiec trzeba go wyswietlić w main
	double wynik_wersja1 = suma(liczba_skladnikow);
	cout << "Suma skladnikow to: " << wynik_wersja1 << endl;

	//wersja 2: funckja nic nie zwraca, sama wszytsko wyswietli
	wartosc_sumy(liczba_skladnikow);
	
	return 0;
}
// wersja 1: przyjmuje argument, pyta o liczby i zwraca sume
double suma(double liczba_skladnikow) { 
	double suma_liczb = 0;
	double aktualny_skladnik;

	for (int i = 0; i < liczba_skladnikow; i++) {
		cout << "Podaj sklanik nr " << i + 1 << ": ";
		cin >> aktualny_skladnik;
		suma_liczb = suma_liczb + aktualny_skladnik;
	}
	return suma_liczb; // zwracamy do mian
}
// wersja 2: przyjmuje argument, pyta o liczby ale nic nie zwraca --> sama wyświetla wynik
void wartosc_sumy(double liczba_skladnikow) {
	double suma_liczb = 0;
	double aktualny_skladnik;
	
	for (int i = 0; i < liczba_skladnikow; i++) {
		cout << "Podaj sklanik nr " << i + 1 << ": ";
		cin >> aktualny_skladnik;
		suma_liczb = suma_liczb + aktualny_skladnik;
	}
	cout << "Wyliczona suma to " << suma_liczb << endl;
}