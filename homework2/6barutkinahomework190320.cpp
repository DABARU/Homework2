#include <iostream>

int main()
{
   float num,y,x,X;

   std::cout << "Enter num: ";
   std::cin >> num;

   std::cout << "Enter X: ";
   std::cin >> X;

   std::cout << "Enter x: ";
   std::cin >> x;

   for(int i=0; i < num; i++)
        y=1/x+1/2*x+1/3*x+1/(num*X);
       std::cout << y << " ";

   std::cout << std::endl;

   std::getchar();  // ожидание ввода, чтобы прога
   std::getchar();  // не закрывалась после выполнения
   return 0;
}

