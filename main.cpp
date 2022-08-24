/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

using namespace std;

int main()
{
    //LITERAL A
    /*std::cout<<"\n=='Ejercicio A'=="<<std::endl;

    Eigen::Matrix2d mA,mB,X;
    mA << 4,-2,1,-7;
    mB << -1,2,6,-5;

    X=3*mA-4*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL B
    /*std::cout<<"\n=='Ejercicio B'=="<<std::endl;

    Eigen::Matrix2d mA,mB,X;
    mA << 0,-1,2,1;
    mB << 1,2,3,4;

    mB = 3*mB*mA;
    mA = 4*mA;
    X = mB-mA;
    X = X/2;

    std::cout<<"\n=='Matriz X'==\n"<<X <<std::endl;*/

    //LITERAL C
    /*std::cout<<"\n=='Ejercicio C'=="<<std::endl;

    Eigen::Matrix2d mA,mB,mC,X;
    mA << -3,-2,3,3;
    mB << 5,3,9,4;
    mC << 1,1,0,0;

    mB.transposeInPlace();
    mC = mA.inverse()*mC;
    X = mC * mB.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL D
    /*std::cout<<"\n=='Ejercicio D'=="<<std::endl;

    Eigen::Matrix2d mA,mB,X;
    mA << 2,1,-4,-3;
    mB << 2,2,6,4;

    X = mB * mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL E
    /*std::cout<<"\n=='Ejercicio E'=="<<std::endl;

    Eigen::MatrixXd mA(2,3),mB(3,2),mC(2,2),X;
    mA << 3,0,-1,0,2,1;
    mB << 1,2,1,0,0,6;
    mC << -2,0,-2,-5;

    X = 2*(mA*mB+mC);

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL F
    /*std::cout<<"\n=='Ejercicio F'=="<<std::endl;

    Eigen::Matrix3d mA, mB, X;
    mA << 1,5,-1,-1,2,2,0,-3,3;
    mB << -1,-4,3,1,-2,-2,-3,3,-5;

    X = mA + 3*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL G
    /*std::cout<<"\n=='Ejercicio G'=="<<std::endl;

    Eigen::Matrix3d mA, mB, X;
    mA << 2,7,3,3,9,4,1,5,3;
    mB << 1,0,2,0,1,0,0,0,1;

    X = mB*mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL H
    /*std::cout<<"\n=='Ejercicio H'=="<<std::endl;

    Eigen::Matrix3d mA, mB, X;
    mA << 1,1,1,6,5,4,13,10,8;
    mB << 0,1,2,1,0,2,1,2,0;

    X = mA.inverse()*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL I
    /*std::cout<<"\n=='Ejercicio I'=="<<std::endl;

    Eigen::Matrix2d mA,X;
    mA << 3,-1,0,2;

    X = mA.transpose()*mA-2*mA;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL J
    /*std::cout<<"\n=='Ejercicio J'=="<<std::endl;

    Eigen::Matrix2d mA, X;
    mA << 4,2,-1,0;

    X = mA*mA*mA;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL K
    /*std::cout<<"\n=='Ejercicio K'=="<<std::endl;

    Eigen::Matrix2d mA, mB, mC, X;
    mA << 2,4,3,2;
    mB << 1,0,2,1;
    mC << 7,5,6,1;

    mA.transposeInPlace();
    mC = mA.inverse()*mC;
    X = mC*mB.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL L
    /*std::cout<<"\n=='Ejercicio L'=="<<std::endl;

    Eigen::MatrixXd mA(2,3), mB(3,2), X;
    mA << 1,0,-2,2,-1,3;
    mB << 2,-3,-2,0,-1,-2;

    X = mA*mA.transpose()-2*mA*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL M
    /*std::cout<<"\n=='Ejercicio M'=="<<std::endl;

    Eigen::MatrixXd mA(1,3), mB(3,2), mC(2,1), X;
    mA << 4,8,12;
    mB << 3,2,0,1,-1,0;
    mC << 3,-1;

    X = mA*mB*mC;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL O
    /*std::cout<<"\n=='Ejercicio O'=="<<std::endl;

    Eigen::Matrix3d mA, mB, X;
    mA << 2,5,7,6,3,4,5,-2,-3;
    mB << -1,1,0,0,1,1,1,0,-1;

    X = mB * mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    //LITERAL P
    /*std::cout<<"\n=='Ejercicio P'=="<<std::endl;

    Eigen::Matrix4d mA, mB, X;
    mA << 1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
    mB << 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;

    X = mA.inverse() * mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;*/

    return 0;
}
