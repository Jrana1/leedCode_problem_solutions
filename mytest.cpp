#include <bits/stdc++.h>
using namespace std;

int main()
{

    // w = width of the room
    // l = length of the room
    int w, l;
    while (1)
    {

        cin >> w >> l;
        // n = no. of segments
        if (w == 0 && l == 0)
        {
            break;
        }
        int n;
        cin >> n;
        int X = 0, Y = 0;
        //(X,Y) where robot thinks
        //(X1,Y1) where it actually is
        int X1 = 0, Y1 = 0;
        while (n--)
        {

            char direction;
            // y = distance in given direction
            int y;
            cin >> direction;
            cin >> y;
            switch (direction)
            {
            case 'u':
                /* code */
                Y += y;
                X1 = min(l - 1, X1 + y);
                break;
            case 'r':
                /* code */
                X += y;

                Y1 = min(w - 1, Y1 + y);

                break;
            case 'd':
                /* code */
                Y -= y;
                X1 = max(0, X1 - y);
                break;
            case 'l':
                /* code */
                X -= y;
                Y1 = max(0, Y1 - y);
                break;

            default:
                break;
            }
        }
        cout << "Robot thinks " << X << " " << Y << endl;
        cout << "Actually at " << Y1 << " " << X1 << endl;
    }
    return 0;
}