#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int l;
    char c;
    cin >> l >> c;

    double m[12][12];
    double sum = 0.0;

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < 12; i++)
    {
        sum += m[i][l];
    }

    double ans = (c == 'S') ? sum : (sum / 12.0);
    cout << fixed << setprecision(1) << ans << endl;

    return 0;



}