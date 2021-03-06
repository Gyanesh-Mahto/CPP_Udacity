/*
LAB 3
Objectives 3
Binary tree's are data structures that have a hierarchical form and represent trees
whose elements have a maximum number of two children. These children are called the
left and the right child. The binary tree root represents the top node.
A node that has at least one child is considered a parent of its child.
A leaf is a node that has no children.

Steps 3
    Create class called binary_tree
    Create structure called node
    Declare 4 attributes in structure: integer data, two pointers to the same type of structure,called left and right
    Declare main pointer to structure node type called root
    This pointer is attribute of class binary_tree
    This pointer is going to containt all data related to binary tree trought connectin nodes
    Declare two methods called add and search
    Add needs to have logic which will be dependant from data attribute and check for its place of
        creation on left or right side
    Search needs to be implemented as recursive function
    Check for nullptr in search and call it again on fulfilled condition(< or >)
    First function doesn't have return type
    Second function indicates its success by sending boolean values
    Both class methods are wrappers for two private class method which are going to be implemented recursively for easier usage.
    Private functions are using another input parameter -> node pointer
    This is designed like this for passage of pointers ( left, right)
    Declare two constructors and destructors
    One of the constructor - destructor pair is going to be part of node structure
    Second pair is going to be of class
    Constructors in structure is used to declare new node (Pointers are NULL, data is set)
    Constructor in class is esentially wrapper for stucture constructor
    Structure destructor deletes left and right pointers
    Class destructor deletes root pointer
    Test everything in main
*/
#include<iostream>
using namespace std;

class Binary_Tree
{
    struct Node
    {
        int data;
        Node* left;
        Node* right;

        Node(int d, Node* l=nullptr, Node* r=nullptr)
        {
            data=d;
            left=l;
            right=r;
        }

        ~Node()
        {
            if(left!=nullptr)
            delete left;
            else if(right!=nullptr)
            delete right;
        }
    } *root;
    
    void add(int data, Node* root);
    bool search(int searchdata, Node* root);
    
    public:

    Binary_Tree(int rootdata)
    {
        root=new Node(rootdata, nullptr, nullptr);
    }
    
    ~Binary_Tree()
    {
        delete root;
    }

    void addData(int inputData)
    {
        add(inputData, root);
    }

    bool searchData(int inputdata)
    {
        search(inputdata, root);
    }

    int getroot()
    {
        return root->data;
    }
};

void Binary_Tree::add(int addData, Node* rootnode) //Add needs to have logic which will be dependant from data attribute and check for its place of creation on left or right side
{
    if(addData>rootnode->data)
    {
        if(rootnode->right==nullptr)
        {
            rootnode->right=new Node(addData, nullptr, nullptr);
        }
        else
        {
            Binary_Tree::add(addData, rootnode->right);
        }
    }
    else
    {
        if(rootnode->left==nullptr)
        {
            rootnode->left=new Node(addData, nullptr, nullptr);
        }
        else
        {
            Binary_Tree::add(addData, rootnode->left);
        }
    }
    
}

bool Binary_Tree::search(int searchdata, Node* rootnode)    //Search needs to be implemented as recursive function
{
    if(rootnode!=nullptr && rootnode->left==nullptr && rootnode->right==nullptr)
    {
        if(rootnode->data==searchdata)
        return true;
        else
        return false;
    }

    if(rootnode->data==searchdata)
    return true;
    else
    {
        if(searchdata > rootnode->data && rootnode->right!=nullptr)
        {
            search(searchdata, rootnode->right);
        }
        else if(searchdata < rootnode->data && rootnode->left!=nullptr)
        {
            search(searchdata, rootnode->left);
        }
        
    }
    
}

int main()
{
    Binary_Tree tree(2);    //rootNode
    tree.addData(4);
    tree.addData(6);
    tree.addData(8);
    cout<<tree.getroot()<<endl; //rootNode
    cout<<tree.searchData(8)<<endl; //1-->True
    cout<<tree.searchData(18)<<endl;    //0-->False
}
/*
O/P:
----
2
1
0
*/
