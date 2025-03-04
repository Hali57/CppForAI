#include<iostream>
#include<string>
#include <type_traits>
#include<memory>
using namespace std;
/*

You'll focus on decision-making and loops in C++. Implement the following:

If-Else Statements:

Write a program that checks if a number is even or odd.
Extend it to check if a number is positive, negative, or zero.
Switch Case:

Create a simple menu-based calculator using a switch statement.
Allow operations like addition, subtraction, multiplication, and division.
Loops (for, while, do-while):

Print numbers from 1 to 100 using a for loop.
Print even numbers from 1 to 50 using a while loop.
Create a simple password prompt using a do-while loop that keeps asking until the correct password is entered.

	*/

/*
void num_check() {
	int num{};
	// if else statement to check if the number is odd or even and if the number is positive negative or 0
	std::cout << "Please input a number" << std::endl;

	std::cin >> num;

	if (num > 0 && num % 2 == 0) {
		std::cout << num << "  is a positive and even number! " << std::endl;


	}
	else if (num < 0 && num % 2 == 0) {
		std::cout << num << "  is a negative and even number! " << std::endl;

	}
	else if (num > 0 && num % 2 != 0) {
		std::cout << num << "  is a positive and odd number! " << std::endl;

	}
	else if (num < 0 && num % 2 != 0) {
		std::cout << num << "  is a negative and odd number! " << std::endl;

	}
	else {
		std::cout << num << "  is zero! " << std::endl;
	}

}

void calculator() {
    int num1{};
    int num2{};
    char choice{};

    std::cout << "****BASIC CALCULATOR****" << std::endl;

    std::cout << "Please input two numbers to perform various calculations " << std::endl;
    std::cout << "First number: ";
    std::cin >> num1;

    // Check if the input is a valid integer
    while (std::cin.fail()) {
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input. Please input a valid number: ";
        std::cin >> num1;
    }

    std::cout << "Second number: ";
    std::cin >> num2;

    // Check if the input is a valid integer
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please input a valid number: ";
        std::cin >> num2;
    }

    std::cout << "Choose the character representing the type of calculation you want to do:" << std::endl;
    std::cout << "multiplication: *, addition: +, subtraction: -, division: /, modulus: %" << std::endl;
    std::cout << "Choice: ";
    std::cin >> choice;

    switch (choice) {
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
        break;
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        }
        else {
            std::cout << "Error: Division by zero is undefined." << std::endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
        }
        else {
            std::cout << "Error: Modulus by zero is undefined." << std::endl;
        }
        break;
    default:
        std::cout << "Invalid choice. Please input a valid character for the desired calculation." << std::endl;
        '\n';
        '\n';
        calculator();
    }
}


int main(){
	
	num_check();
	calculator();
    
    // printing values from 1-100
    
    for (int i = 1; i <= 100; i++) {
        std::cout << i << std::endl;
    };
    


   // printing even numbers from 1 -50
    int i = 1;
    while (i <=50) {
      
        if (i % 2 == 0) std::cout << i << std::endl;
           
       i++;
       
    }
    

   // password checker using a do -while loop

    std::string password{};
    std::string confirm_password{};
    std::cout << "Please input your password: "<< std::endl;
    std::cin >> password;


  do {
      std::cout << "Please confirm your password: " << std::endl;
      std::cin >> confirm_password;

  } while (password != confirm_password);
  std::cout << "Welcome!";


}
*/
/*
📝 Day 4 Task
1️- Create a function that multiplies two numbers and returns the result.
2️- Overload a function that prints an integer, double, and string.
3️ -Write a function that modifies a variable using pass by reference.

*/

/*
int multiplier(int a, int b) {
    return a * b;
}

void printer(int x) {
    cout << "Integer: " << x << endl;
}

void printer(double x) {
    cout << "Double: " << x << endl;
}

void printer(string x) {
    cout << "String: " << x << endl;
}

int modify_vriable(int& x) {
    return x=40;
}

int main() {
    int num = 20;
    multiplier(20, 40);
    printer("John");
    printer(200);
    printer(2.345);
    modify_vriable(num);
    cout << num;
}
*/

/*
               Day 5 Task
1- Create a pointer that stores the memory address of an integer.
2️- Modify a variable’s value through a pointer.
3️- Use a pointer to traverse and print an array’s elements.
4️- Allocate and free dynamic memory for an integer and an array.

*/
/*
int main() {
    int num{ 20 };
    int* ptr = &num; // pointer stores the memory address of the int num

    *ptr = 30; // modifying the value of num

    int array[3] = { 10, 20, 30 };

    int* ptr1 = array;
    // iterating over an array using a pointer
    cout << *ptr1 << endl;
    cout << *(ptr1 + 1) << endl;
    cout << *(ptr1 + 2)<< endl;

    // allocating free memory to an int
    int* number =new int;
    *number = 50;
    delete number; // free allocated memory

    // allocating free memory for an an array
    int size = 3;
    int* arr = new int[ size ];
    delete[] arr; // free allocated memory 
}
*/

/*
                     Day 6 Task
1️- Create a reference and modify a variable using it.
2️- Pass a reference to a function to modify a variable.
3️- Declare a function pointer and call a function using it.
4️- Pass a function pointer as an argument to another function.
*/


// create a func
/*

void modify_value(int& number) {
    number = 200;
    
}

// creating a function pointer

int addition(int a, int b){ return a + b; }

int (*funcPointer)(int, int) = addition; // function pointer

// passing the function pointer as an argument of another func
void executeFunc(int (*func)(int, int), int a, int b) {
    cout << "Result: " << func(a, b) << endl;
}
      
int main() {
    // creating a reference
    int num{ 39 };
    int &num_ref = num;

    num_ref = 50; // modifying a value by changing the reference

    cout << num << endl; // value changed

    int value{ 500 };
    modify_value(value); // changing the value

    cout << value<<endl;
    
    // using the pointer function
    cout << funcPointer(30, 40) << endl;

    
    
    executeFunc(addition,40, 50);

}
*/


/* 
                  📝 Day 7 Task
1️- Dynamically allocate memory for an integer and delete it.
2️- Create a dynamic array, store values, print them, and free memory.
3️- Use a unique_ptr to manage memory automatically.
4️- Use a shared_ptr and check its use_count().

*/
int main() {
    // dynamically allocating memory to an int
    int* num = new int(30);
    delete num; // deleting / releasing the memory

    // creating a dynamic array
    int size{ 4 };
    int* arr = new int[size];

    arr[0] = 30;
    arr[1] = 40;
    arr[2] = 45;
    arr[3] = 50;

    // iterating through the array
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;

    // using unique_ptr
    unique_ptr<int> num_ptr = make_unique<int>(30);
    cout << "Unique pointer: " << *num_ptr << endl;

    // using shared_ptr
    shared_ptr<int> sptr1 = make_shared<int>(444);
    shared_ptr<int>sptr2 = sptr1;

    cout << "Shared Pointer: " << *sptr2 << endl;
    cout << "Reference: " << sptr1.use_count() << endl;
}