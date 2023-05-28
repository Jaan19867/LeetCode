#include <iostream>
using namespace std;

int main()
{

    int n, i, j;
  
    for (i=94 ; i <= 120; i++)
    {
        int count = 0;
        for (n = 2; n <= i; n++)
        {
            if (i%n == 0)
            {
                count++;
            
            }
           
        }
          
    if (count ==1 )
            {
                cout << i<<" ";
            }

    
    }
}