/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal I
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio I'=="<<std::endl;

        Eigen::Matrix2d mA,X;
        mA << 3,-1,0,2;

        X = mA.transpose()*mA-2*mA;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
