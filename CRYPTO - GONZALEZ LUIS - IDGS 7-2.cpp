//LUIS GONZALEZ - IDGS 7-2//

#include<iostream>
using namespace std;

int main(){
	int i,x;
	char str[75];
	
	cout<<"PASSWORD:\t";
	cin>>str;
	
	cout<<"ELIGA UNA OPCION:\n";
	cout<<"ENCRIPTAR = 1:\n";
	cout<<"DESCENCRIPTAR = 2:\n";
	cin>>x;
	
	switch(x){
		case 1:
		for(i=0; (i<75 && str[i]!='\0');i++)
		str[i]=str[i]+2;
		
		cout<<"\PASSWORD ENCRIPTADA:  "<<str<<endl;
		break;
		
		case 2:
		for(i=0; (i<75 && str[i]!='\0');i++)
		str[i]=str[i]-2;
		
		cout<<"\PASSWORD DESENCRIPTADA:  "<<str<<endl;
		break;
		
		default:
			cout<<"\NO VALIDO\n";
	}
	return 0;
}
