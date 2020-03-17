#include<iostream>
using namespace std;
 
class Marks
{
      int m1;            
      int m2;           
   
   public:

   Marks() 
   {
        m1 = 0;
        m2 = 0;
   }
   
   Marks(int i, int j) 
   {
        m1 = i;
        m2 = j;
    }

   // Overloading of Assignment Operator

    void operator=(const Marks &M ) 
    { 
        m1 = M.m1;
        m2 = M.m2;
    }
    
   void Display()  
   {
      cout << "Marks in 1st Subject:" << m1;
      cout << "Marks in 2nd Subject:" << m2;
   }   
};

int main()
{
  
   Marks Mark1(44, 88);
   Marks Mark2(22, 11); 
   
   cout << " Marks of first Student : "; 
   Mark1.Display();
   cout << " Marks of Second Student :"; 
   Mark2.Display();

   // use assignment operator
   Mark1 = Mark2;
   
   cout << " Mark of first Student :"; 
   Mark1.Display();

   return 0;
}