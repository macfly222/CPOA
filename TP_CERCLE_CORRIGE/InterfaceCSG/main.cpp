#include <QApplication>
#include "mainwindow.h"
#include "array.h"
#include "vector.h"


int main(int argc, char *argv[])
{
//	QApplication a(argc, argv);
//	MainWindow w;
//	w.show();
//	return a.exec();
 int debug = 2;

    if(debug == 1)
    {
        Array <float,2> * A = new Array<float,2>();
        Array <float,3> B = Array<float,3>();
        Array <float,2> C;
        Array <float,3> D = Array<float,3>();
        Array <float,3> E = Array<float,3>();


        //&A[1]=1.3f;   // NOT OK"lvalue required as left operand assignment"
                        // Redefinir operator& pour Array<T,N> ?

        A[0]=1.3f;
        B.fill(1.11f);
        C[1]=3.3f;
        //C[3]=1.2f;  // OK provoque une erreur d'assertion, comme prevu

        A->print_array();
        B.print_array();
        E.fill(1.9f);

        E.print_array();
        std::cout << "SIZE B: " << B.get_size() << std::endl;

        std::cout << "SIZE B: " << B.get_size() << "\n" << std::endl;
        std::cout << B[0] << std::endl;
        if(B==D)
            std::cout << "== operator OK" << std::endl;



        return 1;
    }
    if(debug == 2)
    {
        Vector<float,3> A = Vector<float,3>();
        Vector<float,3> &B = A;         //on utilise le constructeur par copie de ARRAY.

        A.fill(2.0f);


        A.print_array();
        B.print_array();

        A += B;
        A += 1.0f;

        A.print_array(); // on attend 5 et on obtient 5.
        B.print_array(); // on attend 5 et on obtient 5.
        A -= B;
        A -= 2.0f;
        A.print_array(); // on attend -2et on obtient -2.




    }

}
