#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

class Empregado {
	
  public:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  


    double pagamentoMes(double horasTrabalhadas) {
      if (horasTrabalhadas > 8)
        horasTrabalhadas += (horasTrabalhadas - 8) / 2;

      return horasTrabalhadas * salarioHora;
    }
	
};

#endif