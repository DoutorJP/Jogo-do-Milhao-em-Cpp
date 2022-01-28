#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "func.h"

int main(int argc, char **argv)
{
        std::system("clear");
        std::cout << "Bem vindo ao Jogo do Milhão!" << '\n';
        while(cont < 10)
        {
                nloop();
                std::system("clear");
        }
        return 0;
}
