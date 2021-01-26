#include <iostream>

using namespace std;

// structs
struct humanName
{
    string name;
    string surname;
};
//class
class human
{
private:
    int yearsOld;

public:
    string name;
    human(string);
    void eat(string food)
    {
        cout << name << " eats " << food << endl;
    }
};
// this is an constructor
human::human(string n)
{
    if (n == "SciDroid")
        name = "maricon";
    else
        name = n;
}
// pointer
void pointerGame();
// linked list
struct node
{

    int data;
    node *link;
};
void insertValuesNode(nodePtr &, int);
typedef node *nodePtr;
int main()
{
    // struct
    humanName pierce;
    pierce.name = "pierce";
    pierce.surname = "franco";
    cout << pierce.name << "\n" + pierce.surname << endl;
    // class
    human carlos("muñaño");
    carlos.eat("salchicha");
    // pointer
    pointerGame();
    // linked list
    nodePtr hello;
    nodePtr tmp;
    //
    hello = new node;
    insertValuesNode(hello, 12);
    tmp = hello;

    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->link;
    }
    return 0;
}
void pointerGame()
{
    float val1 = 1;
    float *val2 = &val1;
    for (int i = 0; i <= 10; i++)
    {
        *val2 = i;
        float **val3 = &val2;
        for (float d = 0; d <= 30; d++)
        {
            *val2 = **val3 / d;
        }
        val3 = &val2;
    };
    cout << val1 << endl;
}
void insertValuesNode(nodePtr &nodeTest, int recursive)
{
    nodePtr insertNode;
    if (recursive > 0)
    {
        insertNode->data = recursive;
        insertNode->link = nodeTest;
        insertValuesNode(insertNode, recursive - 1);
    }
    nodeTest->link = insertNode;
}
