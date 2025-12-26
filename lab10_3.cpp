#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    ifstream source("score.txt");
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;

    while(getline(source, textline)){
        sum += stof(textline);
        sum_of_square += pow(stof(textline),2);
        count++;
    }

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum / count << endl;
    cout << "Standard deviation = " << sqrt((sum_of_square/count) - pow((sum/count),2));

    return 0;
}