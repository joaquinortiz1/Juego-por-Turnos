#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 
#include <windows.h>
 
 
using namespace std;
 
 
int auxiliar;
bool turno ;
class Nodo{
	public:
		char valor;
	    int Index;
	    Nodo *sigPtr;
	    Nodo *antrPtr;
	    Nodo *arrPtr;
	    Nodo *abaPtr;
 
		Nodo(char val){
			valor=' ';
	        //indice a -1
	        Index = val;
	        //se le mandara al nodo el numero de indice
	        sigPtr = 0;
	        antrPtr = 0;
	        arrPtr = 0;
	        abaPtr = 0;
   		}
};
 
class Lista{
	private:
 
	public:
	    Nodo *PrimeroPtr;
	    Nodo *UltimoPtr;
	    int tamano;
 
		Lista(){
			PrimeroPtr=UltimoPtr=0;
	        tamano=0;
	    }
 
		bool IsEmpty(){
        return PrimeroPtr==0;
    	}
 
void InsertAtEndDbl(int val){
	Nodo *nuevoPtr=new Nodo(val);
 
	if (IsEmpty()){
		PrimeroPtr = UltimoPtr = nuevoPtr;
	}else{
		UltimoPtr->sigPtr = nuevoPtr;
     	nuevoPtr->antrPtr = UltimoPtr;
      	UltimoPtr = nuevoPtr;
      	tamano++;
	}
}
 
void createListX0(){
	for(int i=1; i<=9; i++){
		InsertAtEndDbl(i);
	}
 
	Nodo * anttemp = PrimeroPtr;
    Nodo *actual = PrimeroPtr;
 
	for(int j=1; j<=9; j++){
		actual = actual->sigPtr;
 
		if(j>2&&j<9){
			anttemp->abaPtr = actual;
            actual->arrPtr = anttemp;
            anttemp = anttemp->sigPtr;         
        }                
    }  
}
 
void Imprimir(){
	cout<<" "<<endl;
	if(IsEmpty()){
        cout<<"Vacio"<<endl;
    }else{
		Nodo *Actual=PrimeroPtr;
        cout<<"["<<Actual->valor<<"] ";
        while(Actual->sigPtr!=0){
            Actual=Actual->sigPtr;
            cout<<"["<<Actual->valor<<"] ";
            if(Actual->Index==3 && Actual->Index<=9 || Actual->Index==6 && Actual->Index<=9){
                cout<<endl;
            }
        }
    }
}
 
void LlenarJugador1(int posicion){
	char simbolo = 'X';
	Nodo *actual=PrimeroPtr;
	int auxiliar = 0;
 
	if(posicion == 1){
		actual->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 2){
		actual->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 3){
		actual->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 4){
		actual->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 5){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 6){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 7){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 8){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else{
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}	
	turno == false;	
 }  
 
 void LlenarJugador2(int posicion){
	char simbolo = '0';
	Nodo *actual=PrimeroPtr;
	int auxiliar = 0;
 
	if(posicion == 1){
		actual->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 2){
		actual->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 3){
		actual->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 4){
		actual->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 5){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 6){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 7){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else if(posicion == 8){
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	else{
		actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor = simbolo;
		auxiliar++;
	}
	turno == true;
 }  
 
 void Gane(){
		Nodo *actual=PrimeroPtr;
 
		//GANE HORIZONTAL
		if (actual->valor == 'X' && actual->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->valor == 'X') {
			cout<<"Gano de manera Horizontal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->valor=='0' && actual->sigPtr->valor == '0' && actual->sigPtr->sigPtr->valor=='0')
		{
			cout<<"Gano de manera Horizontal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X'){
			cout<<"Gano de manera Horizontal"<<endl;
		}
		if(actual->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0'){
			cout<<"Gano de manera Horizontal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' &&  actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor =='X'){
			cout<<"Gano de manera Horizontal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' &&  actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor =='0'){
			cout<<"Gano de manera Horizontal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
 
 
		//GANE DIAGONAL
		if(actual->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor =='X'){
			cout<<"Gano de manera Diagonal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor =='0'){
			cout<<"Gano de manera Diagonal"<<endl;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X'){
			cout<<"Gano de manera Diagonal";
			auxiliar = 9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0'){
			cout<<"Gano de manera Diagonal"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
 
		//GANE VERTICAL
		if(actual->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == 'X'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->valor == '0' && actual->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == '0'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == 'X'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == '0'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == 'X' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == 'X'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
		if(actual->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->valor == '0' && actual->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr->sigPtr-> valor == '0'){
			cout<<"Gano de manera vertical"<<endl;
			auxiliar =9;
			system("PAUSE");
		}
 }
 
 
friend ostream &operator<<(ostream &os, Lista &l){
    if(l.IsEmpty()){
        return os;
        Nodo *actPtr=l.PrimeroPtr;
        cout<<actPtr->valor<<endl;
        while(actPtr->sigPtr!=0){
            actPtr=actPtr->sigPtr;
            cout<<"->"<<actPtr->valor;
        }
        return os;
    };
}
};
 
int main(){
	system("CLS");
	system("Color 8F");
	bool seguir = true;
 
	string opcion;
	int posicion;
 
	Lista l=Lista();
	l.createListX0();
	cout<<"--------------------------------- Tic Tac Toe ---------------------------------"<<endl;
	while(auxiliar<=3){
		if(turno == true){
			cout<<"Ingrese posicion: ";
			cin>>posicion;
			l.LlenarJugador1(posicion);
			l.Imprimir();
			l.Gane();
			auxiliar++;
			cout<<"\n";
			cout<<"\n";
		}
		else if(turno == false){
			cout<<"Ingrese posicion: ";
			cin>>posicion;
			l.LlenarJugador2(posicion);
			l.Imprimir();
			l.Gane();
			auxiliar++;
			cout<<"\n";
			cout<<"\n";
 
			system("PAUSE");
		}
	}
	return 0;
}
