#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

class Pergunta
{
        public:
                std::string pergunta;
                std::string resposta;
};

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


int main(int argc, char **argv)
{

        std::system("clear");

        return 0;
}

int num_rand()
{
        std::srand (time(0));
        int num = rand() % 10;
}
