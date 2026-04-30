#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            if (j == 0 || j == i)
            {
                cout << j + 1;
            }
            else if (i == n - 1)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    int a = 1; 
    for (int i = 0; i < n; i++)
    {
        a=1;
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (i == n - 1)
            {
                if (j % 2 == 0)
                {
                    cout << a <<"";
                    a++;
                }
                else
                {
                    cout << " ";
                }
            }
            else if (j == 0 )
            {
               cout<<j+1;
            }
            else if(j == 2*i){
                cout<<i+1;
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}