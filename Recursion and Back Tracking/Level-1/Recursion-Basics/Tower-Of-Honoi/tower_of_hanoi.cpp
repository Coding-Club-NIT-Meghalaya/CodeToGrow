#include <iostream>
using namespace std;
void towerOfHanoi(int n, int from_rod, 
                    int to_rod, int aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "1["<< from_rod << "->" << to_rod<<"]";  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout <<  n <<"["<< from_rod <<"->" << to_rod <<"]";  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  
  

int main()  
{  
	//input number of disks
    int n;cin>>n;
    //input from,to,aux rod number
    int a,b,c;cin>>a>>b>>c;
    towerOfHanoi(n, a, b, c);
    return 0;  
}  
  

