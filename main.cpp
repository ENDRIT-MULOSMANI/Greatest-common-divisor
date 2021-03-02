#include <iostream>
using namespace std;
void GCD()
{
    int n1, n2;

    cout << "Shkruaj numrin e pare: ";
    cin >> n1;
    cout << "Shkruaj numrin e dyte: ";
    cin >> n2;
    
    while(n1 != n2)
    {
        if(n1 > n2)//nqs nr1 > nr2
            n1 -= n2;// n1 = n1-n2
        else
            n2 -= n1;//n2 = n2=n1
    }

    cout << "GCD = " << n1;
}

int main() 
{
  GCD();
}