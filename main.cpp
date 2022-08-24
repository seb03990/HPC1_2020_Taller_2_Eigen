/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal D
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio D'=="<<std::endl;

        Eigen::Matrix2d mA,mB,X;
        mA << 2,1,-4,-3;
        mB << 2,2,6,4;

        X = mB * mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
