#include<queue>
#include<string>
struct CopyNode
{
	std::string copyData;
	bool ava;
	std::string borrower;
	std::string borrwoDate;
	int nODTRB = 15;
	CopyNode* next = nullptr;
};
struct Node
{
	std::string bookName;
	int bookISBN;
	int numberOfCopies;
	CopyNode* first;
	Node* next;
};
class LinkedList
{
private:
	Node* first;
	Node* last;
public:
	LinkedList()
	{
		first = nullptr;
		last = nullptr;
	}

	void lInsert(Node* t)
	{
		Node* p = first;
		Node* q = last;
		if (p == nullptr)
		{
			p = q = t;

		}
		else
		{
			q->next = t;
			q = t;
		}
		first = p;
		last = q;
	}

	Node* search(std::string key)
	{
		Node* p = first;
		if (!p)
			return 0;
		else
		{
			while (p)
			{
				if (p->bookName == key)
				{
					return p;
				}
				else
					p = p->next;
			}
		}
		return nullptr;
	}

	CopyNode* searchcopy(CopyNode* t, std::string name)
	{
		CopyNode* p = t;
		if (!p)
			return 0;
		else
		{
			while (p)
			{
				if (p->borrower == name)
				{
					return p;
				}
				else
					p = p->next;
			}
		}
		return nullptr;
	}

	void addingBB(std::string key, std::string name, std::string bDate, int numOfDays)
	{
		if (search(key))
		{
			Node* p = search(key);
			CopyNode* q = nullptr;
			q = p->first;
			while (q)
			{
				if (q->ava == 0)
					break;
				else
					q = q->next;
			}
			q->borrower = name;
			q->borrwoDate = bDate;
			q->nODTRB = numOfDays;
			q->ava = 1;
		}
		else
		{
			return;
		}
	}

	void addingBR(std::string key, std::string name)
	{
		CopyNode* e = nullptr;
		Node* p = search(key);
		if (p)
		{
			CopyNode* w = nullptr;
			CopyNode* q = nullptr;
			e = searchcopy(p->first, name);
			if (e && e->ava==1)
			{
				if (e == p->first )
				{
					std::string name1 = e->borrower;
					std::string borrowDate = e->borrwoDate;
					std::string copyDate = e->copyData;

					q = p->first;
					p->first = p->first->next;
					w = p->first;
					delete q;

					CopyNode* tail = p->first;
					while (p->first->next != nullptr)
					{
						p->first = p->first->next;
					}
					CopyNode* ta = new CopyNode;
					ta->borrower = name;
					ta->borrwoDate = borrowDate;
					ta->copyData = copyDate;
					ta->nODTRB = 15;
					ta->ava = 0;
					ta->next = nullptr;
					p->first->next = new CopyNode;
					p->first->next = ta;
					p->first = tail;
				}
				else
				{
					std::string name1 = e->borrower;
					std::string borrowDate = e->borrwoDate;
					std::string copyDate = e->copyData;
					
					CopyNode* r = p->first;
					w = r;
					while (p)
					{
						q = r;
						r = r->next;
						if (r->borrower == name)
							break;
					}
					q->next = r->next;
					delete r;
					p->first = w;

					CopyNode* tail = p->first;
					while (p->first->next !=nullptr)
					{
						p->first = p->first->next;
					}
					
					CopyNode* ta = new CopyNode;
					ta->borrower = name;
					ta->borrwoDate = borrowDate;
					ta->copyData = copyDate;
					ta->nODTRB = 15;
					ta->ava = 0;
					ta->next = nullptr;
					p->first->next = new CopyNode;
					p->first->next = ta;
					p->first = tail;
				}
			}
		}
	}

	void render(Node* p)
	{
		while (p)
		{
			std::cout << p->bookName << " " << p->bookISBN << " " << p->numberOfCopies << std::endl;
			std::cout << "List Of Books : \n";
			CopyNode* q = nullptr;
			q = p->first;
			while (q)
			{
				std::cout << q->copyData << " " << q->ava << " " << q->borrower << " " << q->borrwoDate << " " << q->nODTRB << std::endl;
				q = q->next;
			}
			std::cout << "************************************************\n";
			p = p->next;
		}
	}

	void lInsertNode(CopyNode* first, CopyNode* y)
	{
		CopyNode* p = first;
		CopyNode* t;
		t = y;
		if (p == nullptr)
		{
			p = t;

		}
		else
		{
			while (p)
			{
				p = p->next;
			}
			p->next = t;
			p = t;
		}
		first = p;
	}

	void libraryInventory(Node* p)
	{
		int count = 0;
		while (p)
		{
			count = 0;
			std::cout << "***-------------------------------------------***\n";
			std::cout << "Book : " << p->bookName << std::endl;
			std::cout << "- Number of copies : " << p->numberOfCopies << std::endl;
			while (p->first)
			{
				if (p->first->ava == 1)
				{
					count++;
				}
				p->first = p->first->next;
			}
			std::cout << "- Number of borrowed books : " << count << std::endl;
			std::cout << "***-------------------------------------------***\n\n";
			p = p->next;
		}
		std::cout << std::endl;
	}

	Node* gethead()
	{
		return first;
	}
};

static void render(CopyNode* p)
{
	while (p)
	{
		std::cout << p->copyData << " " << p->ava << " " << p->borrower << " " << p->borrwoDate << " " << p->nODTRB << std::endl;
		p = p->next;
	}
}