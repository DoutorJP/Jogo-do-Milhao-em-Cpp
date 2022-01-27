#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


std::string perguntas[] = {
        "Qual a idade do Brasil?",
        "Em que ano foi a Independencia do Brasil?",
        "Qual é o nome dado ao estadoda água em forma de gelo?",
        "Qual bicho transmite Doença de Chagas?",
        "Qual fruto é conhecido no Norte e Nordeste como \"jerimum\"?",
        "Qual é o coletivo de cães?",
        "Qual é o triângulo que tem todos os lados diferentes?"

};

std::string respostas[] = {
        "521",
        "1822",
        "solido",
        "barbeiro",
        "abobora",
        "matilha",
        "escaleno"

};

int num_rand()
{
        int len = sizeof(perguntas)/sizeof(perguntas[0]);
        std::srand (time(0));
        int num = rand() % len;
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

void compare_strings(std::string s1, std::string s2)
{
        s1 == s2 ? std::cout << "Certa resposta!\n" : std::cout << "Errou!\n";
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
        compare_strings(guess, resposta);
        std::cout << resposta << '\n';


        return 0;
}

