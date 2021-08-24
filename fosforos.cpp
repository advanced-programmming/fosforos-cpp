#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string result = "";
    int amountMatches = 0;
    int width = 0;
    int height = 0;
    cin>>amountMatches>>width>>height;
    int matches[amountMatches]; 

    int value = 0;
    for(int i = 0; i < amountMatches; i++) {
        cin>>value;
        matches[i] = value;
        double diagonal = sqrt((width * width) + (height * height));
        string solution = matches[i] <= diagonal ? "DA" : "NE";
        result += solution + "\n";
    }
    cout<<result;   
    return 0;
}