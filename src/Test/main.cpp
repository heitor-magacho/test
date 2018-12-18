#include <QCoreApplication>
#include <BasicArrayObject.h>

int main(int argc, char *argv[])
{
    BasicArrayObject<double> vetor1, vetor2;



    vetor1.setOID(1);
    vetor1.set(1);
    vetor1.set(2);


    vetor2.setOID(2);
    vetor2.set(3);
    vetor2.set(4);

    for (size_t x = 0; x < vetor1.size(); x++){
        double aux = vetor1[x] + vetor2[x];
        aux = aux/2;
        std::cout << " Dimensao " << x+1 << " Media " << aux << std::endl;
    }


    return 0;
}
