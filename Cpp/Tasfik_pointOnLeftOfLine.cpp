// Detect whether a point is on the left of a line or on the right
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isLeft(int x1, int y1, int x2, int y2, int px, int py)
{
    int crossProductAns = x1 * (y2 - py) - y1 * (x2 - px) + (x2 * py - px * y2);
    // include = sign if u want to consider point on the line as left of the line.
    return crossProductAns >= 0 ? true : false;
}



int main()
{
    // the co-ordinate of the line
    int x1, y1, x2, y2;
    //co-ordinate of a point p
    int px, py;
    cin >> x1 >> y1 >> x2 >> y2 >> px >> py;
    if (isLeft(x1, y1, x2, y2, px, py))
    {
        cout << "The point p is on the left of the line." << endl;
    }
    else
    {
        cout << "The point p is on the right of the line." << endl;
    }

    return 0;
}