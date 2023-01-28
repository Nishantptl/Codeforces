#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    char s[600][600];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> s[i][j];
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (s[i][j] == 'S' && (s[i][j + 1] == 'W' || s[i + 1][j] == 'W' || s[i - 1][j] == 'W' || s[i][j - 1] == 'W'))
            {
                cout << "No" << endl;
                return 0;
            }

            if (s[i][j] == 'S')
            {
                if (s[i][j - 1] == '.')
                {
                    s[i][j - 1] = 'D';
                }

                if (s[i][j + 1] == '.')
                {
                    s[i][j + 1] = 'D';
                }

                if (s[i - 1][j] == '.')
                {
                    s[i - 1][j] = 'D';
                }

                if (s[i + 1][j] == '.')
                {
                    s[i + 1][j] = 'D';
                }
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
