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
  
📌 **Remember to push your code daily to** [CppForAI](https://github.com/Hali57/CppForAI)! 🚀
