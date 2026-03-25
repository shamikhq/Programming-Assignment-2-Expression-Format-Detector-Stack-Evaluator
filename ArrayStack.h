#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class ArrayStack {

private:
    std::vector<T> data;

public:
    void push(const T& value) {
        data.push_back(value);
    }

    void pop() {
        if (empty()) {
            throw std::out_of_range("Stack is empty");
        }
        data.pop_back();
    }

    T top() const {
        if (empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return data.back();

    }

    bool empty() const {
        if (size() == 0) {
            return true;
        }
        return false;
    }

    int size() const {
        return data.size();
    }


};

// int test() {
//     ArrayStack<int> stack;
//     stack.push(1);
//     stack.push(2);
//     stack.push(3);
//     cout << "top: " << stack.top() << endl;
//     stack.pop();
//     cout << "top: " << stack.top() << endl;
//     return 0;
// }
#endif
