#include <iostream>
using namespace std;
struct node
{
    int n;
    struct node *next;
};
struct node *create_head(struct node *head)
{
    head = NULL;
    return (head);
}
struct node *create_node(int value)
{
    struct node *temp = new node;
    temp->n = value;
    return (temp);
}
struct node *insert_node(struct node *head, int n)
{

    struct node *temp = create_node(n);
    if (head == NULL)
    {
        head = temp;
        return (head);
    }
}
int main()
{
    struct node *head = NULL;

    return (0);
}