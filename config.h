#include <cstdlib>
#include <iostream>

std::srand(time(0));
int num = 1 + (std::rand() % 3);

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

int num_random()
{
  int num = 1 + (std::rand() % 3);
  return num;
}

class Pergunta
{
 public:
  std::string pergunta;
  std::string resposta;
};

