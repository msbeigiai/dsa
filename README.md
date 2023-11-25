# Data Structures and Algorithms in C++


This project is a C++ implementation of various data structures and algorithms. It includes a variety of data structures such as arrays, linked lists, stacks, queues, trees, and graphs. It also includes algorithms such as sorting, searching, and graph traversal.

## Installation

1. Clone the repository
   ```bash
   git clone https://github.com/msbeigiai/dsa.git
   ```
2. Build the project
	```bash
	cd dsa
	make
	```
3. Run the project
	```bash
	./dsa
	```
## Usage
This project provides a set of data structures and algorithms that can be used in other C++ projects. The data structures and algorithms are implemented in separate header files, so they can be easily included in other projects.

Here is an example of how to use the `LinkedList` data structure:
```c++
#include "LinkedList.h"

int main() {
    LinkedList<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.remove(2);
    list.print();
    return 0;
}
```
This code creates a linked list of integers, adds three elements to the list, removes the second element, and then prints the list.

## Contributing
If you want to contribute to this project, please read the CONTRIBUTING.md file.

## License
This project is licensed under the MIT License. See the LICENSE file for more information.


