/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal O
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio O'=="<<std::endl;

        Eigen::Matrix3d mA, mB, X;
        mA << 2,5,7,6,3,4,5,-2,-3;
        mB << -1,1,0,0,1,1,1,0,-1;

        X = mB * mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}

