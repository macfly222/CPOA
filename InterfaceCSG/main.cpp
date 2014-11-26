#include <QApplication>
#include "mainwindow.h"
#include "array.h"
#include "vector.h"
#include "v2f.h"
#include "v3f.h"
#include "matrix33f.h"

#define DEBUG 4

int main(int argc, char *argv[])
{
//	QApplication a(argc, argv);
//	MainWindow w;
//	w.show();
//	return a.exec();

    if(DEBUG == 1)
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
    if(DEBUG == 2)
    {
        Vector<float,3> A = Vector<float,3>();
        Vector<float,3> &B = A;         //on utilise le constructeur par copie de ARRAY.

        A.fill(2.0f);


        A.print_array();
        B.print_array();

        A += B;
        A += 1.0f;

        A.print_array(); // As expected
        B.print_array(); // as expected
        A -= B;
        A -= 2.0f;
        A.print_array(); // as expected

        B = B + A;

        B.print_array();    // as expected. -2 + -2 = -4
    }
    if(DEBUG == 3)
    {
        v2f v1 = v2f(1.0f,0.0f);
        v2f v2 = v2f(1.0f,5.0f);


        Vector<float,2> A = v2f();
        V2F v4 = v2f(2.0f,1.0f);   // ICI, c'est un VECTOR avec 2,FLOAT. Cela permet lutilisation des fonctions arithmétique et l'utilisation du constructeur spécialisé.
        v3f v12 = v3f(1.0f,0.0f,0.0f);
        v3f v13 = v3f(0.0f,1.0f,0.0f);
        v3f v14 = v3f();
        v4 = v1 + 2.0f;
//        v4.print_array();
//        A = v1 + v2;
//        A.print_array();
        //float x = v1 * v2;
        //std::cout << x << std::endl;
        //v1 = v1 ^ v2;  // CROSS EN 2D, BRAVO. ><"
        //v1.print_array();

        v14 = v12 ^ v13;
        v14.print_array();
    }
    if(DEBUG == 4)
    {
        matrix33f m1(1);
        matrix33f m2(1,3,3,1,4,3,1,3,4);
        matrix33f m3;   // c'est comme ca que l'on appelle le constructeur par défaut !
        matrix33f m4;
        matrix33f m5(2);

        m2[0].print_array();
        m2[1].print_array();
        m2[2].print_array();
        m3 = m2.inverse();
        m4 = m2 * m3;
        m3[0].print_array();
        m3[1].print_array();   // OK
        m3[2].print_array();
        m4[0].print_array();
        m4[1].print_array();
        m4[2].print_array();
    }

}
