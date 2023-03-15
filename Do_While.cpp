#include <iostream>
using namespace std;

main(){

int i = 5;
while(i<5){
  cout <<"While:  " <<i<<endl;
  i++;  
}

char respuesta= 's';

while (respuesta=='s'|| respuesta=='s'){;
	cout<<"Desea Ingresar Otro Valor:  (S/N) ";
	cin>>respuesta;

}

system("pause");
}