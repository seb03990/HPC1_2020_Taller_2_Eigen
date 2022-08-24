/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal P
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio P'=="<<std::endl;

        Eigen::Matrix4d mA, mB, X;
        mA << 1,1,1,1,1,1,-1,-1,1,-1,1,-1,1,-1,-1,1;
        mB << 1,1,0,0,1,0,1,0,1,0,0,1,1,0,1,1;

        X = mA.inverse() * mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
