#include "Engenheiro.cpp"
#include "Vendedor.cpp"
int main() {
    int numerofunc = 3;
    Engenheiro *eng1 = new Engenheiro("Joao Snow", 35, 3, 9.5);
    Engenheiro *eng2 =  new Engenheiro("Daniela Targaryen", 30, 1, 8);
    Engenheiro *eng3 = new Engenheiro("Bruno Stark", 30, 2, 8);
    Engenheiro* vetEngenheiro[] = {eng1, eng2, eng3};
    for (int i = 0; i < numerofunc; ++i) {
        std::cout << "Nome: " << vetEngenheiro[i]->getNome() << std::endl;
        std::cout << "Salario Mes: " << vetEngenheiro[i]->pagamentoMes() << std::endl;
        std::cout << "Projetos: " << vetEngenheiro[i]->getProjetos() << std::endl;
        std::cout << std::endl;
    }
    Vendedor *vend1 = new Vendedor("Tonho Lannister", 20, 5000, 6);
    Vendedor *vend2 = new Vendedor("Jose Mormont", 25, 3000, 8);
    Vendedor *vend3 = new Vendedor("Sonia Stark", 30, 4000, 8);
    Vendedor* vetVendedor[] = {vend1, vend2, vend3};
    for (int i = 0; i < numerofunc; ++i) {
        std::cout << "Nome: " << vetVendedor[i]->getNome() << std::endl;
        std::cout << "Salario Mes: " << vetVendedor[i]->pagamentoMes() << std::endl;
        std::cout << "Quota vendas: " << vetVendedor[i]->quotaTotalAnual() << std::endl;
        if(i<2){
            std::cout << std::endl;
        }
    }
    return 0;
}