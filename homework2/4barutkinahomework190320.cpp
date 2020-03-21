#include <iostream>

using namespace std;
float y,x;
int main()
{
    std::cout << "Enter x ";
    std::cin >> x;
       if( x > 3){
           y=5*x - 10;
        }
     else{
       if(x=3){
           y=1;
       }
    }

       if(x < 3){
           y=2 * abs(x) - 5;
       }
    std::cout << y;
}
