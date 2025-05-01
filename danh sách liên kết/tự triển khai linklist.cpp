/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node {
	int data;
	node *next;
};
struct linkedlist {
	node*head;
	node*tail;
};
node* createNode(int x) {
	node *p = new node;
	p->data = x;
	p->next = NULL;
	return p;
}
void createList(linkedlist &l) {
	l.head = l.tail = NULL;
}
void addHead(linkedlist &l, node *p) {
	if(l.head == NULL) {
		l.head = l.tail = p;
	}
	else {
		p->next =l.head;
		l.head=p;
	}
}
void addTail(linkedlist &l, node *p) {
	if(l.head == NULL) {
		l.head = l.tail = p;
	}
	else {
		l.tail->next=p;
		l.tail=p;
	}
}
void inserAfterQ(linkedlist &l, node*p, node *q) {
	if(q!=NULL) {
		p->next = q->next;
		q->next = p;
		if(l.tail == q) {
			l.tail = p;
		}
	}
	else {
		addHead(l, p);
	}
}
int removeHead(linkedlist &l, int &x) {
	if(l.head != NULL) {
		node *p = l.head;
		x = p->data;
		l.head = p->next;
		delete p;
		if(l.head == NULL) {
			l.tail ==NULL;
			return 1;
		}
	}
	return 0;
}
int removeTail(linkedlist &l, int &x) {
	if(l.head ==NULL) {
		return 0;
	}
	if(l.head=l.tail) {
		x = l.head ->data;
		delete l.head;
		l.head=l.tail=NULL;
		return 1;
	}
	node * p=l.head;
	while(p->next != l.tail) {
		p=p->next;
	}
	x=l.tail->data;
	l.tail = p;
	p->next = NULL;
	return 1;
}
int removeAfterQ(linkedlist &l, int &x, node *q) {
	if(q!= NULL) {
		node *p = q->next;
		if(p == NULL) return 0;
		if(l.tail == p) {
			l.tail = q;
		}
		x = p->data;
		q->next = p->next;
		delete p;
		return 1;
	}
	return 0;
}
// tim va tra ve node tai index ma minh muon tim trong dslk
node *getNodebyIndex(linkedlist l, int index) {

	node*p=l.head;
	int i =0;
	while(p!=NULL && i!= index) {
		p=p->next;
		i++;
	}
	if(i ==index && p !=NULL) {
		return p;
	}
	return NULL;
}

void printLinkedList(linkedlist l) {
	node * p=l.head;
	while(p!=NULL) {
		cout<<p->data<<" ";
		p=p->next;
	}
}

node* search(linkedlist l, int x) {
	node*p =l.head;
	while(p!=NULL&&p->data!=x) {
		p=p->next;
	}
	return p;
}

int main() {
	linkedlist l;
	createList(l);

	cout<<"nhap so luong node: ";
	int n;
	cin>>n;
	node *p;
	for (int i = 0; i < n; i++) {
		int x;
		cin>>x;
		p = createNode(x);
		addTail(l, p);
	}

	cout<<"xuat linkedlist: ";
	printLinkedList(l);

	cout<<"\nnhap so can tim: ";
	int k;
	cin>>k;
	node *o = search(l, k);
	if(o!=NULL) {
		cout<<"tim thay so k";
	}
	else cout<<"khong tim thay so k";
	
	cout<<"\nnhap index cua node muon tim trong dslk: ";
	int index; cin>>index;
	node *f= getNodebyIndex(l, index);
	if(f!=NULL){
	    cout<<"tai index = "<<index<<" co node->data = "<<f->data;
	}
	else cout<<"index lon hon ca size cua linkedlist roi.";

	return 0;
}