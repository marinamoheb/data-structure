#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	LinkedList L;
	//********************************************
	CopyNode* s = new CopyNode;
	s->copyData = "1/1/2020";
	s->ava = 0;
	s->borrower = "ali";
	s->borrwoDate = "1/5/2020";
	s->nODTRB = 14;
	s->next = nullptr;
	CopyNode* w = new CopyNode;
	w->copyData = "1/1/2020";
	w->ava = 0;
	w->borrower = "ali";
	w->borrwoDate = "1/5/2020";
	w->nODTRB = 14;
	w->next = s;
	CopyNode* j = new CopyNode;
	j->copyData = "1/1/2020";
	j->ava = 0;
	j->borrower = "seif";
	j->borrwoDate = "1/5/2020";
	j->nODTRB = 14;
	j->next = w;
	Node* k = new Node;
	k->bookName = "DS";
	k->bookISBN = 12;
	k->numberOfCopies = 90;
	k->first = j;
	k->next = nullptr;
	//********************************************
	CopyNode* w1 = new CopyNode;
	w1->copyData = "1/1/2020";
	w1->ava = 0;
	w1->borrower = "ali";
	w1->borrwoDate = "1/5/2020";
	w1->nODTRB = 14;
	w1->next = nullptr;
	CopyNode* j1 = new CopyNode;
	j1->copyData = "1/1/2020";
	j1->ava = 0;
	j1->borrower = "ali";
	j1->borrwoDate = "1/5/2020";
	j1->nODTRB = 14;
	j1->next = w1;
	Node* k1 = new Node;
	k1->bookName = "AS";
	k1->bookISBN = 34;
	k1->numberOfCopies = 23;
	k1->first = j1;
	k1->next = nullptr;
	//********************************************
	CopyNode* j11 = new CopyNode;
	j11->copyData = "1/1/2020";
	j11->ava = 0;
	j11->borrower = "ali";
	j11->borrwoDate = "1/5/2020";
	j11->next = nullptr;
	Node* k11 = new Node;
	k11->bookName = "FS";
	k11->bookISBN = 34;
	k11->numberOfCopies = 3;
	k11->first = j11;
	k11->next = nullptr;
	//********************************************
	L.lInsert(k);
	L.lInsert(k1);
	L.lInsert(k11);
	L.addingBB("DS", "Mahmoud", "12/3/2000", 20);
	L.addingBB("DS","rehab","12/3/2000",20);
	L.addingBB("AS", "seif", "12/3/2000", 20);
	L.addingBR("DS", "rehab");
	L.libraryInventory(L.gethead());
	return 0;
}