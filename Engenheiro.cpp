#include <string>
#include "Empregado.hpp"
class Engenheiro : public Empregado {
private:
    int projetos;
public:
Engenheiro(std::string name, double salH, int proj, double horastrab){
    nome = name;
    salarioHora = salH;
    projetos = proj;
    horasTrabalhadas = horastrab;
}
int getProjetos(){
    return projetos;
}
void setProjetos(int proj){
    projetos = proj;
}
};
