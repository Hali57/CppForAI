#include<iostream>
#include<string>
#include <type_traits>// smart pointers
#include<memory>
#include<vector>
#include <algorithm> // for std::remove
#include<queue>
#include<set>
#include<map>
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
/*

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
*/

/*
                 📝 Day 8 Task
1️ - Create a Person class with attributes name and age, and a method to display them.
2️ - Implement a constructor that initializes the attributes.
3️ - Use encapsulation by making age private & provide getter/setter methods.
4️ - Create a Student class that inherits from Person, adding grade.
5️ - Override the display method to also show grade.
*/

/*

class Person {
private:
    int age;
public:
    string name;
    

    // creating constructor
    Person(string a, int b) {
        name = a;
        age = b;
    }
    // getter function
    int get_age() {
        return age;
    }
    // setter function
    void set_age(int current_age) {
        age = current_age;
    }
    virtual void greeting() {
        cout << "Hello " << name << " You're " << age <<" years old" << endl;

    }

};
class Student : public Person{
public:
    string grade;

   
    Student(string a,int b, string current_grade) :Person(a, b), grade(current_grade){
        grade = current_grade;
    }
    void greeting() override{
        cout << "Hello " << name << " You're " << get_age() << " and you are in " << grade;
    }

};
    


int main() {
    Person person = Person("Hal", 27);
    person.greeting();

    person.set_age(30);

    person.greeting(); 

    // using polymorphism
    Person* student = new Student("Paul", 13, "Grade 7");
    student->greeting();

}
*/
/*
                     🎯 Hands-On Challenge
Write a program where:
1️ - You create a BankAccount class with a constructor and destructor.
2️ - It should print messages when an account is created and closed.
3️ - Dynamically create and delete a BankAccount object in main().

*/

/*
class BankAccount {
public:
    string dateCreated{ "11/12/2025" };
    BankAccount() {
        cout << "Bank Account created on " << dateCreated<<endl;
    }
    virtual ~BankAccount() {
        cout << "Bank Account Closed" << endl;
    }
};

class JointAccount : public BankAccount {
private:
    double balance{};
public:
    JointAccount(int deposit) {
        balance += deposit;
        cout << "JointAccount Created and the money is successfully deposited" << endl;
    }
    ~JointAccount() {
        cout << "JointAccount Successfully Closed!" << endl;
    }
    double getBalance() {
        return balance;
    }
    void setBalance(double amount) {
        balance += amount;
    }
};

int main() {
    BankAccount* personalAccount = new JointAccount(20000.00);
    personalAccount;
    // Accessing a method unique to Child (requires casting)
    JointAccount* jointPtr = dynamic_cast<JointAccount*>(personalAccount);
    if (jointPtr) {
        jointPtr->setBalance(50000.00);
        cout << "Balance: " << jointPtr->getBalance() << endl;
    }
    
    delete personalAccount;
}
*/

/*

     🎯 Day 9 Tasks
✅ Overload + and - for a class.
✅ Overload == for comparison.
✅ Overload << for cout output.
✅ Explore other operators like *, /, or !=.

*/
/*
class Point {
public:
    int a, b;
    Point(int x, int y): a(x), b(y){}

    Point operator+(const Point& other) {
        return Point(a + other.a, b + other.b); // overloading the + operator
    }

    
};

class Point1 {
public:
    int c, d;
    Point1(int w, int z) : c(w), d(z){}

    Point1 operator-(const Point1& other) {
        return Point1(c - other.c, d - other.d);
    }
};

class Point3 {
public:
    int v1, v2;
    Point3(int w1, int w2) : v1(w1) , v2(w2){}

    friend ostream& operator<<(ostream& os, const Point3& other) {
        os << "( " << other.v1 << " , " << other.v2 << " )" << endl;
        return os;
    }
};

class Point4 {
public:
    int value1, value2;
    Point4(int val1, int val2) : value1(val1), value2(val2) {}

    Point4 operator/(const Point4& other) {
        return Point4(value1 / other.value1, value2 / other.value2); // overloading the / operator

    }
       
    


};

int main() {
    Point p1(2, 3), p2(1, 2);
    Point1 p4(4, 6), p5(3, 5);
    Point3 p7(11, 34);
    Point4 p8(10, 20),  p9(2, 10);

    Point p3 = p1 + p2;
    Point1 p6 = p4 - p5;
    Point4 p10 = p8 / p9;

    cout << "Overloading the + operator...." << endl;
    cout <<"( " << p3.a << " , " << p3.b << " )" << endl;
    
    cout << "Overloading the - operator...." << endl;
    cout << "( " << p6.c << " , " << p6.d <<" )" << endl;

    cout << "Overloading the << operator..." << endl;
    cout << p7 << endl;

    cout << "Overloading the / operator...." << endl;
    cout << "( " << p10.value1 << " , " << p10.value2 << " )" << endl;
}
*/

/*
                   📝 Tasks for Day 11
1️ - Create a function template that finds the maximum of two values.
2️ - Implement operator overloading for:

         ++ (prefix and postfix increment)
         -- (prefix and postfix decrement)
3️ - Experiment with overloading multiple operators in a custom class.

*/

/*
// creating a template function
template<typename T>
void findMax(T& a, T& b) {
    if (a > b)
        cout << a << " is bigger than " << b << endl;
    else if (b > a)
        cout << b << " is bigger than " << a << endl;
    else
        cout << a << ' & ' << b << " are equal" << endl;
}

class Temperature {
public:
    int number;

    Temperature(int num) : number(num){}

    // postfix ++
    Temperature& operator++(int){
        Temperature temp = *this; // saving the current state
        number++;
        return temp; // returning initial value
    }
    // prefix ++
    Temperature& operator++() {
        ++number;
        return *this; // returning updated value
    }
    // postfix --
    Temperature& operator--(int) {
        Temperature val = *this;// saving current state
        number--;
        return val;
    }

   
    // prefix --
    Temperature& operator--() {
        --number;
        return *this; // returning updated value
    }
    void show() {
        cout << "Counter: " << number << endl;
    }
};
class CustomOverloader {
public:
    int x;

    CustomOverloader(int a) : x(a) {}
    CustomOverloader operator+(const CustomOverloader& other) {
        return CustomOverloader(x + other.x);
    }

    CustomOverloader operator-(const CustomOverloader& other) {
        return CustomOverloader(x - other.x);
    }

    CustomOverloader operator/(const CustomOverloader& other) {
        return CustomOverloader(x / other.x);
    }

    CustomOverloader operator%(const CustomOverloader& other) {
        return CustomOverloader(x % other.x);
    }

    bool operator==(const CustomOverloader& other) {
        return (x == other.x);
    }
    void show() {
        cout << "Value : " << x << endl;
    }
};
int main() {
    double a{ 3.5 };
    double b{ 7.5 };
    int x{ 40 };
    int y{ 30 };

    findMax(x, y);

    Temperature p(50);
    cout << "Before prefix (++p): " << endl;
    p.show();

    ++p;
    cout << "After prefix (++p): " << endl;
    p.show();

    Temperature p2 = p++;
    cout << "After postfix (p++): " << endl;
    p.show();
    cout << "Returned value: " << endl;
    p2.show();

    cout << "Before prefix (--p): " << endl;
    p.show();

    --p;
    cout << "After prefix (--p): " << endl;
    p.show();
    
    CustomOverloader value(20), value2(10);
    CustomOverloader value3 = (value / value2);

    value3.show();
}

*/

/*
                    DAY 12  🎯 Your Tasks
✅ Task 1:

Modify the findMax() function to work with three values instead of two.
✅ Task 2:

Create a generic Stack class using a template that supports push(), pop(), and peek().

*/
/*
template <typename T>
void findMax(T a, T b, T c) {
    if (a > b && a > c)
        cout << " Max Value: " << a << endl;
    else if (b > a && b > c) 
        cout << " Max Value: " << b << endl;
    else if (c > a && c > b) 
        cout << " Max Value: " << c << endl;
    else 
        cout << " The values are equal "  << endl;
    
    
    
}
template <typename T>
class Stack { // stack is a form of LIFO (Last In , First Out)
private:
    static const int MAX{ 100 };
    T arr[MAX]; // an array of size 100
    int top; // top of the stack
public:
    Stack(): top(-1){} // Constructor initializes top to - 1

     void push(T value) {
        if (top >= MAX - 1) {
            cout << "Stack overflow!!" << endl;
            return;
        }
        arr[++top] = value;
        cout << "Value pushed to stack!" << endl;
    }

    T pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return T(); // Return default value of T
        }
        return arr[top--]; // Return and remove the top element
    }

    T peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return T();
        }
        return arr[top]; // Return the top element without removing it
    }
    bool isEmpty() {
        return (top < 0);
    }
        
    

};
int main() {
    int a{ 20 }, b{ 30 }, c(10);
    double x{ 3.5 }, y{ 44.9 }, z{ 5.0 };
    findMax(x, y,z);

    Stack<int> myStack;

    myStack.isEmpty();
    myStack.push(50);
    myStack.push(100);
    cout << "Top element: " << myStack.peek() << endl;

    cout << myStack.pop() << " popped from stack." << endl;
    cout << "Top element: " << myStack.peek() << endl;
}

*/

/*
                Day 13
🎯 Challenge: Build a To-Do List Using Vectors
Task:
✅ Allow users to add, view, and remove tasks dynamically.

✅ Modify the program so that tasks can be marked as completed instead of being deleted. 💪

*/

/*

class ToDo {

private:
    vector<string> list;

public:
    ToDo(string todo) {
        list.push_back(todo);
        cout << "Task added to your todo list successfully: " << endl;
    }
    // add to todo list
    void AddToList( string task) {
        list.push_back(task);
        cout << "Task added to your todo list successfully: " << endl;

    }
    // remove from todo list
    void removeTask(string delTask) {
        for (string val : list) {
            if (val == delTask) {
                list.erase(remove(list.begin(), list.end(), delTask));
                cout << "Task successfully removed from todo list" << endl;
            }
        }
    }
    // access todo list
    void viewList() {
        cout << "Here are your Available Tasks: " << endl;
        for (string tsk : list) {
            cout << tsk << endl;
        }
    }

    void markComplete(string complete) {
        for (string& td : list) {
            if (td == complete) {
              td+=" (Complete)";
              
            }
        }
    }
};

int main() {
    ToDo myTodoList("Study C++");
    myTodoList.AddToList("Study Machine Learning with TensorFlow");
    cout << endl;
    myTodoList.viewList();
    myTodoList.AddToList("Study Photography");
    myTodoList.AddToList("Sleep");
    cout << endl;
    myTodoList.viewList();
    myTodoList.removeTask("Sleep");
    myTodoList.markComplete("Study C++");
    cout << endl;
    myTodoList.viewList();


}
*/

/*
                    Day 14
          Task: Implement Your Own Queue Class
Instructions:
Implement a custom Queue class using an array or std::vector.
Implement the following functions:
enqueue(int x): Adds an element to the back.
dequeue(): Removes an element from the front.
front(): Returns the front element.
isEmpty(): Checks if the queue is empty.
*/

/*

class Queue {
private:
    queue<int> que;
public:
    Queue() {
        cout << "Queue Data Structure Initalized! Add values now!" << endl;

    }

    void enqueue(int num) {
        que.push(num);
        cout << "Number added to queue" << endl;
    }

    void dequeue() {
        que.pop(); // removing the front number
        cout << "First element on the queue removed" << endl;
    }

    int  frontEl() {
        return que.front(); // returns the first element
    }

    void show() {
        cout << "Here are the values on the queue" << endl;
        cout << endl;
        queue<int> tempQue = que;
        while (!tempQue.empty()) {
            cout << tempQue.front()<< endl;
            tempQue.pop(); // deleating value from a que
         }
    }

    void isEmpty() {
        if (que.empty()) {
            cout << "Queue is empty" << endl;
        }
        else{ cout << "Queue is not empty" << endl; }
       
    }
};

int main() {
    Queue myQueue = Queue();
    myQueue.isEmpty();
    myQueue.enqueue(40);
    myQueue.enqueue(50);
    myQueue.enqueue(70);
    myQueue.enqueue(100);
    myQueue.enqueue(120);

    myQueue.dequeue();
    cout << endl;
    myQueue.frontEl();
    myQueue.show();
    myQueue.dequeue();
    cout << endl;
    myQueue.show();

    
}
*/

/*
                🎯 Day 15 Tasks:
    Your Task for Today
        ✅ Create a set of words and allow the user to insert new words.
        ✅ Create a map of students and their scores, allowing users to add new entries.
*/
/*

int main() {
    // create a set
    set<int> num{ 40, 50, 90, 100, 120 };

    // add values to a set
    num.insert(10);
    // finding a value
    cout << "Checking for a value using .find()" << endl;

    auto it =  num.find(50);

    if (it != num.end()) {// if a value is not found .find() returns set.end()
        cout << "Value Found!" << endl;
    }
    else {
        cout << "Value does not exist" << endl;
    }
    num.erase(120);// remove a value

    // iterate over a set
    cout << "Values in the set: " << endl;

    for (auto val : num) {
        cout << val << " ";
    }
    

    // Maps 
    map<string, int> grades;
    // adding values
    grades["Paul"] = 80;
    grades["Hali"] = 90;
    grades["Khali"] = 95;
    grades["Yas"] = 90;
    
    cout << endl;
    // iterate over the map
    cout << "Values in the map: " << endl;
    for (auto pair : grades) {
        cout << pair.first << " : " << pair.second << endl;
    }
}
*/

/*
                      Day 16 ✅ Today's Challenge
1️- Implement a priority queue that stores tasks with different priority levels.
2️- Modify the program so higher priority numbers are executed first.


*/

/*

struct Task {
    // this is a custom class that impliments a min-Heap priority_queue i.e it returns the lowest value first
    int id;
    string description;

    bool operator<(const Task& other)const {
        return id > other.id;
    }
};

int main() {
    priority_queue<Task> task;

    task.push({ 2 , "Learn C++" });
    task.push({ 10 , "Learn python" });
    task.push({ 20 , "Learn Photography" });
    task.push({ 1 , "Explore your passions" });

    cout<<task.top().description << endl;

    cout << endl;
    // implimenting a min heap priority queue
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(50);
    minHeap.push(100);
    minHeap.push(170);
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(90);


    cout << "Element at the top: "<< minHeap.top() << endl;
    minHeap.pop();
    cout << " New element at the top: " << minHeap.top() << endl;
    return 0;
}

*/

/* 
        Day 17: Task for Today 🎯
✔ Write a program using std::map to store student names and their grades.
✔ Allow the user to input student names and grades dynamically.
✔ Search for a specific student's grade by name.
*/
class Grades {
private:
    map<string, int> grade;
public:
    Grades(){
        cout << "You can now  add student grades!!" << endl;
    }

    void addGrade(string name, int points) {
        grade[name] = points;
    }
    void findGrade(string studentName) { // ensure that the student is in the map
        if (grade.find(studentName) != grade.end()) {
            cout << studentName << " gunnered " << grade[studentName] << " points." << endl;
        }
        else {
            cout << studentName << " is not on the list" << endl;
        }
        
    }
    void showResults() {
        for (auto& g : grade) {
            cout << g.first << " -> " << g.second << endl;
        }
    }
};
int main() {
    Grades grade = Grades();
    grade.addGrade("Simon", 70);
    grade.addGrade("Sasha", 60);
    grade.addGrade("Ali", 80);
    grade.addGrade("Tabby", 90);
    grade.addGrade("Sisco", 85);


    grade.findGrade("Mercy");
    grade.showResults();
}

