/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal H
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio H'=="<<std::endl;

        Eigen::Matrix3d mA, mB, X;
        mA << 1,1,1,6,5,4,13,10,8;
        mB << 0,1,2,1,0,2,1,2,0;

        X = mA.inverse()*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}

