#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


std::string perguntas[] = {
        "Nova Pergunta",
        "Qual a idade do Brasil?",
        "Em que ano foi a Independencia do Brasil?",
        "teste",
        "teste2"
};

std::string respostas[] = {
        "Nova Resposta",
        "521",
        "1822",
        "teste-resp",
        "teste2-resp"
};

int num_rand()
{
        std::srand (time(0));
        int num = rand() % 10;
		return num;
}
std::string perg(int num)
{
  std::string pergunta = perguntas[num];
  return pergunta;
}
std::string resp(int num)
{
  std::string resposta = respostas[num];
  return resposta;
}
int main(int argc, char **argv)
{
        std::system("clear");
		std::string resposta;
		std::cout << "Bem vindo ao Jogo do Milhão!" << '\n';
		std::cout << perg(num_rand()) << '\n';
		resposta = resp(num_rand());
		std::string guess;
		std::cin >> guess;
		std::cout << resposta << '\n';
		

        return 0;
}

