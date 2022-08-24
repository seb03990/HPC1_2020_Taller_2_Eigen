/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal C
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
        std::cout<<"\n=='Ejercicio C'=="<<std::endl;

        Eigen::Matrix2d mA,mB,mC,X;
        mA << -3,-2,3,3;
        mB << 5,3,9,4;
        mC << 1,1,0,0;

        mB.transposeInPlace();
        mC = mA.inverse()*mC;
        X = mC * mB.inverse();

        std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;


    return 0;
}
