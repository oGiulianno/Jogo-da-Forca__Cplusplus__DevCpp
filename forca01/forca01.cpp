#include <iostream>
#include <stdlib.h>

using namespace std;
int main ()
{
	char palavra[30];
	char letra[1];
	char secreta[30];
	
	int tam;
	int i;
	int chances;
	int acertos;
	
	bool acerto;
	
	chances = 6;
	tam = 0;
	i=0;
	acerto = false;
	acertos = 0;
	
	cout << "fale para seu amigo tampar os olhos e digite a palavra secreta: ";
	cin >> palavra;
	system ("cls");
	
	while (palavra[i] != '\0')  //é um feg para diser q aliacabou string
	{
		i++;
		tam++;  //taamnho do array
	} 
	//prencher a palavra secreta por tracinhos e depois subsitituir os prasinho pro numeros
	for(i = 0; i<30; i++){
  secreta[i] = '_';
 }
	while (chances > 0 && (acertos < tam))
	{
		cout << "chances ainda restantes" << chances<<"\n\n";
		cout << "Palavra secreta:  ";
		for(i=0; i<tam; i++)
		{
			cout << secreta[i];
		}
		

 /*	while(chances > 0 && (acertos < tam)){
  cout <<"Chances restantes: "<< chances << "\n\n";//Quantas chances o jogador ainda tem
  cout <<"Palavra secreta: ";
  //Revelando a palavra secreta
  for (i = 0; i < tam; i++){
   cout << secreta[i];
  } */
		
		
		cout << "\n\n Digitar uma letra: ";
		cin >> letra[0];
		for (i = 0; i<tam; i++)
		{
			if(palavra[i] == letra[0])
			{
				acerto = true;
				secreta[i] = palavra[i];
				acertos ++;
			}
		}
		if (!acerto)
		{
			chances --;
		}
		acerto = false;
		system ("cls");
	}
	if (acertos == tam)
	{
		cout << "Voce venceu! ";
	}else
	{
		cout <<"Que pena, vc perdeu! ";
	}
	system ("pause");
	return 0;
}
