#include "sun.h"
#include <cmath>
#include <iostream>
Sun:: Sun(int r0, int x0, int y0): Figure(19, x0, y0), r(r0)  {
    Round* round = new Round(0, 0, r, r, FL_YELLOW);
    goright = true;
    count = 0;
    arr[0] = round;
    int k = n - 1;
    const double pi = acos(-1.0);
    for (int i = 0; i < k; i++) {
        Ray* l = new Ray(0, 0, r * cos(2*pi/k * i),r * sin(2*pi/k * i), FL_YELLOW);
        arr[i + 1] = l;
    };

}

void Sun:: move() {
    if (x + r>= 1200) 
        goright = false;
    else if (x - r <= 0)
        goright = true;
    
    if (count >= 3) 
        count = 0;
    else 
        count++;
    
    for (int i = 1; i < n; i++)
       arr[i]->move(0, 0, count,n-1,r,i-1);

    if (goright)
            x += 15;
        else 
            x -= 3;

}
