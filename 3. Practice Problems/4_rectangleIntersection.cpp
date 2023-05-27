#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    freopen("bendin.txt", "r", stdin);
    freopen("bendout.txt", "w", stdout);

    int x_first, x_second, y_first, y_second;
    int x_third, x_fourth, y_third, y_fourth;

    cin >> x_first >> y_first >> x_second >> y_second;
    cin >> x_third >> y_third >> x_fourth >> y_fourth;

    int area1 = (x_second - x_first) * (y_second - y_first);
    int area2 = (x_fourth - x_third) * (y_fourth - y_third);

    int left = max(x_first, x_third);
    int right = min(x_second, x_fourth);

    int bottom = max(y_first, y_third);
    int top = min(y_second, y_fourth);

    int area_int = 0;
    if (left < right && bottom < top)
    {
        area_int = (right - left) * (top - bottom);
    }
    int ans = area1 + area2 - area_int;

    cout << ans << endl;

    return 0;
}

/*
    Two rectangles on an endless plane is given. These two rectangles have their
    corners at integer co-ordinates. Find the total area of the plane which is
    covered by these rectangles. Some parts of the plane may be covered by both
    rectangles. If you merely add the individual areas together, you would get
    incorrect answer.S
*/