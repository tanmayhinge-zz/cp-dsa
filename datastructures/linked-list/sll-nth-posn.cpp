#include <bits/stdc++.h>

using namespace std;


struct Node{
	int data;
	Node* next;
};
Node* head = new Node();
void Print(){
	Node* temp = head;
	while (temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	
	
}

void Insert(int num, int position){

	Node* temp1 = new Node();
	temp1->data= num;
	temp1->next=NULL;
	if(position==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	Node* temp2 = head;
	for(int i=0; i < position-2; ++i){
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;

}


int main(){
	
	head = NULL;
	int n, x, p;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> x >> p;
		Insert(x,p);
		Print();
	}
	
}





































