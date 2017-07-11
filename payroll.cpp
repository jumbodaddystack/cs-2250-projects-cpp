#include <iostream>
#include <iomanip>

using namespace std;

int main(){

//  Arrays to be used for storing the employees, pat rates, hours worked, and total wages earned.

const int ARRAY_SIZE = 7;


long int empId[ARRAY_SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
int hoursWorked[ARRAY_SIZE];
double payRate[ARRAY_SIZE];
double grossWages[ARRAY_SIZE];

// interger used to iterate over the "hoursWorked" array and the "payRate" array


int x;

    //for loop to iterate over the arrays


    for (x = 0; x < ARRAY_SIZE; x++)
	{
		cout << "Enter the hours worked for employee #" << empId[x] << ": "; //prompt user for hours worked for each employee
		cin >> hoursWorked[x];

		while (hoursWorked[x] < 0) //verify that the hours worked are not zero
		{
			cout << "Enter a valid number of hours for employee #" << empId[x] << ": ";
			cin >> hoursWorked[x];
		}

		cout << "Enter the hourly pay rate for employee #" << empId[x] << ": $"; //prompt user for the pay rate for each employee
		cin >> payRate[x];

			while (payRate[x] < 15.00) //verify that the pay rate is greater than 15.00 per hour
			{
				cout << "Please enter a pay rate greater than or equel to $15.00 per hour. " << endl;

				cin >> payRate[x];
			}
    }

    //calculate the wages for each employee and store it in the
    //grossWages array

    grossWages[0] = hoursWorked[0] * payRate[0];
    grossWages[1] = hoursWorked[1] * payRate[1];
    grossWages[2] = hoursWorked[2] * payRate[2];
    grossWages[3] = hoursWorked[3] * payRate[3];
    grossWages[4] = hoursWorked[4] * payRate[4];
    grossWages[5] = hoursWorked[5] * payRate[5];
    grossWages[6] = hoursWorked[6] * payRate[6];

    cout << fixed << showpoint << setprecision(2);

    cout << endl;   //just to clean up the output
    cout << endl;   //ditto to above

    //display the results to the user

    cout << "The gross wages for employee #" << empId[0] << " is: $" << grossWages[0] << endl;
    cout << "The gross wages for employee #" << empId[1] << " is: $" << grossWages[1] << endl;
    cout << "The gross wages for employee #" << empId[2] << " is: $" << grossWages[2] << endl;
    cout << "The gross wages for employee #" << empId[3] << " is: $" << grossWages[3] << endl;
    cout << "The gross wages for employee #" << empId[4] << " is: $" << grossWages[4] << endl;
    cout << "The gross wages for employee #" << empId[5] << " is: $" << grossWages[5] << endl;
    cout << "The gross wages for employee #" << empId[6] << " is: $" << grossWages[6] << endl;






		return 0;

}

/* I was attempting to use a similar method to calculate and display the gross wages
as i used to input and verify the data. However, my program would get to that point
and run in a loop, outputting the 1st value in the array over and over. I couldn't figure out
to get it to iterate through the array like i did with the first section, despite
using the same technique. Can you only use a technique like that once per function?
Should I have created seperate functions for each section of the program like we
did last module? */
