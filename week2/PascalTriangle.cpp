#include <iostream>
#include <vector>
using namespace std;

void pascalTriangleVectorM(vector<vector<int>> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
                cout << a[i][j];
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                cout << a[i][j];
            }
        }
        cout << endl;
    }
}
void printArray(vector<vector<int>> a, int n){

  for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

}
int main()
{

    int n;
    cout << "ENter the value of n " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count = count * (i - j) / j;
        }
        cout << endl;
    }

    // method 2

    vector<vector<int>> a(n);
    pascalTriangleVectorM(a,n);
    printArray(a,n);
  
}