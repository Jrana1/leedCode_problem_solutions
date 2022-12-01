#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;
    while (n--)
    {

        int r, c;
        cin >> r >> c;

        vector<vector<char>> img(r, vector<char>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> img[i][j];
            }
        }

        for (int i = 0; i < r; i++)
        {
            reverse(img[i].begin(), img[i].end());
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0, last = c - 1; j < last; j++, last--)
            {
                swap(img[j][i], img[last][i]);
                // char tmp = img[j][i];
                // img[j][i]=img[last][i];
                // img[last][i]=tmp;
            }
        }
        cout << "Test " << i << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << img[i][j];
            }
            cout << endl;
        }
        i++;
    }
    return 0;
}