
#include "prototipi.h"


using namespace std;

void caricaVettoreInt(vector<int>& vettore) {
	vector<int>::iterator iteratore;
	for (iteratore = vettore.begin(); iteratore != vettore.end(); iteratore++) {
		*iteratore = rand() % 101;
	}

	cout << endl << "Vettore caricato con successo." << endl;


}

void visualizzaVettoreInt(vector<int> vettore)
{
	vector<int>::iterator iteratore;

	for (iteratore = vettore.begin(); iteratore != vettore.end(); iteratore++) {
		cout << *iteratore << endl;
	}
}


void CaricaArrayInt(array<int, 5 >& array1) {
	array<int, 5>::iterator iteratore;
	for (iteratore = array1.begin(); iteratore != array1.end(); iteratore++) {
		*iteratore = rand() % 101;
	}

	cout << endl << "Array caricato con successo." << endl;
}


void visualizzaArrayInt(array<int, 5> array1)
{
	array<int, 5>::iterator iteratore;

	for (iteratore = array1.begin(); iteratore != array1.end(); iteratore++) {
		cout << *iteratore << endl;
	}

}

void CaricaListaInt(list<int>& lista1)
{
	list<int>::iterator iteratore;
	for (iteratore = lista1.begin(); iteratore != lista1.end(); iteratore++) {
		*iteratore = rand() % 101;
	}

	cout << "Lista caricata con successo." << endl;
}

void visualizzaListaInt(list<int> lista1)
{
	list<int>::iterator iteratore;
	for (iteratore = lista1.begin(); iteratore != lista1.end(); iteratore++) {
		cout << *iteratore << endl;
	}
}

void caricaDequeChar(deque<char>& deque1)
{
	deque<char>::iterator iteratore;
	for (iteratore = deque1.begin(); iteratore != deque1.end(); iteratore++) {
		*iteratore = (rand() % 26) + 97;
	}

	cout << endl << "Deque caricata con successo" << endl;
}

void visualizzaDequeChar(deque<char> deque1)
{
	deque<char>::iterator iteratore;
	for (iteratore = deque1.begin(); iteratore != deque1.end(); iteratore++) {
		cout << *iteratore << endl;
	}
}