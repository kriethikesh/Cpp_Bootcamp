#include <iostream>
using namespace std;

int main(){
    double w,h; int age; char g;
    const double BMI_UNDER=18.5,BMI_NORMAL=24.9;

    cin>>w>>h>>age>>g;

    double bmi=w/(h*h);
    bool under=bmi<BMI_UNDER, normal=bmi<=BMI_NORMAL;
    char grade=(age<30)?'A':'B';

    cout<<"BMI:"<<bmi<<"\nUnder:"<<under<<"\nNormal:"<<normal<<"\nGrade:"<<grade;
}