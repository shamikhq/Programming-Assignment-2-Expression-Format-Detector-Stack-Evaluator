#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>

#include "ArrayStack.h"

using namespace std;

// Token

struct Token {
    string value;   // number, operator, or parenthesis
};

// Tokenizer


vector<Token> tokenize(const string& line) {
    vector<Token> tokens;
    for (int i = 0; i < line.length(); i++) {
        char temp = line[i];
        if (isspace(temp) || isalpha(temp)) {
            i++;
        }
        else {
            tokens.push_back(Token{string(1, temp)});
        }

    }
    return tokens;
}

// Helpers

bool isOperator(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int precedence(const string& op) {
    // TODO
    return 0;
}

// Detection

bool isValidPostfix(const vector<Token>& tokens) {
    int operators = 0;
    int nums = 0;
    if (tokens.size() == 1) {
        return !(isOperator(tokens[0].value));
    }
    for (int i = 0; i < tokens.size(); i++) {
        if (isOperator(tokens[i].value)) {
            operators++;
        }
        else if (!isalpha(tokens[i].value[0])) {
            nums++;
        }
    }
    if (operators == nums-1 && isOperator(tokens[tokens.size()-1].value)) {
        return true;
    }
    return false;
}

bool isValidInfix(const vector<Token>& tokens) {
    // TODO
    return false;
}

// Conversion

vector<Token> infixToPostfix(const vector<Token>& tokens) {
    vector<Token> output;
    // TODO
    return output;
}

// Evaluation

double evalPostfix(const vector<Token>& tokens) {
    ArrayStack<double> stack;
    for (int i = 0; i < tokens.size(); i++) {
        if (isOperator(tokens[i].value)) {
            double right = stack.top();
            stack.pop();
            double left = stack.top();
            stack.pop();
            cout<< "before";
            stack.print();
            if (tokens[i].value == "+") {
                double temp = left + right;
                stack.push(temp);
                stack.print();
            }
            else if (tokens[i].value == "-") {
                double temp = left - right;
                stack.push(temp);
                stack.print();
            }
            else if (tokens[i].value == "*") {
                double temp = left * right;
                stack.push(temp);
                stack.print();
            }
            else if (tokens[i].value == "/") {
                double temp = left / right;
                stack.push(temp);
                stack.print();
            }
        }
        else {
            stack.push(stod(tokens[i].value));
        }
    }
    return stack.top();
}

// Main

 int main() {
     string line;
     getline(cin, line);

     //test tokenize
     vector<Token> tokens = tokenize(line);
     // for (int i = 0; i < tokens.size(); i++) {
     //     cout << tokens[i].value << endl;
     // }

     if (isValidPostfix(tokens)) {
         cout << "FORMAT: POSTFIX\n";
         cout << "RESULT: " << evalPostfix(tokens) << "\n";
     }
     // else if (isValidInfix(tokens)) {
     //     vector<Token> postfix = infixToPostfix(tokens);
     //     cout << "FORMAT: INFIX\n";
     //     cout << "POSTFIX: ";
     //     for (const auto& t : postfix) {
     //         cout << t.value << " ";
     //     }
     //     cout << "\n";
     //     cout << "RESULT: " << evalPostfix(postfix) << "\n";
     // }
     // else {
     //     cout << "FORMAT: NEITHER\n";
     //     cout << "ERROR: invalid expression\n";
     // }

     return 0;
}
