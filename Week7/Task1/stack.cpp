#include <iostream>

using namespace std;

class Stack{
    public:
        Stack();
        ~Stack();

        void push(int);
        int pop();
        int peek();
        bool isEmpty();

    private:
        struct Node{
            int value;
            Node* next;

            Node(int value){
                this->value = value;
                this->next = NULL;
            }
        };

        Node* first;
};

Stack::Stack(){
    this->first = NULL;
}

Stack::~Stack(){
    while(first){
        Node* toDelete = first;
        first = first->next;
        delete toDelete;
    }
}

void Stack::push(int element){
    Node* newNode = new Node(element);
    newNode->next = first;
    first = newNode;
}

int Stack::pop(){
    Node* toDelete = first;
    int toReturn = first->value;
    first = first->next;
    delete toDelete;
    return toReturn;
}

int Stack::peek(){
    return first->value;
}

bool Stack::isEmpty(){
    return first == NULL;
}

int main(){
    Stack stack;
    int input;
    while(cin >> input){
        if(input != 0){
            stack.push(input);
        } else{
            if(!stack.isEmpty()){
                cout << stack.pop() << endl;
            } else{
                cout << "The stack is empty" << endl;
            }
        }
    }
}
