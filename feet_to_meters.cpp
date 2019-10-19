#include <iostream>
using namespace std;

void convert_to_meters(){
    double feet_var, result, CONVERSION = 1/3.281;
    char yes_no_var;

    cout << endl << 
            "Enter the number of feet you want converted to meters: " <<
            endl;
            
    cin >> feet_var;

    result = feet_var * CONVERSION;

    cout << endl << 
            feet_var << 
            " feet is equal to " << 
            printf("%.2f", result) << 
            " meters." << 
            endl << endl;

    cout << "Would you like to convert another value? (enter 'y' or 'n')." << 
            endl;
            
    cin >> yes_no_var;

    if(yes_no_var == 'y'){

        convert_to_meters();

    } else if(yes_no_var == 'n'){
        
        cout << endl << 
        "Well that was fun." << 
        endl;

    }

}

int main(){    

    cout << endl <<
            "Michael Drozdov" <<
            endl;

    convert_to_meters();

    return 0;
}