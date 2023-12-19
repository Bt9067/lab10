#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sum_of_square += pow(atof(textline.c_str()),2);
        count++;
    }  
    cout << "Number of data = " << count <<endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sum_of_square/count)-((sum/count)*(sum/count)));
source.close();
return 0;
}
