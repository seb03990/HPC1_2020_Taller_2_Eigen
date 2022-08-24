/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal K
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio K'=="<<std::endl;

        Eigen::Matrix2d mA, mB, mC, X;
        mA << 2,4,3,2;
        mB << 1,0,2,1;
        mC << 7,5,6,1;

        mA.transposeInPlace();
        mC = mA.inverse()*mC;
        X = mC*mB.inverse();

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
