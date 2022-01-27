#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "config.h"
#include <stdio.h>

int main(int argc, char **argv)
{
  Pergunta pergunta;

  std::system("clear");
  std::cout << "Bem vindo ao Jogo do Milhão!" << '\n';
  std::cout << "Deseja iniciar? [S/n]" << '\n';
  char opt;
  std::cin >> opt;
  switch(opt)
	{
	case 's':
	case 'S':
	  pergunta.pergunta = perguntas[num_random()];
	  /*	  for (int i = 0; i <= 5; i++)
		{
		  std::cout << "A resposta de '" << pergunta.pergunta[i] << "'" << '\n';
		  }*/
	  break;
	default:
	  break;
	}
   
  return 0;
}
