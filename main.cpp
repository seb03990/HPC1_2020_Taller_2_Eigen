/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal F
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio F'=="<<std::endl;

        Eigen::Matrix3d mA, mB, X;
        mA << 1,5,-1,-1,2,2,0,-3,3;
        mB << -1,-4,3,1,-2,-2,-3,3,-5;

        X = mA + 3*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}   L
