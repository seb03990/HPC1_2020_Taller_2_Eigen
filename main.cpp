/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal B
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio B'=="<<std::endl;

    Eigen::Matrix2d mA,mB,X;
    mA << 0,-1,2,1;
    mB << 1,2,3,4;

    mB = 3*mB*mA;
    mA = 4*mA;
    X = mB-mA;
    X = X/2;

    std::cout<<"\n=='Matriz X'==\n"<<X <<std::endl;

    return 0;
}
