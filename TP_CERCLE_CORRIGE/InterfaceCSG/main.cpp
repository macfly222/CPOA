#include <QApplication>
#include "mainwindow.h"
#include "array.h"

int main(int argc, char *argv[])
{
//	QApplication a(argc, argv);
//	MainWindow w;
//	w.show();
//	return a.exec();
    Array<float,2>* A = new Array<float,2>();
    Array<float,3> B = Array<float,3>();
    Array<float,2> C;
    Array<float,3> D = Array<float,3>();

    //C = A;

    //&A[1]=1.3f;   // NOT OK"lvalue required as left operand assignment"
    C[1]=3.3f;
    //C[3]=1.2f;  // OK provoque une erreur d'assertion, comme prevu
    B[0]=3.5f;
    B[1]=2.0f;
    B[2]=3.0f;
    D[0]=3.5f;
    D[1]=2.0f;
    D[2]=3.0f;

    std::cout << "SIZE B: " << B.size() << std::endl;
//    B.size() = 3;
//    std::cout << "SIZE B: " << B.size() << std::endl;
    if(B==D)
        std::cout << "== operator OK" << std::endl;

    B.print_array();
    return 1;
}
