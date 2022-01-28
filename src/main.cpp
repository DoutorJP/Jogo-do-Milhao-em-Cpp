#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "func.h"

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
        char ent;
        std::cin >> ent;
        std::system("clear");

        return 0;
}

