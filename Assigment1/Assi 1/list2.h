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
	int length, Grade, numberOfRegisteredCourses;
	node *head, *tial;

public:
	student(){
		Grade = 0;
		numberOfRegisteredCourses = 0;
		length = 0;
		head = 0;
		tial = 0;

	}
	void set(string a, string b, string c, int x, int y ){
		FirstName = a, LastName = b, Email = c;
		Grade = x, numberOfRegisteredCourses=y;
	}
	void RegisterCourse(T item)
	{
		if (length == numberOfRegisteredCourses)
		{
			cout << "Sorry Impossible to add more than : " << numberOfRegisteredCourses << "\n";
			return;
		}
		node *curr;
		curr = new node;
		curr->val = item;
		curr->next = head;
		head = curr;
		length++;
		cout << "Done add course : \n";
	}
	void show(){
		node *pos = head;
		cout << "Number of Cources : " << length << "\n";
		while (pos != 0)
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