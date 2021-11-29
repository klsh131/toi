#include <iostream>
using namespace std;

int main()
{
    int n;
    int f;
    int i;
    int count[100]={0};
    
    cin >> n;
    
    for (i=0;i<n;i++)
    {
        cin >> f;
        f = f/10%100;
        
        count[f]++;
        
    }
    
    for (i=0;i<100;i++)
    {
        if (count[i]>0)
        {
            cout << i << " " << count[i] << endl;
        }
    }


	return 0;
}