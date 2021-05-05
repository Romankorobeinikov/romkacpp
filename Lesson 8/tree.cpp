#include <iostream>
using namespace std;

struct Knot
{
    int data;
    struct Knot *left;
    struct Knot *right;
};

Knot* newknot(int x)
{
    Knot *knot = new Knot;
    knot->data = x;
    knot->left = NULL;
    knot->right = NULL;
    return(knot);
}

void treeprint(Knot *knot)
{
    if (knot!=NULL)
    {
    cout << knot->data;
    treeprint(knot->left);
    treeprint(knot->right);
    }
}

Knot* addknot(int x, Knot *knot) {
    if (knot == NULL)
    {
        knot = newknot(x);
    } else  if (x < knot->data)
    {
    knot->left = addknot(x,knot->left);
    }
    else
    {
    knot->right = addknot(x,knot->right);
    }
    return(knot);
}

int main()
{
    Knot* tree1 = newknot(5);
    addknot(2, tree1);
    addknot(4, tree1);
    addknot(3, tree1);
    addknot(6, tree1);
    addknot(7, tree1);
    addknot(9, tree1);
    addknot(1, tree1);
    addknot(8, tree1);
    addknot(10, tree1);
    treeprint(tree1);
    return 0;
}
