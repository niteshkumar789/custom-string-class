# MyString - Custom C++ String Class

This is a simple implementation of a custom C++ string class named `MyString`, designed to mimic the functionality of `std::string`. It demonstrates dynamic memory handling, operator overloading, and clean object-oriented design in C++.

## Files

- `MyString.h`: Header file containing the class declaration.
- `MyString.cpp`: Source file with definitions for all `MyString` class member functions.

## Features

- Operator overloading: `+`, `=`, `+=`, `[]`, `<<`, etc.
- Deep copy constructor and assignment operator
- Dynamic memory allocation
- Basic string manipulation utilities

## TO run, use below command
### Step 1: Compile source files into object files
`g++ -c MyString.cpp`     # Produces MyString.o
`g++ -c main.cpp`       # Produces main.o

### Step 2: Link the object files
`g++ MyString.o main.o -o main`

### Step 3: Run the executable
`./main`

## Usage

```cpp
#include "MyString.h"

int main() {
    MyString s1("isaacnewton");
    MyString s2  = s1;
    s2 += " is great";

    cout << s2 << endl;
}

🤝 Contributing
Contributions, issues, and feature requests are welcome! Feel free to open a PR or raise an issue.

📜 License
This project is licensed under the MIT License.

✨ Author
Nitesh Kumar 3rd Year B.Tech (CSE)