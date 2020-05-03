/*EJERCICIO # 4


Se le pide un programa que solicite primeramente el monto total de compras de una persona. Si el monto es 
inferior a 100.00, el programa dirá que el cliente no aplica a la promoción. Pero si la persona ingresa 
un monto en compras igual o superior a 100.00, el programa solicita el ingreso de un número entero del uno 
al cinco.  Cada número corresponderá a un color diferente (1: Bola blanca; 2: Bola roja; 3: Bola azul; 
4:  Bola verde; 5:  Bola amarilla) de cinco colores de bolas que hay para determinar el descuento que el 
cliente recibirá como premio.   Si la bola es color blanco, no hay descuento, pero si es uno de los otros 
cuatro colores, sí se aplicará un descuento determinado según la tabla adjunta, y ese descuento se aplicará 
sobre el total de la compra que ingreso inicialmente el usuario, de manera que el programa mostrará un nuevo 
valor a pagar luego de haber aplicado el descuento.  Almacenar todos los datos de ventas y descuentos a un archivo.  
Así mismo mostrar el total de ventas del día.


Tabla:
1.	Bola Blanca: No tiene descuento 
2.	Bola Roja:10%
3.	Bola Azul:  20% 
4.	Bola Verde: 25% 
5.	Bola Amarilla 50%*/ 

#include <iostream>
#include <fstream>
#include <string>

void mp();
void insertar();
void reporte();
using namespace std;

int main (){
	
	mp();
}

void insertar(){
float montototal,opera1,opera2,opera3,opera4,opera5;
string fecha,descu1= "NO HAY DESCUENTO",descu2= "HAY UN DESCUENTO DEL 10%",descu3= "HAY UN DESCUENTO DEL 20%",descu4= "HAY UN DESCUENTO DEL 25%",descu5= "HAY UN DESCUENTO DEL 50%";
int numerosuerte;
ofstream db;


cout<<"-------------------------------"<<endl;	
cout<<"INGRESO DE DATOS PARA DESCUENTO"<<endl;
cout<<"-------------------------------"<<endl;

cout<<"Ingrese la fecha del dia en este formato (dd/mm/aaaa): "<<endl;
cin>>fecha;
fflush(stdin);
cout<<"Ingrese el monto total de sus compras: "<<endl;
cin>>montototal;


if(montototal>= 100){
	cout<<"---------------------------------------------------------------------------------------"<<endl;
	cout<<"El monto total de sus compras supera o es igual a Q100.00 lo cual aplica a un descuento"<<endl;
	cout<<"A continuacion selecione un numero del 1-5 al azar y pruebe su suerte, depende del numero seleccionado"<<endl;
	cout<<"puede ser mayor o menor el descuento, BUENA SUERTE :D "<<endl;
	cout<<"Ingrese el numero: "<<endl;
	cin>>numerosuerte;
	
}
if (numerosuerte == 1){
		cout<<"USTED A SELECCIONADO 1 (BOLA BLANCA): NO TIENE DESCUENTO"<<endl;
		opera1 = montototal;
		cout<<"SU TOTAL A PAGAR ES DE: Q"<<opera1<<" YA QUE LA BOLA BLANCA NO APLICA DESCUENTO"<<endl;
		try{
 			db.open("descuentos.txt",ios::app);
			db<<" "<<fecha<<"\t"<<montototal<<"\t"<<opera1<<endl;
			db.close();  
		}
 		catch(exception X){
 			cout<<"Error";
 			system("Pause");
 		}		
	}
else if (numerosuerte == 2){
	cout<<"USTED A SELECCIONADO 2 (BOLA ROJA): TIENE UN DESCUENTO DEL 10%"<<endl;
	opera2 = montototal-(montototal*0.10);
	cout<<"SU TOTAL A PAGAR ES DE: Q"<<opera2<<" YA QUE LA BOLA ROJA TIENE UN 10% DE DESCUENTO"<<endl;
	try{
 		db.open("descuentos.txt",ios::app);
		db<<" "<<fecha<<"\t"<<montototal<<"\t"<<opera2<<endl;
		db.close();  
	}
 	catch(exception X){
 		cout<<"Error";
 		system("Pause");
 	}		
}	
else if (numerosuerte == 3){
	cout<<"USTED A SELECCIONADO 3 (BOLA AZUL): TIENE UN DESCUENTO DEL 20%"<<endl;
	opera3 = montototal-(montototal*0.20);
	cout<<"SU TOTAL A PAGAR ES DE: Q"<<opera3<<" YA QUE LA BOLA AZUL TIENE UN 20% DE DESCUENTO"<<endl;
	try{
 		db.open("descuentos.txt",ios::app);
		db<<" "<<fecha<<"\t"<<montototal<<"\t"<<opera3<<endl;
		db.close();  
	}
 	catch(exception X){
 		cout<<"Error";
 		system("Pause");
 	}		
}	
else if (numerosuerte == 4){
	cout<<"USTED A SELECCIONADO 4 (BOLA VERDE): TIENE UN DESCUENTO DEL 25%"<<endl;
	opera4 = montototal-(montototal*0.25);
	cout<<"SU TOTAL A PAGAR ES DE: Q"<<opera4<<" YA QUE LA BOLA VERDE TIENE UN 25% DE DESCUENTO"<<endl;
	try{
 		db.open("descuentos.txt",ios::app);
		db<<" "<<fecha<<"\t"<<montototal<<"\t"<<opera4<<endl;
		db.close();  
	}
 	catch(exception X){
 		cout<<"Error";
 		system("Pause");
 	}		
}	
else if (numerosuerte == 5){
	cout<<"USTED A SELECCIONADO 5 (BOLA AMARILLA): TIENE UN DESCUENTO DEL 50%"<<endl;
	opera5 = montototal-(montototal*0.50);
	cout<<"SU TOTAL A PAGAR ES DE: Q"<<opera5<<" YA QUE LA BOLA AMARILLA TIENE UN 50% DE DESCUENTO"<<endl;
	try{
 		db.open("descuentos.txt",ios::app);
		db<<" "<<fecha<<"\t"<<montototal<<"\t"<<opera5<<endl;
		db.close();  
	}
 	catch(exception X){
 		cout<<"Error";
 		system("Pause");
 	}		
}
	
else{
	cout<<"EL CLIENTE NO APLICA A LA PROMOCION YA QUE SU MONTO TOTAL ES INFERIOR A Q100.00"<<endl;
	cout<<"SU TOTAL A PAGAR ES DE: Q"<<montototal<<endl;
	try{
 		db.open("descuentos.txt",ios::app);
		db<<" "<<fecha<<"\t"<<montototal<<"\t"<<montototal<<endl;
		db.close();  
	}
 	catch(exception X){
 		cout<<"Error";
 		system("Pause");
 	}		
}




	
	
}


void reporte(){
	float montototal,opera1,opera2,opera3,opera4,opera5,final,i;
	string fecha;
	int numerosuerte;
	ifstream db;
	
try{
 	cout<<"-----------------------------------------------------------------------------"<<endl;
	cout<<"   FECHA     /"<<"      TOTAL DE COMPRAS     /" <<"   TOTAL DE VENTA CON DESCUENTO   /"<<endl;
	cout<<"-----------------------------------------------------------------------------"<<endl; 	
	db.open("descuentos.txt",ios::in);
	while(db>>fecha>>montototal>>opera1){
		cout<<" "<<fecha<<"\t""\t""Q"<<montototal<<"\t""\t""\t""\t""Q"<<opera1<<endl;
		
		
		i++;
		final += opera1;
	}
	
		
	
	db.close(); 
	cout<<"                                           "<<endl;
	cout<<"-------------------------------------------"<<endl; 
	cout<<"El total de todas las ventas del dia es de: Q"<<final<<endl;
	cout<<"-------------------------------------------"<<endl;
 }
 catch(exception X){
 	cout<<"Error";
 	system("Pause");
 }
}


void mp(){
		int resp;
	//string nombrearchivo;
	//cout<<"Indique nombre de archivo: ";
	//getline(cin,nombrearchivo);
	
	do {
		system("CLS");
		cout<<"-------------------------------"<<"\n";
		cout<<" Menu Principal para Descuentos"<<"\n";
		cout<<"-------------------------------"<<"\n";
		cout<<" 1 - Ingresar Ventas "<<"\n";
		cout<<" 2 - Reporte "<<"\n";
		cout<<" 3 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			insertar();	
			system("Pause");		
		}
		else if (resp==2){		
			system("CLS");
			reporte();
			system("Pause");
	}
		else if (resp==3)
			break;
		else 
			break;
		
	} while(resp!=5);	
}


	