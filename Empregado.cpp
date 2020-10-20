#include "Empregado.hpp"
#include <string>

#define MIN_HORA_EXTRA 8

void Empregado::setSalarioHora(double salarioHora) {
    this->salarioHora = salarioHora;
}

double Empregado::getSalarioHora() {
    return this->salarioHora;
}

void Empregado::setNome(std::string nome) {
    this->nome = nome;
}

std::string Empregado::getNome() {
    return this->nome;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
    double pagamentoHora = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > MIN_HORA_EXTRA) {
        pagamentoHora += (horasTrabalhadas - MIN_HORA_EXTRA) / 2;
    }
    return pagamentoHora * salarioHora;
}