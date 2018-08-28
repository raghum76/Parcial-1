using namespace std;
#include<iostream>
#include<conio.h>
main()
{
	char Opm;
	int num1, num2, n1, distancia, tiempo;
	float precio;
	{
	  cout<<"---Menu---\n";		
      cout<<"[A]Problema1 [B]Problema2 [C]Problema3 [S]alir\n";Opm=getch();
      switch(Opm)
      {
      	case 'A': case 'a':
      		cout<<"Ingrese el primer numero: ";
      		cin>>num1;
      		cout<<"Ingrese el segundo numero: ";
      		cin>>num2;
      		if(num1 > num2){
      			//si el modulo es cero, entonces es multiplo
      			if(num1%num2 == 0)
      				cout<<"\nEl numero "<<num1
      					<<" es multiplo de "<<num2;
      			else
      				cout<<"\nEl numero "<<num1
      					<<" NO es multiplo de "<<num2;
	    	}
			  		if(num2%num1 == 0)
			  		cout<<"\nEl numero "<<num2
			  			<<" es multiplo de "<<num1;
			  		else
			  			cout<<"\nEl numero "<<num2
			  				<<" No es multiplo de "<<num1;
			getche();
			break;
		case 'B': case 'b':
			cout<<"Ingresa u numero de 5 digitos: ";
			cin>>n1;
			cout<< "\n" << n1 / 10000 <<"   " 
				<< n1 % 10000 / 1000 <<"   "
				<< n1 % 1000 / 100 <<"   "
				<< n1 % 100 / 10 <<"   "
				<< n1 % 10 <<endl;
			getche();
			break;
		case 'C': case 'c':
			cout<<" Ingresa la distancia del viaje: ";
			cin>>distancia;
			cout<<" Ingresa el tiempo de estancia: ";
			cin>>tiempo;
				if((distancia *2) >800 &&(tiempo>7)){
				
				precio=distancia*2*17*.70;
			}
				else{
				precio=distancia*2*.17;
				}
				cout<<"Tu cantidad final es: "<<precio;
			getche();
			break;	
	  }
	}
	  
}
