#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:
    int projetos;

  public:
    void setProjetos(int projetos);
    int getProjetos();

};

#endif