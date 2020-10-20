#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {
  private:
    double quotaMensalVendas;

  public:
    void setQuotaMensalVendas(double quotaMensalVendas);
    double getQuotaMensalVendas();
    double quotaTotalAnual();
};

#endif