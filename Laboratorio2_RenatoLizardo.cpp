#include <iostream>
#include <string>

using namespace std;


int Captcha(); 
int Captcha2();
int numeros_perfectos(int);
int permutaciones();

int main(){

    	bool exit = false;


  while(exit == false){
	int opcion = 0;


	  cout<<"Ingrese una opcion 1)Captcha "<<endl
		  <<"2) Numeros Perfectos"<<endl
		  <<"3)Permutaciones Posibles de una secuencia"<<endl;

	  cin >> opcion;

	switch(opcion){

		case 1:
		 Captcha2();

		break;

		case 2:
		int numero = 0;
		int perfecto = 0;
	        

		cout<<"INgrese un numero para ver si este es perfecto"<<endl;
        	cin >> numero;

		while(numero >= 0){
                cout<<"Ingrese un numero para ver si es perfecto" <<endl;
                cin >> numero;


        }

		
		 for(int i = 1; i <= numero ; i++ ){
               // perfecto = numeros_perfectos(numero);

		if(numeros_perfectos(i) == 1){
                perfecto = i;

        }


       		 }
                  
		 if(numero == perfecto){

			 cout<<"el numero "<<numero <<" es perfecto"<<endl;

		 }else{

			 cout <<"el numero no es perfecto el ultimo numero perfecto es: "<< perfecto <<endl;

		 }	

		break;


	
	default:

		exit = true;


		break;


/*
		case 3:
		
		permutaciones();


		break;
*/	
	}
  }



return 0;
}


int Captcha(){


	string cadena = "";
	int repetido = 0;
	int contador_repetidos = 0;

	cout<<"Ingrese la cadena de numeros" <<endl;
	cin >> cadena;

	while(cadena%2 != 0){
                cout<<"Ingrese la cadena de numeros" <<endl;
                cin >> cadena;


        }


	for(int i = 0; i < cadena.length()-1 ; i++){

		if(((int)cadena[i]-48) == ((int)cadena[i+1]-48)){

			repetido = ((int)cadena[i]-48);

			//cout<< contador;


		}else{

			repetido = 0;

		}

		if((i+1) == (cadena.length()-1)){
			
			
			if(((int)cadena[i+1]-48) == ((int)cadena[0]-48)){

                        repetido = repetido + ((int)cadena[0]-48);

                        //cout<< contador;


                }else{

                        repetido = 0;

                }


		}



		contador_repetidos= contador_repetidos + repetido ;


	}

	cout << contador_repetidos <<endl;



	




return 0;
}


int Captcha2(){

	string cadena = "";
        int repetido = 0;
	int cont = 0;
        int contador_repetidos = 0;

        cout<<"Ingrese la cadena de numeros" <<endl;
        cin >> cadena;

	while(cadena%2 != 0){
		cout<<"Ingrese la cadena de numeros" <<endl;
        	cin >> cadena;


	}

        for(int i = 0; i < (cadena.length()-1) ; i++){


		 if((i+(cadena.length()/2)) >= (cadena.length()-1)){

		
                       if(((int)cadena[i+(cadena.length()/2)]-48) == ((int)cadena[cont++]-48)){

                        repetido = repetido + ((int)cadena[0]-48);

                        //cout<< contador;


                }else{
			 if(((int)cadena[i]-48) == ((int)cadena[(i+(cadena.length()/2))]-48)){

                        repetido = ((int)cadena[i]-48);

                        //cout<< contador;


                }else{

                        repetido = 0;

                }

                }


                }


	


                contador_repetidos= contador_repetidos + repetido ;


        }

        cout << contador_repetidos <<endl;




	return 0;
}



int numeros_perfectos(int numero){
 	//int numero=0;
	int contador=0;
	int perfecto=0;
	//cout<<"INgrese un numero para ver si este es perfecto"<<endl;
	//cin >> numero;
	
        
	for(int i = 1; i < numero-1 ; i++ ){
		if(numero % i == 0){
			contador = contador + i;

		}



	}

	if(contador == numero){
		cout<< "numero si es perfecto"<<numero <<endl;
		perfecto = 1;

	}else{
		

		perfecto = 0;
	}



return perfecto;

}



/*

int permutaciones(){
     string cadena = "";
     string resultado = "";
     

     cout<<"INgrese los caracteres" << endl;
     cin >> cadena;

     for(int i = 1; i <= factorial(cadena.length());i++ ){

	     


     }




	

return 0;

}

*/

/*
long factorial(int num1){

   long factorial; 
   factorial=1;
   for(int i=1;i<=num1;i++){
        factorial = factorial * i;

        }

   //cout<< factorial << endl;
 
    return factorial;
}

*/




	
