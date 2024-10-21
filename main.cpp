#include <iostream>
using namespace std;




string main() {
    string response;
    int cont = 0;
    int count = 0; // Designed to count the amount of times the while loop iterates

    int radius;
    int height;
    int values[5] ={1, 2, 3, 4 ,5};
    
    while (int cont = 0) 
    {
        count++;
        cout << "Hi. This program is designed to calculate for the volume of a cylinder. Would you like to continue? (Y/N): ";
        cin >> response;
        if (response == "Y")
        {

        } 
        else if (response == "N") 
        {
            cout << "Understood. Terminating program.";
            cont = 1;
        } 
        else 
        {
            cout << "Improper input detected. Terminating program.";
            cont = 1;
        }
    }
    string number;
    
    cin >> number;  // Receives input from the user and stores it in the 'number' variable
    cout << "You entered: " << number << endl;
    return "";
}

/* 
Modify and manipulate multiple variables
Change the values of at least 2 variables in your project, each of a different data type, during the program’s execution.

Create nested decision structures
Implement at least 1 nested decision-making structure using if-else or switch statements.

Implement nested loops
Include at least 1 nested loop in your project to manage repetitive tasks at multiple levels.

Create and call custom functions with parameters
Create and use at least 1 custom function that takes at least 2 parameters in your project.

Use arrays or lists for operations
Perform at least 1 operation (e.g., adding, removing, or accessing elements) on arrays or lists in your project.

Optimize and document your code
Refactor at least 1 area of your code for efficiency and include comments explaining the optimization.
*/