#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    char choice;

    double a;
    double t;
    double d;

    do {
        cout << "What is the acceleration of the car? (in m/s^2): ";
        cin >> a;
        cout << "How long was the acceleration for?: ";
        cin >> t;
        cout << "How long are the skid marks?: ";
        cin >> d;
        cout << "Awesome! Thanks for the given variables! Preforming calculations now!";
        Sleep(1000);
        cout << " . ";
        Sleep(1000);
        cout << " . ";
        Sleep(1000);
        cout << " . \n\n";
        Sleep(1000);
        cout << "\n\nCalculating Initial Velocity (vxi)\n\n";
        Sleep(2000);
        cout << "Using: (Distance - 1/2 * acceleration * time * time) / t\n\n";
        Sleep(5000);
        cout << "Equation: (" << d << " - .05 * " << a << " * " << t << " * " << t << ") / " << t << "\n\n";
        double vxi = (d - 0.5 * a * t * t) / t;
        Sleep(3000);
        cout << "= " << vxi << " ... ";
        Sleep(5000);
        cout << "The value of the initial velocity is approximately: " << vxi << " m/s\n\n\n";
        Sleep(2000);
        cout << "Calculating Final Velocity (vxf)\n\n";
        Sleep(2000);
        cout << "Using: ' vxi + acceleration * t ' \n\n";
        Sleep(5000);
        cout << "Equation: (" << vxi << " + " << a << " * " << t << ")\n\n";
        double vxf = vxi + a * t;
        Sleep(3000);
        cout << "= " << vxf << " ... ";
        Sleep(5000);
        cout << "The driver strikes the tree going: " << vxf << " m/s\n\n\n";
        cout << "Calculating Needed Acceleration to Stop. 0 represnets Final Velocity.(vxf)\n\n";
        Sleep(2000);
        cout << "Equation for ax: (0 - (" << vxi << " * " << vxi << ")) / (2 * (" << d << " - 0))\n\n";
        Sleep(5000);
        double ax = (0 - ((vxi) * (vxi))) / (2 * (d - 0));
        cout << "The required acceleration to avoid impact is: " << ax << " m/s" << std::endl;
        // Ask user if they want to continue or exit
        cout << "\nWould you like to continue? Press 'y' to continue or 'n' to exit: ";
        cin >> choice;
        cin.ignore();  // Clear the buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
