class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(nullptr)
    {
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List() : head(nullptr), tail(nullptr)
    {
    }
    void push_front(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
};