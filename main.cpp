



#include "prototipi.h"


using namespace std;

int main()
{
    srand(time(0));
    const int dim = 5; // dimensione costante per l'oggetto array, non dinamico;
    list<int> lista1(5); //istanzio un'oggetto lista di 5 elementi: a differenza dell'array, la sua organizzazione interna non prevede elementi contigui: non è possibile accedere direttamente agli element, ma l'inserimento di elementi in testa e al centro sono facilitati;
    array<int, dim> array1; // istanzio un oggetto di classe array; siccome la classe array, a differenza della classe vector, prevede una dimensione fissa, questa va specificata al momento della specializzazione della classe template;
    vector<int> vector1(5);
    deque<char> deque1(5); //istanzio un oggetto di classe deque (double ended queue): gli elementi della deque non sono contigui, consentendo di effettuare più facilmente gli inserimenti non in coda. allo stesso tempo, questa classe container rende possibile l'accesso diretto agli elementi; 

   //carico l'oggetto di classe vector e ne visualizzo il contenuto; nelle funzioni che ho scritto utilizzo gli iteratori: 
    int indiceV = rand() % vector1.size();
    caricaVettoreInt(vector1);
    cout << endl<<"Contenuto dell'oggetto di classe vector: " << endl;
    visualizzaVettoreInt(vector1);
    cout << endl << "Accedo direttamente all'elemento in posizione " <<indiceV << " dell'oggetto di classe vector: " << vector1[indiceV]<<endl;

    //carico e visualizzo il contenuto dell'array non dinamico utilizzando gli iteratori:
    int indiceA = rand() % array1.size();
    CaricaArrayInt(array1);
    cout << endl << "Visualizzo contenuto array non dinamico: " << endl;
    visualizzaArrayInt(array1);
    cout << endl << "Accedo direttamente all'elemento in posizione " << indiceA << " dell'oggetto di classe vector: " << array1[indiceA] <<endl<< endl;
   
    //carico e visualizzo contenuto della lista utilizzando gli iteratori: non mi è possibile accedere direttamente ad un valore per via del posizionamento non contiguo degli valori in ram;
    CaricaListaInt(lista1);
    cout <<endl<< "Visualizzo il contenuto della lista: " << endl;
    visualizzaListaInt(lista1);

    //carico e visualizzo conenuto deque:
    int indiceQ = rand() % deque1.size();
    caricaDequeChar(deque1);
    cout << endl << "Visualizzo il contenuto della deque: " << endl;
    visualizzaDequeChar(deque1);
    // nonostante la Deque non prevede un'organizzazione degli elementi secondo una logica contigua, permette di accedere direttamente ad un elemento:
    cout << endl << "Accedo direttamente all'elemento in posizione " << indiceQ << " della deque: " << deque1[indiceQ] << endl << endl; 






    
    return 0;

}

