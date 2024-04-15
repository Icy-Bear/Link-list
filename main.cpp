#include<iostream>

class Node
{
public:
    int val;
    Node* next;

    Node(int val = 0 , Node* next = NULL) : val(val) , next(next) {}

    void print(Node head)
    {
        while (true)
        {
            std::cout << '(' << head.val << ')' << " --> ";
            if (head.next == NULL) 
            {
                std::cout << "NULL" << std::endl;
                break;
            } 
            head = *(head.next);
        }
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

    Node LL;

    LL.print(a);


    return 0;
}