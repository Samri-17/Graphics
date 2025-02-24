//dda
#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<iomanip>  // for controlling precision

using namespace std;

int main()
{
    int gd, gm;
    gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x1, y1, x2, y2;
    int dx, dy, k;
    float steps;
    float x, y;
    float xinc, yinc;
    float m;

    cout << "Enter x1 and y1:";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2:";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;
    m = float(dy / dx);

    if (abs(dx) > abs(dy)) {
        steps = abs(dx);
    } else {
        steps = abs(dy);
    }

    xinc = dx / steps;
    yinc = dy / steps;

    x = x1;
    y = y1;

    putpixel(round(x), round(y), WHITE);  // Use int() to convert floating-point to integer for putpixel

    // Formatting output for better precision display
    cout << fixed << setprecision(2);  // Print with 2 decimal places
    cout << "xk+1" << "\t\t\tyk+1" << "\t\t\txk+1,yk+1" << endl;

    // Display initial values
    cout << x1 << "\t\t\t" << y1 << "\t\t\t" << x1 << "," << y1 << endl;

    for (k = 0; k < steps; k++) {
        x = x + xinc;
        y = y + yinc;

        // Output the values of x and y
        cout << round(x) << "\t\t\t" << round(y) << "\t\t\t" << round(x) << "," << round(y) << endl;

        // Use integer conversion for putting pixels
        putpixel(round(x)+200, 200-round(y), WHITE);  // Draw the pixel at the rounded x, y position
    }
line(200,0,200,200);
line(200,200,400,200);
    getch();
    closegraph();
    return 0;
}

