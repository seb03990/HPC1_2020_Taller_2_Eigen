/*Steven Sebastian Florido Paez
 * Taller en Qt con Eigen
 * HPC
 * Literal E
 * */

#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
    std::cout<<"\n=='Ejercicio E'=="<<std::endl;


       Eigen::MatrixXd mA(2,3),mB(3,2),mC(2,2),X;
       mA << 3,0,-1,0,2,1;
       mB << 1,2,1,0,0,6;
       mC << -2,0,-2,-5;

       X = 2*(mA*mB+mC);

    std::cout<<"\n=='Matriz X'==\n"<<X<<std::endl;

    return 0;
}
