/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal M
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio M'=="<<std::endl;

        Eigen::MatrixXd mA(1,3), mB(3,2), mC(2,1), X;
        mA << 4,8,12;
        mB << 3,2,0,1,-1,0;
        mC << 3,-1;

        X = mA*mB*mC;

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
