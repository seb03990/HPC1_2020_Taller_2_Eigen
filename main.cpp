/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal G
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio G'=="<<std::endl;

        Eigen::Matrix3d mA, mB, X;
        mA << 2,7,3,3,9,4,1,5,3;
        mB << 1,0,2,0,1,0,0,0,1;

        X = mB*mA.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}

