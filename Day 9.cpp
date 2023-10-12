// i will do again for loop


#include <iostream>
using namespace std;
int loop1() {
    cout << "=================================================" << endl;
    // Print the numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    return 0;
}
int loop2() {
    cout << "=================================================" << endl;
    // if we discuss scope of i here
    // then i can only used in this loop ony we cannot use it in another place
    // compiler will genrate errors
    // 
    // 
    // Calculate the sum of the squares of the numbers from 1 to 100
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i * i;
    }

    cout << "The sum of the squares of the numbers from 1 to 100 is: " << sum << endl;

    return 0;
}

int scope() {
    //in this loop here we declearei outside of loop now its scope is different from the loop we did before
    //here i have more scope that it can be used with in whole function
    
    cout << "=================================================" << endl;
    int sum = 0;
    int i=1;
    for ( i; i <= 100; i++) {
        sum += i * i;
    }

    cout << "The sum of the squares of the numbers from 1 to 100 is: " << sum << endl;

    return 0;
}

int scope1() {
    //leave out itration dec;eration part
    //in this process if we do not use the first parenthensis in the loop it will not affect the 
    // whole process


    cout << "=================================================" << endl;
    int sum = 0;
    int i = 1;
    for ( ; i <= 100; i++) {
        sum += i * i;
    }

    cout << "The sum of the squares of the numbers from 1 to 100 is: " << sum << endl;

    return 0;
}
int wlile1() {
    cout << "=================================================" << endl;
    //it will also work as the same way in which for loop work


    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }

    return 0;
}
int do_do() {
    cout << "=================================================" << endl;

    //in this loop one time statement will must executed 
    //for the other times it will need to check the while conditions


    int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 10);

    return 0;
}
int arr() {
    cout << "=================================================" << endl;

    //let an arry and now we are pring its value on the screen
    //to show value we use for loop

    int arr[] = { 1, 2, 3, 4, 5 };
   

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


int arr1() {

    cout << "=================================================" << endl;

    // if we do not initilize some value in an array those were consider as 
    // 0 zero by defAULT

    //LIKE

        int families[]{ 2,5,6 };

        for (size_t i{ 0 }; i < 5;i++) {
            cout << families[i] << endl;

        }

        return 0;
}
int arr3() {
    cout << "=================================================" << endl;

    //initilize kaerte huwe arr ko koi size ni dena hai

    int class_arr[]{ 3,7,8,5,4 };

    //it will autoatly show alll the values that are present in an arrey
    for (auto value  : class_arr) {
        cout << "value : " << value << endl;
    }

    return 0;
}

int main()
{
    loop1();
    loop2();
    scope();
    scope1();
    wlile1();
    do_do();
    arr();
    arr1();
    arr3();

}

 
