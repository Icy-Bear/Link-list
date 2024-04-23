#include<iostream>


class Node
{
public:
    int val;
    Node* next;

    Node(int val = 0 , Node* next = NULL) : val(val) , next(next) {}

    void print(){
        Node* current = this;
        while (current != nullptr){
            std::cout << '(' << current->val << ')' << "--> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }

    bool search(Node* target){
        Node* current = this;

        while (current != nullptr){
            if (current == target) {return true;}
            current = current->next;
        }

        return false;
    }

	    

};

int main()
{
    Node a(1);
    Node b = Node(2);
    Node c = Node(3);
    Node d = Node(4);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    Node temp;


    a.print();

    std::cout << (a.search(&temp) ? "YES" : "NO" ) << std::endl;

    return 0;
}
