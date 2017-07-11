#include <iostream>
#include <iomanip>

using namespace std;

//prototyping the functions to be used for this program.

void getScores(int &);
void calcAverage(int,int,int,int,int);
int findLowest(int,int,int,int,int);


int main()
{
    //Introduction to the program.

    cout << "This program calculates the average of your test scores. \n" << endl;

    //Variable used to repeatidly call the getScore() function

    int x = 0;

    //Variables used to store the test scores entered by the user

    int score1;
    int score2;
    int score3;
    int score4;
    int score5;

    //if() function used to call the getScore function 5 times
    //in order to input the 5 scores to be averaged

    if(x == 0){
        cout << "Please enter your first test grade: " << endl;
        getScores(score1);
        x++;
        }
    if(x == 1){
        cout << "Please enter your second test grade: " << endl;
        getScores(score2);
        x++;
        }
    if(x == 2){
        cout << "Please enter your third test grade: " << endl;
        getScores(score3);
        x++;
        }
    if(x == 3){
        cout << "Please enter your fourth test grade: " << endl;
        getScores(score4);
        x++;
        }
    if(x == 4){
        cout << "Please enter your final test gradeL " << endl;
        getScores(score5);
        x++;
    }

    // Send the 5 test scores gathered to the function used to calculate the average.

    calcAverage(score1,score2,score3,score4,score5);

    //completely useless statement, but customer service is always important.

    cout << "Thank you for using my program!!!" << endl;

        return 0;

        }

// function to prompt for input from the user and store the information in an integer variable.

void getScores(int &scores){

        // "temporary" variable to store the input from the user only while the function is called.

        int storageVariable;

        cin >> storageVariable;

        // Verify that the score entered is a valid test score.

        if(storageVariable < 0 || storageVariable > 100){
        cout << "Please enter a valid test grade between 0 and 100. " << endl;
        cin >> storageVariable;
        }

        //assign the input from the user to the appropriate variable sent from the main function.

        scores = storageVariable;



    }

// function to calculate the average of the test scores entered.

void calcAverage(int test1, int test2 ,int test3 ,int test4 ,int test5){

    double average;             // variable to store the average
    int lowestGrade;            // variable to store the lowest grade after received from findLowest function.

    //call function lowestGrade and send the five scores to that function
    //the returned int is then assigned to the variable lowestGrade

    lowestGrade = findLowest(test1,test2,test3,test4,test5);

    //assignment statement to find the average of the top 4 test scores entered.

    average = ((test1+test2+test3+test4+test5)-lowestGrade)/4.0;

    //display average to the user

    cout << fixed << showpoint << setprecision(1);
    cout << "You average is " << average << "." << endl;
    cout << endl;
}

//funtion to compare the test scores and return the lowest score to the calcAverage function

int findLowest(int test1, int test2, int test3, int test4, int test5){

    if(test1 < test2 && test1 < test3 && test1 < test4 && test1 < test5)
        return test1;

    else if (test2 < test1 && test2 < test3 && test2 < test4 && test2 < test5)
        return test2;

    else if (test3 < test1 && test3 < test2 && test3 < test4 && test3 < test5)
        return test3;

    else if (test4 < test1 && test4 < test2 && test4 < test3 && test4 < test5)
        return test4;

    else

        return test5;

    }
