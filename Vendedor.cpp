#include <string>
#include "Empregado.hpp"
class Vendedor : public Empregado {
private:
    double quotaMensalVendas;
public:
Vendedor(std::string name, double salH, double qMensVend, double horastrab){
    nome = name;
    salarioHora = salH;
    quotaMensalVendas = qMensVend;
    horasTrabalhadas = horastrab;
}
    double quotaTotalAnual() {
        return quotaMensalVendas * 12;
    }
};
