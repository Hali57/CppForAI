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
- **Day 3:** Control Structures (if/else, loops, switch-case)
- **Day 4:** Functions & Scope
- **Day 5:** Pointers & Memory Management (important for AI!)

📌 **Remember to push your code daily to** [CppForAI](https://github.com/Hali57/CppForAI)! 🚀
