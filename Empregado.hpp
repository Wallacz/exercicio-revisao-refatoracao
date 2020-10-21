#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>
class Empregado {
protected:
    std::string nome;
    double salarioHora;
    double horasTrabalhadas;
public:
    double pagamentoMes() {
 
      double tempo = horasTrabalhadas;
     
     //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double HoraExtra = horasTrabalhadas - 8;
        tempo += HoraExtra / 2;
      }
     return tempo * salarioHora;
    }
   std::string getNome(){
        return nome;
    };
    double getHorasTrab(){
        return horasTrabalhadas;
    }
    void setHorasTrab(double horastrab){
        horasTrabalhadas = horastrab;
    }
};
#endif