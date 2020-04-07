#include<iostream>
using namespace std;
struct nodo {
int info;
nodo*sgte;	
};

void push (nodo*&pila,int x);
int pop (nodo*&pila);
void encolar (nodo*&fte,nodo*&fin,int x);
int desencolar (nodo*&fte,nodo*&fin);

int main(){
	nodo* p = NULL;
	nodo* fte = NULL;
	nodo* fin = NULL;
	nodo* pila = NULL;
	int i,s;
	
	cout<<"Ingrese un numero menor a 15 para pila: "<<endl;
	cin>> i;
	
	cout<<"Ingrese un numero menor a 15 para cola: "<<endl;
	cin>>s;
	
	for (i;i<16;i++){
		push (pila,i);
	}
	
	while (pila)
	cout<<pop(pila)<<" ";
	
	cout<<endl<<endl;
	
	for (s;s<16;s++){
	encolar(fte,fin,s);
	while (fte)
	cout<<desencolar(fte,fin)<<" ";
	}

}

void push(nodo *&pila, int x){
    nodo *p = new nodo();
    p->info = x;
    p->sgte = pila;

    pila = p;

    return;
}

void encolar(nodo* &fte, nodo* &fin, int x){
    nodo *p = new nodo();
    p->info = x;
    p->sgte = NULL;

    if (fte == NULL) fte = p; else fin->sgte = p;
    fin = p;

    return;
}

int pop(nodo* &pila){
    nodo *p = pila;
    int x = p->info;
    pila = p->sgte;

    delete p;

    return x;
}

int desencolar(nodo* &fte, nodo*&fin){
    nodo *p = fte;
    int x = p->info;
    fte = p->sgte;
    if (fte == NULL) fin = NULL;

    delete p;

    return x;
}

//Esto es una prueba, x2





