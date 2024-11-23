//contraseña
#include <iostream>
#include <string>

using namespace std;
int main(){
  //variables aqui
	string key;
	string segurity;
	int intentos = 0;

	cout<<"genera una contraseña: "<<endl;
	cin>>key;
	do {
		//contador de intentos
		intentos += 1;
    
		cout<<"ingresa la contraseña :"<<endl;
		cin>>segurity;
    
		if(key == segurity){
			cout<<"contraseña corecta"<<endl;
			break;
		}
		else{
			cout<<"incorecto intente de nuevo,  intentos #"<<intentos<<endl;
			}
    //si intentos es igual a 3 termina el bucle
		if(intentos == 3) {
			cout<<"intentos acabados"<<endl;
			break;
			}
	 }while(key != segurity);
  
	cout<<"finalisado"<<endl;
  
	return 0;
}
