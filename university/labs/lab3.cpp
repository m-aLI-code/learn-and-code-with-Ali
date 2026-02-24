#include<iostream>
using namespace std;

int main(){
    
    // Swap two numbers without a temporary variable

    cout<<"PROGRAM NO. 1 : "<<endl;
    int num1, num2;
    cout<<"Enter first number = ";
    cin>>num1;
    cout<<"Enter second number = ";
    cin>>num2;
    cout<<"Input numbers before swap are "<<num1<<" and "<<num2<<" . \n";
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"Input numbers after swap are "<<num1<<" and "<<num2<<" .\n\n";

    // Compare two numbers using all relational operators

    cout<<"PROGRAM NO. 2 : "<<endl;
    int num3, num4;
    cout<<"Enter first number = ";
    cin>>num3;
    cout<<"Enter second number = ";
    cin>>num4;
    cout<<"Is "<<num3<< " > "<<num4<<" ? \nAns = "<<(num3 > num4)<<endl;
    cout<<"Is "<<num3<< " < "<<num4<<" ? \nAns = "<<(num3 < num4)<<endl;
    cout<<"Is "<<num3<< " >= "<<num4<<" ? \nAns = "<<(num3 >= num4)<<endl;
    cout<<"Is "<<num3<< " <= "<<num4<<" ? \nAns = "<<(num3 <= num4)<<endl;
    cout<<"Is "<<num3<< " == "<<num4<<" ? \nAns = "<<(num3 == num4)<<endl;
    cout<<"Is "<<num3<< " != "<<num4<<" ? \nAns = "<<(num3 != num4)<<endl<<endl;

    // Check that input integer is positive, negative or zero

    cout<<"PROGRAM NO. 3 : "<<endl;
    int num5;
    cout<<"Enter an integer = ";
    cin>>num5;
    if(num5 > 0){
        cout<<"Given integer is positive.\n\n";
    }
    else if(num5 < 0){
        cout<<"Given integer is negative.\n\n";
    }
    else 
    cout<<"Given integer is zero.\n\n";

    // Demonstrate pre increment and post increment

    cout<<"PROGRAM NO. 4 : "<<endl;
    int num6;
    cout<<"Enter an integer = ";
    cin>>num6;
    cout<<"Given integer before post and pre increment is "<<num6<<" .\n";
    cout<<"Pre increment = "<<++num6<<" .\n";
    cout<<"Post increment = "<<num6++<<" .\n";
    cout<<"After post increment = "<<num6<<" .\n\n";

    // Demonstrate pre increment and post decrement

    cout<<"PROGRAM NO. 5 : "<<endl;
    int num7;
    cout<<"Enter an integer = ";
    cin>>num7;
    cout<<"Given integer before post and pre decrement is "<<num7<<" .\n";
    cout<<"Pre decrement = "<<--num7<<" .\n";
    cout<<"Post decrement = "<<num7--<<" .\n";
    cout<<"After post decrement = "<<num7<<" .\n\n";

    // Demonstrate assignment operators

    cout<<"PROGRAM NO. 6 : "<<endl;
    int num8;
    cout<<"Enter an integer = ";
    cin>>num8;
    cout<<"Given value = "<<num8<<endl;
    cout<<"After  i += 10 : "<<(num8 += 10)<<endl;
    cout<<"After  i -= 10 : "<<(num8 -= 10)<<endl;
    cout<<"After  i *= 10 : "<<(num8 *= 10)<<endl;
    cout<<"After  i /= 10 : "<<(num8 /= 10)<<endl;
    cout<<"After  i %= 10 : "<<(num8 %= 10)<<endl<<endl;

    // Print sum of three numbers after incrementing each by 1

    cout<<"PROGRAM NO. 7 : "<<endl;
    int Num1, Num2, Num3;
    cout<<"Enter first number = ";
    cin>>Num1;
    cout<<"Enter second number = ";
    cin>>Num2;
    cout<<"Enter third number = ";
    cin>>Num3;
    int sum  = (++Num1) + (++Num2) + (++Num3);
    cout<<"Sum of given three numbers after incrementing each by 1 is "<<sum<<" .\n\n";

    // Compare two numbers and print which one is greatest or they are equal

    cout<<"PROGRAM NO. 8 : "<<endl;
    int Num4, Num5;
    cout<<"Enter first number = ";
    cin>>Num4;
    cout<<"Enter second number = ";
    cin>>Num5;
    if( Num4 == Num5 ){
        cout<<"Both given numbers are equal.\n\n";
    }
    else if( Num4 > Num5 ){
        cout<<"First number ("<<Num4<<") is greater.\n\n";
    }
    else 
    cout<<"Second number ("<<Num5<<") is greater.\n\n";



    


    return 0;
}
