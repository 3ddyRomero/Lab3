#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
using std::string;

int Elprimero(){
   
   
   //string cadena;
   srand(time(NULL));
   int secuencia = 10000+rand()%(99999-10000);
   
   string cadena = to_string(secuencia);
   string n;
   int intentos=5;
   string ingreso;
   int contador=0; 
   cout<<"Los numeros en cadena: "<<cadena<<endl;
       while(intentos > 0){
            cout<<"Intente nuevamente."<<endl;
            cout<<"Ingrese el numero a comparar: "<<endl;
            cin>>n;
       }while(n.length()<5){	   
        cout<<"Ingrese la secuencia de cinco numeros: "<<endl;
        cin>>n;
       }
       if(n.compare(cadena)==0){
           cout<<"Adivino todos los numeros! "<<endl;
           intentos = 0;
       }else{
          for(int i=1; i<cadena.length()-1;i++){
            for(int j=1; j<n.length()-1;j++){
              if(cadena[i]==n[j]){
                 if(i==j){
                   cout<<""<<endl;
                   cout<<"Es igual en la posicion: "<< i <<endl;
                   contador++;
                 }
              }
            }
          }
       cout<<"La cantidad de numeros iguales es: "<<contador<<endl;
       intentos--;
       contador=0;
   }    
	

}

int Elsegundo(){
   
   cout<<"Ingrese el polinomio:\n";
   


}

int Eltercero(){
   
}


int menu(){

    int opcion = 0;
    do{
        cout<<"     MENU"<<endl
            <<"Opcion  1"<<endl
            <<"Opcion  2"<<endl
            <<"Opcion  3"<<endl
	    <<"Salir 4"<<endl
            <<"Ingrese una opcion: ";


            cin >> opcion;

            if(opcion < 1 || opcion > 4){
                cout <<"Opcion fuera de rango, intente de nuevo"<<endl;
                opcion = 0;
            }
            if(opcion == 1){
		Elprimero();  
		

            }

            if(opcion == 2){
             


            }

            if(opcion == 3){

            }

            if(opcion == 4){
	      printf("Hasta pronto.\n");
	    }
     }while (opcion == 0);
        return opcion;
}

int main(){
  menu();
}

