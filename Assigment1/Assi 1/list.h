#include <iostream>
using namespace std;

struct node
{
	string val;
	node *next;
};
template <class T>
class student{
private:
	string FirstName, LastName, Email;
	int length,Grade;
	node *head,*tial;

public:
	student(){
		Grade = 0;
		length = 0;
		head = 0;
		tial = 0;
	}
	void set(string a,string b,string c,int x){
		FirstName = a, LastName = b, Email = c;
		Grade = x;
	}
	void RegisterCourse(T item)
	{
		node *curr;
		curr = new node;
		curr->val = item;
		curr->next = head;
		head = curr;
		length++;
	}
	void show(){
		node *pos = head;
		cout << "Number of Cources : " << length << "\n";
		while (pos!=0)
		{
			cout << pos->val << " ";
			pos = pos->next;
		}	
		cout << "\n";
	}
	void DropCourse(T item){
		node *pos = head;
		bool ok = 0;
		if (pos->val == item)
		{
			length--;
			ok = 1;
			head = pos->next;
		}
		else{
		
			while (pos != tial)
			{
				if (pos->next->val == item)
				{
					length--;
					ok = 1;
					pos->next = pos->next->next;
					break;
				}
				else
					pos = pos->next;
			}
		}
		cout << (ok ? "Done : " : "not found : ") << "\n";
	}

};