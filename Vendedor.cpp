#include "Vendedor.hpp"

void Vendedor::setQuotaMensalVendas(double quotaMensalVendas) {
	this->quotaMensalVendas = quotaMensalVendas;
}

double Vendedor::getQuotaMensalVendas() {
	return this->quotaMensalVendas;
}

double Vendedor::quotaTotalAnual() {
	return this->quotaMensalVendas * 12;
}