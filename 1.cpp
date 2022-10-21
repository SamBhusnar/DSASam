#include <iostream>
using namespace std;
int main()
{
    // cout << "this is int :  " << sizeof(int) << endl;
    // cout << "this is float :  " << sizeof(float) << endl;
    // cout << "this is double :  " << sizeof(double) << endl;
    // cout << "this is bool :  " << sizeof(bool) << endl;
    // cout << "this is char :  " << sizeof(char) << endl;
    // cout << "this is unsignint :  " << sizeof(unsigned) << endl;
    // cout << "this is signint :  " << sizeof(signed) << endl;
    // cout << "Sangola\n";

    // char s = 'hhd'; // last char in case of multicharater in char datatype
    // cout << s;

    // max = 2, 147, 483, 647
    // int value = 2147483647; // max value that int able to store
    // cout << value;
    // cout << "This is sam from pandharpur ! \n";
    // char s = 255;
    // cout << "type of s : " << sizeof(s) <<" byte<"<<endl;
    // cout << "Char is : " << s;

    // if (true)
    // {
    //     cout << "Sam is good boy ! " << endl;
    // }
    // else
    // {
    //     cout << "call sir.com";
    // }
    //  question 1:
    // 1 . if input is a to z then print inp is between a to z
    // 2 . if input is A to Z then print inp is between A to Z
    // 3 . if input is 0 to 9 then print inp is between 0 to 9
    // approch 1
    // cout << "Enter any character\n";
    // char ch;
    // cin >> ch;
    // if (ch >=  97&& ch <=122 )
    // {
    //     cout << "is small case : " << ch << endl;
    // }
    // else if (ch >=65  && ch <= 90)
    // {
    //     cout << "this is big case : " << ch << endl;
    // }
    // else if(ch>=48 && ch<=57){
    //     cout<< "this is between 0 to 9 : " << ch <<endl;
    // }
    //  Approch 2

    // cout << "Enter any character\n";
    // char ch;
    // cin >> ch;
    // if (ch >=  'a' && ch <='z' )
    // {
    //     cout << "is small case : " << ch << endl;
    // }
    // else if (ch >='A'  && ch <= 'Z')
    // {
    //     cout << "this is big case : " << ch << endl;
    // }
    // else if(ch>='0' && ch<='9'){
    //     cout<< "this is between 0 to 9 : " << ch <<endl;
    // }
    // int i=0;
    // while(07){
    //     if(i<=10000){
    //         cout<<i<<endl;

    //     }else{
    //         break;
    //     }
    //     i++;
    // }
    //  cout first n number
    // cout<<"Enter strictal sum of first number";
    // approch 1
    // int num;
    // cout<<"Enter any number\n";
    // cin>> num;
    // int i=0;
    // int sum=0;
    // while (i<=num)
    // {
    //     sum+=i;
    //     i++;
    // }

    // cout<<sum;
    // approch 2 using formula method
    // int num;
    // cout<<"Enter any number\n";
    // cin>> num;

    // int sum=((num/2)*(1+num));
    // cout<<sum;
    // int num;
    // cout<<"Enter any number to sum of all even numbers\n";
    // cin>> num;
    // int i=0;
    // int sum=0;
    // while (i<=num)
    // {
    //    if (i%2==0)
    //    {
    //     sum+=i;

    //    }
    //    i++;
    // }

    // cout<<sum;

    // int num;
    // cout << "Enter any number\n";
    // cin >> num;
    // int i = 2;
    // int save = 0;
    // while (i < num)
    // {
    //     if (num % i == 0)
    //     {
    //         save += 1;
    //     }
    //     i++;
    // }
    // if (save == 0)
    // {
    //     cout << "Entered number is prime : " << num;
    // }
    // else
    // {
    //     cout << "Entered number is not  prime : " << num;
    // }
    // cout << "\nvalue of save is : " << save;


    // cout<< "this is sam from the  earth !\n";
    cout<<"Enter any number";
    int n,i,j;
    i=1;
    j=1;
    cin>>n;
    while (i<=n)
    {
    j=1;
     while (j<=n)
     {
        cout<<i;
        j++;
     }
     i++;
     cout<<endl;
    }
    
    return 0;
}