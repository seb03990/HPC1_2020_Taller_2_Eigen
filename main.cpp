/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal J
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio J'=="<<std::endl;

        Eigen::Matrix2d mA, X;
        mA << 4,2,-1,0;

        X = mA*mA*mA;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
Li
