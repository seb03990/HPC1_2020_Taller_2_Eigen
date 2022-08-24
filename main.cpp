/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal L
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio L'=="<<std::endl;

        Eigen::MatrixXd mA(2,3), mB(3,2), X;
        mA << 1,0,-2,2,-1,3;
        mB << 2,-3,-2,0,-1,-2;

        X = mA*mA.transpose()-2*mA*mB;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}

