// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

    int incBy = 0, passingCars = 0;
    for (auto element : A)
    {
        if (element == 0)
        {
            incBy++;
        }
        else if (element == 1)
        {
            passingCars += incBy;
        }
    }

    if (passingCars <= 1000000000&& passingCars>=0) return passingCars;
    else return -1;
}
//Passingcar case
