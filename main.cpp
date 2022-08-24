/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal A
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio A'=="<<std::endl;

        Eigen::Matrix2d mA,mB,X;
        mA << 4,-2,1,-7;
        mB << -1,2,6,-5;

        X=3*mA-4*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
