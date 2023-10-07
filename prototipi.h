#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include <list>
#include <vector>
#include <array>
#include <deque>
using namespace std;
//funzione che mi permette di caricare un oggetto di classe vector con valori randomici
void caricaVettoreInt(vector<int> &vettore);

//funzione che mi permette di visualizzare il contenuto di un oggetto di classe vector:
void visualizzaVettoreInt(vector<int> vettore);


//Funzione che mi permette di riempire l'array non dinamico di valori  casuali:
void CaricaArrayInt(array<int, 5 > &array1);


//Funzione che mi permette di visualizzare il contenuto di un oggetto di classe array:
void visualizzaArrayInt(array<int, 5> array1);

//Funzioneche mi permettedi caricare con valori randomici un oggetto di classe  lista:
void CaricaListaInt(list<int> &lista1);

//Funzione che mi permette di visulizzare il contenuto della lista:
void visualizzaListaInt(list<int> lista1);

//Funzione che mi permette di caricare un deque (double ended queue) con interi randomici, che corrisponderanno poi a caratteri:
void caricaDequeChar(deque<char>& deque1);

//funzione che mi permette di visualizzare il conenuto della dequeue di caratteri;
void visualizzaDequeChar(deque<char> deque1);