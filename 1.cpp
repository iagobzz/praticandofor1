#include <iostream>
using namespace std;

int main() {
   
  string nome;
  char sexo;
  int fem=0,masc=0;
  
  for(int i=1;i<=10;i+=1){
  	
	cout<<"Digite o nome: ";
	cin>>nome;
	
	cout<<"Digite o sexo (F/M)";
	cin>>sexo;
	
	if(sexo =='f'|| sexo =='F'){
		fem+=1;
		
	}else if(sexo == 'm' || sexo =='M'){
		
		masc+=1;
	}else{
		cout<<"Sexo invalido, escreva apenas com F ou M";
		i-=1;
	}
	
	
  	
  }
  
    
}

