#include <iostream>
struct Node
{
	int value;
	Node* prev;
};
struct Stack
{
	Node* head;
	int count = 0;
	Stack(int value)
	{
		Node* node = new Node;
		node->value = value;
		count = 1;
		head = node;
	}
	void Push(int value)
	{
		Node* node = new Node;
		if (!node)
			return;
		if (count == 0)
		{
			node->prev = nullptr;
			head = node;
			node->value = value;
			count = 1;
			return;
		}
		if (count > 0)
		{
			node->prev = head;
			head = node;
			node->value = value;
			count++;
		}
	}
	void Peek()
	{
		for (int i = 0; i < count; i++)
		{
			std::cout << head->value;
		}
	}
	void Pop()
	{
		Node* node = new Node;
		node->prev = nullptr;
		//std::cout << head->value;
		if (count == 0)
		{
			std::cout << "END";
			node = head;
			delete head;
			return;
		}
		if (count > 0)
		{
			head = node->prev;
			node = head;
			std::cout << "\nOK";
			count--;
		}
delete node;
	}
};
int main()
{
	Node d;
	Stack s1(5);
	
	s1.Peek();
	s1.Pop();
	std::cout << "\ndeletet node\n\n";
	s1.Peek();
	return 0;
}
//#include<iostream>
//using namespace std;
//struct List
//{
//    int x; 
//    List* Next, * Head; 
//};
//
//void Add(int x, List** MyList) //Принимаем элемент и указатель на указатель на стек
//{
//    List* temp = new List; 
//    temp->x = x; 
//    temp->Next = (*MyList)->Head; 
//    (*MyList)->Head = temp; 
//}
//
//
//void Show(List* MyList) 
//{
//    List* temp = new List; 
//    temp = MyList->Head; 
//    
//    while (temp != NULL)  
//    {
//        cout << temp->x << " "; 
//        temp = temp->Next;
//    }
//}
//
//
//void ClearList(List* MyList)
//{
//    while (MyList->Head != NULL) 
//    {
//        List* temp = MyList->Head->Next; //Временная переменная для хранения адреса следующего элемента
//        delete MyList->Head; //Освобождаем адрес обозначающий начало
//        MyList->Head = temp; //Меняем адрес на следующий
//    }
//}
//
//void main()
//{
//    List* MyList = new List; 
//    MyList->Head = NULL; 
//
//    for (int i = 0; i < 10; i++) Add(i, &MyList); 
//    Show(MyList); 
//
//    void ClearList(List * MyList); //Очищаем память.
//
