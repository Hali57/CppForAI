# C++ Learning Roadmap - From Novice to Expert 🚀

Welcome to your structured, university-style **C++ Learning Roadmap**! This roadmap will guide you from a **beginner** to an **expert**, focusing on AI applications, performance optimization, and software development.

## **📌 Learning Plan Overview**
This roadmap is divided into **daily tasks** to build consistency and mastery. Each task includes:
- **Concept explanation** ✍️
- **Hands-on coding** 💻
- **Real-world applications** 🌍

---

## **Day 1: Introduction to C++ & Setting Up the Environment**
### **🎯 Goals:**
- Understand the role of C++ in AI & performance-heavy applications
- Set up your development environment
- Write your first C++ program

### **📖 Explanation:**
C++ is widely used in AI, gaming, and high-performance computing due to its **speed** and **memory control**. Many AI frameworks like TensorFlow, PyTorch, and OpenCV have C++ backends for efficiency.

### **🛠 Setup:**
1. Install **Visual Studio** (✅ Done!)
2. Create a new **C++ Console Application**
3. Initialize a **GitHub repository** (✅ Done! - [CppForAI](https://github.com/Hali57/CppForAI))

### **📝 Task:**
Write a simple C++ program that prints:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, AI World!" << endl;
    return 0;
}
```
✅ **Completed!** 🎉

---

## **Day 2: Understanding C++ Basics**
### **🎯 Goals:**
- Learn about **variables, data types, and I/O operations**
- Practice **basic input/output**

### **📖 Explanation:**
C++ has **strongly typed variables**, meaning you must define their data type before use. 

#### **Common Data Types:**
| Data Type | Description | Example |
|-----------|-------------|---------|
| `int` | Integer values | `int x = 10;` |
| `float` | Decimal numbers | `float y = 3.14;` |
| `char` | Single character | `char letter = 'A';` |
| `bool` | True/False | `bool isAI = true;` |
| `string` | Text (C++11 and above) | `string name = "Halifax";` |

### **📝 Task:**
Write a C++ program that asks the user for their **name** and **age**, then prints a greeting message.
```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
```
✅ **To Do:** Implement and commit this to your GitHub repo.

---

## **Coming Up Next:**
- **Day 3:** Control Structures (if/else, loops, switch-case)✅

  
### 🔹 **Day 4:** Functions & Scope
## 📝 Day 4 Task:✅
- 1️⃣ Create a function that multiplies two numbers and returns the result. ✅
- 2️⃣ Overload a function that prints an integer, double, and string. ✅
- 3️⃣ Write a function that modifies a variable using pass by reference. ✅
  
.

### 🔹 **Day 5:** Pointers & Memory Management (important for AI!)

## 📝 **Day 5 Task:** ✅
- 1️⃣ Create a pointer that stores the memory address of an integer. ✅
- 2️⃣ Modify a variable’s value through a pointer. ✅
- 3️⃣ Use a pointer to traverse and print an array’s elements. ✅
- 4️⃣ Allocate and free dynamic memory for an integer and an array. ✅



### 🔹 **Day 6:** References & Function Pointers
## 📝 **Day 6 Task:** ✅
- 1️⃣ Create a reference and modify a variable using it. ✅
- 2️⃣ Pass a reference to a function to modify a variable. ✅
- 3️⃣ Declare a function pointer and call a function using it. ✅
- 4️⃣ Pass a function pointer as an argument to another function. ✅

  

### 🔹**Day 7:**  Dynamic Memory Allocation & Smart Pointers
## 📝 **Day 7 Task:** ✅
- 1️⃣ Dynamically allocate memory for an integer and delete it. ✅
- 2️⃣ Create a dynamic array, store values, print them, and free memory. ✅
- 3️⃣ Use a unique_ptr to manage memory automatically. ✅
- 4️⃣ Use a shared_ptr and check its use_count(). ✅

### 🔹**Day 8:** Object-Oriented Programming - Classes & Objects
## 📝 **Day 8 Task:** ✅
- 1️⃣ Create a Person class with attributes name and age, and a method to display them. ✅
- 2️⃣ Implement a constructor that initializes the attributes. ✅
- 3️⃣ Use encapsulation by making age private & provide getter/setter methods. ✅
- 4️⃣ Create a Student class that inherits from Person, adding grade. ✅
- 5️⃣ Override the display method to also show grade. ✅

### 🔹**Day 9:** Dynamic Memory Allocation & Destructors ✅
## 🎯**Day 9 Task:** ✅
- Write a program where:
- 1️⃣ You create a BankAccount class with a constructor and destructor. ✅
- 2️⃣ It should print messages when an account is created and closed. ✅
- 3️⃣ Dynamically create and delete a BankAccount object in main(). ✅

### 🔹**Day 10:** Operator Overloading.
## 🎯 **Day 10 Task:** ✅
- ✅ Overload + and - for a class.
- ✅ Overload == for comparison.
- ✅ Overload << for cout output.
- ✅ Explore other operators like *, /, or !=.

### 🔹**Day 11:** Function Templates & Operator Overloading
## 📝 **Day 11 Task:**
- 1️⃣ Create a function template that finds the maximum of two values.
- 2️⃣ Implement operator overloading for:
    - ++ (prefix and postfix increment)
    - -- (prefix and postfix decrement)
      
- 3️⃣ Experiment with overloading multiple operators in a custom class.

### 🔹**Day 12:** Function & Class Templates
``` 
#include <iostream>
using namespace std;

// Function template for finding the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 10 and 20: " << findMax(10, 20) << endl;
    cout << "Max of 5.5 and 2.3: " << findMax(5.5, 2.3) << endl;
    cout << "Max of 'A' and 'Z': " << findMax('A', 'Z') << endl;
    return 0;
}

```
## 🎯 **Day 12 Tasks:**
- ✅ Task 1:
  
    - Modify the findMax() function to work with three values instead of two.
- ✅ Task 2:

    - Create a generic Stack class using a template that supports push(), pop(), and peek().


### 🔹**Day 13:** Mastering Vectors in C++
## 🎯 **Day 13 Tasks:**
🎯 Challenge: Build a To-Do List Using Vectors
- Task:
    - ✅ Allow users to add, view, and remove tasks dynamically.

    - ✅ Modify the program so that tasks can be marked as completed instead of being deleted. 💪


### 🔹**Day 14:** Queue Data Structure
## 🎯 **Day 14 Tasks:**✅
- 🎯 Task: Implement Your Own Queue Class✅
    - Instructions:
        - Implement a custom Queue class using an array or std::vector.
        - Implement the following functions:
            - enqueue(int x): Adds an element to the back.
            - dequeue(): Removes an element from the front.
            - front(): Returns the front element.
            - isEmpty(): Checks if the queue is empty.

### 🔹**Day 15:** Introduction to Set & Maps
## **Day 15 Tasks:** 🎯
- ✅ Create a set of words and allow the user to insert new words.
- ✅ Create a map of students and their scores, allowing users to add new entries.


### 🔹**Day 16:** Priority Queues
## **Day 16 Tasks:** 🎯✅
- Implement a priority queue that stores tasks with different priority levels.
- Modify the program so higher priority numbers are executed first.

### 🔹**Day 17:** Maps(std::map )
## **Day 17 Tasks:** 🎯✅
- Task for Today;✅
    - ✔ Write a program using std::map to store student names and their grades.
    - ✔ Allow the user to input student names and grades dynamically.
    - ✔ Search for a specific student's grade by name.

### 🔹**Day 18:** Maps(std::unorderd_map)
- Key Differences Between std::map and std::unordered_map

| Feature	| std::map	| std::unordered_map |
|-----------|-----------|--------------------|
| Ordering	| Sorted by key	| No specific order|
|Lookup Time| `O(log n)`	| `O(1)` on average| 
|Internal Structure|	Red-Black Tree|	Hash Table |
|Use Case| When ordering is needed |	When performance is more important |

## **Day 18 Tasks:** 🎯✅
- 🔥 Challenge:
    - Try implementing a program that counts the occurrences of words in a sentence using an unordered_map. 🚀
 
### 🔹**Day 19:** Recursion
```

// Recursive Fibonacci Function
int fibonacci(int n) {
    if (n == 0) return 0;  // Base Case 1
    if (n == 1) return 1;  // Base Case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive Call

   
}
int main(){
    cout<<fibonacci(5); // 5
}
```

## **Day 19 Tasks:** 🎯✅
        - 🧩 Write a recursive function in C++ to reverse a string.
        - 🧩 Write a recursive function to calculate the sum of digits of a given integer n. e.g. sum(1234) outputs 10;
        - 🧩 Challenge: Check if a String is a Palindrome.




### 🔹**Day 20:** Hash Maps( unordered_map)
## **Day 20 Task:** 🎯✅
        - 🧩🔥 Challenge: Write a program that counts the frequency of words in a sentence using unordered_map.


            
### 🔹**DAY 21** : BITWISE OPERATIONS IN C++
## **Day 21 Task:** 🎯✅
         - Write a function that counts the number of 1s in the binary representation of a given integer using bitwise operations.
         -🔥 Bonus Challenge: Count Bits Without Using bitset!

            
### 🔹**DAY 22** : BIT MANIPULATION - Swapping two numbers without a temp variable IN C++
## **Day 22 Task:** 🎯✅

            - 🔥 Challenge:
            - Write a function that finds the only non-repeating number in an array where every other number appears twice. (Hint: XOR can be useful!)
  
📌 **Remember to push your code daily to** [GitHub](https://github.com)! 🚀
