#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream file;
    file.open("score.txt");

    int count = 0;
    float sum = 0;
    float SD = 0;
    float SDA = 0;
    string textline;


    ifstream source("score.txt");
    while(getline(source,textline))
    {
        sum += stof(textline);
        count++;
        SDA += pow((stof(textline)),2);
    }

   float mean = sum/count; 
   SD = pow((SDA/count)-pow(mean,2),0.5);

    cout << "Number of data = "<< count <<'\n';
    cout << setprecision(3);
    cout << "Mean = "<< mean <<'\n';
    cout << "Standard deviation = "<<SD;
}

