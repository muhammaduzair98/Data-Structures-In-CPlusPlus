#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct Fullname
{
	string FirstName;
	string LastName;
};
	struct student
{
		int roll;
		char gender;
		Fullname name;
		float gpa;
		student *next;
};
	
	class assi
	{
	private:
		student *head, *temp, *NN;
	public:

		void insert_node()
		{
			cout << "//Add the following nodes in the start" << endl;
			cout << endl;
			//First Node
			NN = new student;
			NN->roll = 101;
			NN->gender = 'M';
			NN->name.FirstName = "Mark";
			NN->name.LastName = "Zuckerberg";
			NN->gpa = 3.01;
			NN->next = NULL;
			head = NN;

			//Second Node
			NN = new student;
			NN->roll = 102;
			NN->gender = 'M';
			NN->name.FirstName = "Bill";
			NN->name.LastName = "Gates";
			NN->gpa = 3.29;
			NN->next = NULL;

			//Making Connection B/w First and Second Node
			for (temp = head; temp->next != NULL; temp = temp->next)
			{
			}
			temp->next = NN;
			temp = NULL;
			NN = NULL;

			//third Node
			NN = new student;
			NN->roll = 103;
			NN->gender = 'F';
			NN->name.FirstName = "Ada";
			NN->name.LastName = "Lovelace";
			NN->gpa = 3.11;
			NN->next = NULL;

			for (temp = head; temp->next != NULL; temp = temp->next)
			{
			}
			temp->next = NN;
			temp = NULL;
			NN = NULL;

			//Fourth Node
			NN = new student;
			NN->roll = 104;
			NN->gender = 'M';
			NN->name.FirstName = "Steve";
			NN->name.LastName = "Jobs";
			NN->gpa = 3.51;
			NN->next = NULL;

			for (temp = head; temp->next != NULL; temp = temp->next)
			{
			}
			temp->next = NN;
			temp = NULL;
			NN = NULL;

			NN = new student;
			NN->roll = 105;
			NN->gender = 'F';
			NN->name.FirstName = "Arfa";
			NN->name.LastName = "Karim";
			NN->gpa = 3.98;
			NN->next = NULL;
			for (temp = head; temp->next != NULL; temp = temp->next)
			{
			}
			temp->next = NN;
			temp = NULL;
			NN = NULL;

		}
		void print()
		{			for (temp = head; temp != NULL; temp = temp->next)
			{
				cout << temp->roll << "  "; 
				cout << temp->gender << "  ";
				cout << temp->name.FirstName << " " << temp->name.LastName << "  ";
				cout << temp->gpa << "  ";
				cout << endl;
			}
		
		}

		void change_name()
		{
			cout << "//Change the FirstName of roll Number 104 to Micheal" << endl;
			cout << endl;
			for (temp = head; temp->roll != 104; temp = temp->next)
			{
			}
			temp->name.FirstName = "Micheal";
			temp->name.LastName = "";
			temp = NULL;
		}

		void add_before102()
		{
			cout << "//Add another Student Before 102 Roll #" << endl;
			cout << endl;
			for (temp = head; temp->roll != 102; temp = temp->next)
			{
			}

			NN = new student;
			NN->roll = 106;
			NN->gender = 'M';
			NN->name.FirstName = "Albert";
			NN->name.LastName = "Einstein";
			NN->gpa = 3.32;

			NN->next = temp->next;
			temp->next = NN;
			temp = NN = NULL;
		}

		void add_after104()
		{
			cout << "//Add Another Student after 104 Roll #" << endl;
			cout << endl;
			for (temp = head; temp->roll != 104; temp = temp->next)
			{
			}

			NN = new student;
			NN->roll = 107;
			NN->gender = 'M';
			NN->name.FirstName = "Isaac";
			NN->name.LastName = "Newton";
			NN->gpa = 3.15;

			NN->next = temp->next;
			temp->next = NN;
			temp = NN = NULL;
		}

		void change_roll()
		{
			cout << "//Change the Roll number of node having Roll Number 104 to 110." << endl;
			cout << endl;
			for (temp = head; temp->roll!=104; temp = temp->next)
			{
			}
			temp->roll = 110;
			temp = NULL;
		}

		void delete_102_node()
		{
			cout << "//Delete the node having roll number 102" << endl;
			cout << endl;
			for (temp = head; temp->roll != 101; temp = temp->next)
			{
			}
			student *temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
		}

		void delete_after_107_node()
		{
			cout << "//Delete the student-node after the node having roll number 107" << endl;
			cout << endl;
			for (temp = head; temp->roll != 107; temp = temp->next)
			{
			}
			student *temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
		}

		void delete_before_107_node()
		{
			cout << "//Delete the student-node before the node having roll number 107" << endl;
			cout << endl;
			for (temp = head; temp->next->next->roll != 107; temp = temp->next)
			{
			}
			student *temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
		}

		void insert_node_pos()
		{
			cout << "//Insert a node (of your choice) at the 4th Position" << endl;
			cout << endl;
			int counter = 1;
			int position = 0;
			cout << "Enter Postion on Which you want to insert Node = ";
			cin >> position;

			for (temp = head; counter < position - 1; counter++)
			{
				temp = temp->next;
			}

			NN = new student;
			NN->roll = 100;
			NN->gender = 'M';
			NN->name.FirstName = "Muhammad";
			NN->name.LastName = "Uzair";
			NN->gpa = 2.24;

			NN->next = temp->next;
			temp->next = NN;
			NN = NULL;
			temp = NULL;
		}

		void start_delete()
		{
			cout << "//Delete a node at the start" << endl;
			cout << endl;
			temp = head;
			head = head->next;
			delete temp;
		}

		void end_delete()
		{
			cout << "//Delete a node at the end" << endl;
			cout << endl;
			for (temp = head; temp->next->next != NULL; temp = temp->next)
			{
			}
			
			student *temp2 = temp;
			delete temp2->next->next;
			temp->next = NULL;
		}

		void insert_start_node()
		{
			cout << "//Insert any node at the start" << endl;
			cout << endl;
			NN = new student();
			NN->roll = 111;
			NN->gender = 'M';
			NN->name.FirstName = "Ali";
			NN->name.LastName = "Durrani";
			NN->gpa = 2.77;
			NN->next = head;
			head = NN;
			NN = NULL;
		}

		void add_end_node()
		{
			cout << "//Insert any node at the end" << endl;
			cout << endl;
			for (temp = head; temp->next != NULL; temp = temp->next)
			{
			}

			NN = new student;
			NN->roll = 120;
			NN->gender = 'M';
			NN->name.FirstName = "Zohaib";
			NN->name.LastName = "Khan";
			NN->gpa = 3.01;

			NN->next = temp->next;
			temp->next = NN;
			temp = NN = NULL;
		}

		void delete_second_node()
		{
			cout << "//Delete a node at the 2nd Position." << endl;
			cout << endl;
			for (temp = head; temp->next->next->roll!=103; temp = temp->next)
			{
			}
			student *temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;

		}

		void delete_Linkedlist()
		{
			for (temp = head; head != NULL; temp = temp->next)
			{
				temp = head;
				head = head->next;
				delete temp;
			}
			cout << "Linklist Deleted" << endl;
		}
		
	};	
	
	int main()
	{

		assi obj; //CLASS OBJECT


		cout << "Assignment Submitted By Muhammad Uzair (p16-6002)" << endl;
		cout << endl;
		Sleep(3000);
		system("CLS");

		
		obj.insert_node();
		cout << "------------------------------------" << endl;
		cout << endl;
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.change_name();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.add_before102();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.add_after104();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.change_roll();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.delete_102_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.delete_after_107_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.delete_before_107_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.insert_node_pos();
		obj.print();
		
		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.start_delete();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.end_delete();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.insert_start_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.add_end_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;

		obj.delete_second_node();
		obj.print();

		cout << endl;
		cout << "------------------------------------" << endl;
		cout << endl;


		obj.delete_Linkedlist();
		obj.print();



		

		return 0;
	}
