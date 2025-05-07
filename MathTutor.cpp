#include <iostream>
using namespace std;
int main()
{
    //creates parameters for number genrator
    const int MIN_NUM = 1;
    const int MAX_NUM =1000;
//intializes variables
    int num_1;
    int num_2;
    int solution;
//intializes random number generator
    unsigned seed = time(0);
    srand(seed);
// creates the random numbers
    num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
    solution = num_1 + num_2;
// displays the problem to be solved
    ::cout << "Please solve the following equation : " << std::endl;
cout << num_1 << " + " << num_2 <<endl;
//prompts the user to press enter to generate answer
    cout<< "Please press enter to see the correct answer. "<<endl;
cin.get();
    cout<< endl;

//displays the problem again with the solution
    cout<< num_1 << " + " << num_2 << "= " << endl;
    cout<< solution << endl;
    return 0;
}