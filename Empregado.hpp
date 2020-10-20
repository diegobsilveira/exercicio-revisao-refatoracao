#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {
	
  private:
    std::string nome;
    double salarioHora;  

  public:
    void setSalarioHora(double salarioHora);
    double getSalarioHora();
    void setNome(std::string nome);
    std::string getNome();
    double pagamentoMes(double horasTrabalhadas);
};

#endif