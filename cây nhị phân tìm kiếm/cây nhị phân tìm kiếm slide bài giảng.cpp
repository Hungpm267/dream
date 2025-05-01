/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node {
	int val;
	node* left;
	node* right;
};
typedef node* Tree;

node* createNode(int x) {
	node *p=new node;
	p->val =x;
	p->left=nullptr;
	p->right=nullptr;
	return p;
}

void createTree(Tree &t) {
	t = nullptr;
}
int insertNode(Tree &t, int x) {
	if(t==nullptr) {
		t=createNode(x);
		return 1;
	}
	if(t->val>x) return insertNode(t->left, x);
	else if(t->val<x) return insertNode(t->right, x);
	return 0;
}


node* searchNode(Tree p, int x){
    while(p!=nullptr){
        if(p->val == x) return p;
        else if(p->val>x) p = p->left;
        else if(p->val < x) p = p->right;
    }
    return nullptr;
}

void LNR(Tree t) {
	if(t!=nullptr) {
		LNR(t->left);
		cout<<t->val<<" ";
		LNR(t->right);
	}
}
void NLR(Tree t) {
	if(t!=nullptr) {
		cout<<t->val<<" ";
		NLR(t->left);
		NLR(t->right);
	}
}
void LRN(Tree t) {
	if(t!=nullptr) {
		LRN(t->left);
		LRN(t->right);
		cout<<t->val<<" ";
	}
}


node* findMin(Tree t){
    if(t == nullptr) return nullptr;
    while(t->left != nullptr){
        t=t->left;
    }
    return t;
}

// HC m tC,m giC! tra; la;n nha:%t
node* findMax(Tree t){
    while(t->right !=nullptr){
        t=t->right;
    }
    return t;
}


Tree deleteNode(Tree &t, int x) {
    if (t == nullptr) return nullptr; // Không tìm thấy node

    if (x < t->val) {
        t->left = deleteNode(t->left, x); // sang bên trái
    } 
    else if (x > t->val) {
        t->right = deleteNode(t->right, x); // sang bên phải
    } 
    else {
        // 🔥 Đã tìm thấy node cần xóa
        // Trường hợp 1: Không có con hoặc chỉ có 1 con
        if (t->left == nullptr) {
            node* temp = t->right;
            delete t;
            return temp;
        } 
        else if (t->right == nullptr) {
            node* temp = t->left;
            delete t;
            return temp;
        }

        // Trường hợp 2: Có cả 2 con
        node* temp = findMin(t->right); // Tìm node nhỏ nhất bên phải
        t->val = temp->val;             // Gán giá trị node đó vào node hiện tại
        t->right = deleteNode(t->right, temp->val); // Xóa node đã thay thế
    }

    return t;
}


int main()
{
	Tree t;
	createTree(t);
	int a[]= {32,54,86,56,44,63};
	int n=sizeof(a)/sizeof(a[0]);

	for (int i = 0; i < n; i++) {
		insertNode(t, a[i]);
	}

	cout<<"LNR1: \n";
	LNR(t);

	node* result = searchNode(t, 86);
	if(result != nullptr)
		cout << "\nNode " << result->val << " found!";
	else
		cout << "\nNode not found!";
		
	node* min = findMin(t);
	cout<<"\nmin node la: "<<min->val;
	node* max = findMax(t);
	cout<<"\nmax node la: "<<max->val;


	cout<<"\nLNR: \n";
	LNR(t);


	return 0;
}