#include <iostream>

using namespace std;
double fact(float n);
float n;
int main(){
    std::cout << "Enter n ";
    std::cin >> n;
    std::cout << "Factorial n " << n << " = " <<fact(n)<<endl << endl;

    return 0;
}

double fact(float n){
    if(n < 0)
        return 0;
    if (n == 0)
        return 1;
    else{
        return n * fact(n - 1);
    }

}
