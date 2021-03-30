
#include <iostream>
using namespace std;
const int size=40 ;
#define total_size 40
//array

	class array{
	public:
		int counter; 

		void create_array(int a[]);
		void insert_first(int a[],int item,int size);
		void insert_last(int a[],int item,int size);
		
		void delete_first(int a[],int size);
		void delete_last(int a[],int size);

		int search_array(int a[],int item,int size);
		void display_array(int a[],int size);
		void sort_up_array(int a[],int size);
		void sort_down_array(int a[],int size);
		void Max_Min_array(int a[],int size);
};

//.............................. create_array ...................................//
void array::create_array(int a[]){
	
		int size;
	    cout<<"please enter the size of array\n";
	    cin>> size;
	    for(int i=0; i<size; i++){
	    	cout<<"please enter the element";
		    cin>>a[i];
	    }
}

//.............................. insert_first ...................................//
void array::insert_first(int a[],int item,int size){
	
	if(size<total_size){
		for(int i=size; i>0; i--){
			a[i]=a[i-1];
		}
		 a[0]=item;
	     size++;
	     display_array(a,size);

		cout<<"\nthe new size="<<size<<endl;
	}
	cout<<"the array is full\n";
}

//.............................. insert_last ...................................//
void array::insert_last(int a[],int item,int size){
	
	if(size<total_size){

		a[size]=item;
		size++;
		display_array(a,size);

		cout<<"\nthe new size="<<size<<endl;
	}
	else
	cout<<"the array is full\n";
}



//.............................. delete_first ...................................//
void array::delete_first(int a[],int size){
	if(size>0){
		for (int i=0; i<size; i++){
			a[i]= a[i+1];
	    }
		size--;
		display_array(a,size);

		cout<<"\nthe new size="<<size<<endl;
	}
	else
	cout<<"the array is empty\n";
}

//.............................. delete_last ...................................//
void array::delete_last(int a[],int size){
	if(size>0){
		size--;
		display_array(a,size);

		cout<<"\nthe new size="<<size<<endl;
	}
	else
	cout<<"the array is empty\n";
}


//.............................. search_array ...................................//
int array::search_array(int a[], int item,int size){
	int location=-1;
	int count=0;
	for(int i=0; i<size; i++){
	
		if(a[i]==item){
			location=i;
			count++;
			}
	}
		if(location==-1){
			cout<<"the item'"<<item<<"'not found"<<endl;
		}
		else {
			cout<<"the item'"<<item<<"'found:"<<location<<endl;
			cout<<count<<endl;
		}
}

	
	//.............................. display_array .................................//
void array::display_array(int a[],int size){
	
		for(int i=0; i<size; i++){
			cout<<a[i]<<",";
		}
}

//. sort_up_array .
void array::sort_up_array(int a[],int size){
	int temp;
	for(int j=0; j<size; j++){
		for(int i=j+1; i<size; i++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

//.. sort_down_array 
void array::sort_down_array(int a[],int size){
	int temp;
	for(int j=0; j<size; j++){
		for(int i=j+1; i<size; i++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
//... Max_Min_array 

void array::Max_Min_array(int a[],int size){
	int Max;
	int Min;
	Max=Min=a[0];
	for(int i=1; i<size; i++){
		if (a[i]>Max){
			Max=a[i];
		}
		else if(a[i]<Min){
			a[i]=Min;
		}
	}
	cout<<"the Max number ="<<Max<<endl;
	cout<<"the Min number ="<<Min<<endl;
	
}

//.stak..//

 
class Stack{
	public:
	int Top;
	
    int stack[];
    void create_Stack(int stack[]);
	void push_stack(int item);
	void print_stack();
	void counter_stack();
	void pop_stack();
	void search_stack(int n);
	void Max_Min_stack();
	void pop_stack1();
};

//.creat..//
void Stack::create_Stack(int stack[]){
	int size;
	cout<<"enter the size of stack\n";
	cin>> size;
	for(int i=0; i<size; i++){
		cout<<"enter the element\n";
		cin>> stack[i];
	
	}
}
//push
void Stack:: push_stack(int item){
	
	if (Top==size-1){
		cout<<"the stack is full\n";
	}
	else {
		
		Top++;
		stack[Top]= item;
	}	
}

//..print...//
void Stack:: print_stack(){
	if (Top==-1){
		cout<<"the stack is empty\n";
	}
	else {
		for (int i=Top; i>=0; i--)
		cout<<stack[i]<<endl;
	}
}
		//...counter..//
void Stack :: counter_stack(){
	int count=0;
		if (Top==-1){
		cout<<"the stack is empty\n";
	}
	else {
		for (int i=Top; i>=0; i--)
		count ++;
	}
	cout<<count<<endl;
}

//..pop..//
void Stack :: pop_stack(){
		if (Top==-1){
		cout<<"the stack is empty\n";
	}
	else{
	
	    	Top--;

	print_stack();
	}
    
}
//pop
void Stack :: pop_stack1(){
		if (Top==-1){
		cout<<"the stack is empty\n";
	}
	else{
		for (int i=Top; i>=0; i--){
			cout<<stack[i]<<endl;
	    	Top--;
		}
	print_stack();
	}
    
}

//...search_stack
void Stack::search_stack(int n){
	
	int count=0;
	for(int i=Top; i>=0; i--){
		if(stack[i]==n){
			count++;
			cout<<"the item'"<<n<<"'found in location:"<<i<<endl;
		}
	}
		if(count==0){
			cout<<"the item'"<<n<<"'not found "<<endl;
		}
		else{
			cout<<count<<endl;
		}
}

//.Max_Min_stack.
void Stack::Max_Min_stack(){
	
	int Max;
	int Min;
	Max=Min=stack[Top];
	for(int i=Top-1; i>0; i--){
		if(stack[i]>Max){
			Max=stack[i];
		}
		else if(stack[i]<Min){
			Min=stack[i];
		}
		
	}
	cout<<"the Max number in the stack="<<Max<<endl;
	cout<<"the Min number in the stack="<<Min<<endl;
}

//**********************************************************************************************************************************************

//queue

class q{ 
	public:
	int rear;
    int frount;
    
    int queue[size];
    
    void insert_queue (int x);
    void print_queue();
    void counter_queue();
    void remove_queue();
};

//...............................insert...............................//
void q:: insert_queue (int x){
	if (rear==size-1)
	cout<<"the queue is full\n";
	else {
		cout <<"enter the number insert to queue\n ";
        cin >>x;
		if( rear==-1){
			frount=0;
			rear++;
			queue[rear]=x;
		}
	}
}

//print
void q::print_queue(){
	if(rear==-1)
	cout<<"the queue is empty\n";
	else{
		for(int i=frount;i<=rear;i++)
	    cout<<queue[i]<<endl; 
    }
}

//counter
void q::counter_queue(){
	int count=0;
	if(rear==-1)
	cout<<"the queue is empty\n";
	else{
		for(int i=frount;i<=rear;i++)
	    count++;
    }
	
}

//remove
void q::remove_queue(){
	if(rear==frount==-1)
	cout <<"the queue is empty\n";
	else {
		cout<< queue[frount];
		if(frount==rear)
		rear=frount=-1;
		else if(frount=size-1)
		frount=0;
		else 
		frount++;
	}
}



//****************************************************************************************************************************************

//......................single_linked_list..........................//
class Node {
	public:
		int data;
		Node* next;
		Node(int d);
};
class sll{
	public:
		Node *head;
	    sll();
		bool isEmpty();
		void add_first(int d);
		void add_last(int d);
		void add_after(int d, int key);
		void add_before(int d,int key);
		Node delete_first();
		Node delete_last();
		Node delete_N(int i);
		void search(int key);
		void print();
		void count();
};

Node::Node(int d){
	data=d;
	next=NULL;
}
sll::sll(){
	head=NULL;
}
//...........................is empty...............................//
bool sll::isEmpty(){
	return (head==NULL);
}
//...........................add first..............................//
void sll:: add_first(int d){
	Node * newNode= new Node (d);
	if (isEmpty()){
		head= newNode;
		
		
	}
	else {
		newNode ->next=head;
		head=newNode;
		
		
	}
}
//.............................add last............................//
void sll:: add_last(int d){
	Node * newNode= new Node (d);
	if (isEmpty()){
		head= newNode;
		
		
	}
	else{
		Node* current=head;
		Node* previus=head;
		current=current->next;
		while (current!=NULL){
			//cout<<current->data<<" \n";
			previus=current ;
			current=current->next;
			
		}// END WHILE
		
		previus ->next= newNode;
		
			
	}
}
//..............................add after.................................//
void sll:: add_after(int d,int key){
	Node * newNode= new Node (d);
	if (isEmpty()){
		head= newNode;
	
	
	}
	else {
		Node* current=head;
		while (current -> data!=key){
			current=current->next;
		}// END WHILE
		newNode -> next=current ->next;
		current ->next=newNode;
	
		
	}
}
//.............................add before.................................//
void sll:: add_before(int d,int key){
	Node * newNode= new Node (d);
	if (isEmpty()){
		head= newNode;
	
	
	}
	else {
		Node* current=head;
		Node* previus=head;
		while ((current -> data!=key)&&(current!=NULL)){
			previus=current;
			current=current->next;
		}// END WHILE
		if(current -> data==key){
		
		newNode -> next=current ;
		previus ->next=newNode;
		
		
	    }
	    else
	    cout<<"the key is not found\n";
	}
}
//.............................print...............................//
void sll::print(){
	if (isEmpty()){
		cout <<"the list is empty\n";
	}
	else {
		cout<<"........................\n";
		Node* current=head;
		while (current !=NULL){
			cout <<current -> data<<endl;
			current=current->next;
		}
	}
}
//.............................counter.............................//
void sll::count(){
	int c=0;
		if (isEmpty()){
		cout <<"the list is empty\n";
		cout<<c;
	}
	else {
		Node* current=head;
		while (current !=NULL){
			c++;
			current=current->next;
		}// END WHILE
		cout<<c;
		}
}
//........................... search...............................//
void sll::search( int key){
	if (isEmpty()){
		cout <<"the list is empty\n";
	}
	else{
		Node* current=head;
		while((current->data!=key)&&(current->next!=NULL)){
			current=current->next;
		}
		//end while
		if(current->data==key){
			cout<<"found\n";
		}
		else 
		cout<<"key not found\n";
	}
}
//.............................delete first.............................//
Node sll::delete_first(){
		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
	}
	else {
		head =head-> next;
		return head-> data;
	}
}
//.............................delete last..............................//
Node sll::delete_last(){
		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
	}
	else {
		Node* current=head;
		Node* previus=head;
		current=current->next;
		while (current -> next!=NULL){
			previus=current;
			current=current->next;
		}// END WHILE
		previus-> next=NULL;
		current->next=NULL;
		return current->data;
		}
	}
	
//...............................delete N..................................//
Node sll::delete_N(int i){
		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
	}
	else if(head->data==i){
		delete_first();
	}
	else {
		Node* current=head;
		Node* previus=head;
		while ((current -> data!=i)&&(current -> next!=NULL)){
			previus=current;
			current=current->next;
		}// END WHILE
		if (current -> data==i){
			previus->next=current->next;
			current->next=NULL;
			return current->data;
		}
		else {
			cout<<"the data not found\n";
			return -1;
		}
	}
}



//..........................Dll...........................//
class Dnode {
	public:
		int data;
		Dnode* next;
		Dnode* previus;
		Dnode(int d);
};
class Dll{
	public:
		Dnode *head;
		Dnode*tail;
		Dll();
		bool isEmpty();
		void add_first(int d);
		void add_last(int d);
		void add_after(int d, int key);
		void add_before(int d,int key);
		int delete_first();
		int delete_last();
		int delete_N(int d);
		void search(int key);
		void print();
		void count();
};

Dnode::Dnode(int d){
	data=d;
	next=NULL;
	previus=NULL;
}
 Dll::Dll(){
	head=NULL;
	tail=NULL;
}
//............................is empty..............................//
bool Dll::isEmpty(){
	return (head==NULL);
}

//...........................add first..............................//
void Dll:: add_first(int d){
	Dnode * newNode= new Dnode (d);
	
	if (isEmpty()){
		
		head= newNode;
		tail=newNode;
		
		
	}
	else {
		
		newNode ->next=head;
		head->previus =newNode;
		head=newNode;
	
		
	}
}

//...........................add last..............................//
void Dll:: add_last(int d){
	Dnode * newNode= new Dnode (d);
	if (isEmpty()){
		head= newNode;
		tail=newNode;
		
	
	}
	else{
		newNode ->previus=tail;
		tail->next =newNode;
		tail= newNode;
		
			
	}
}

//..........................add after..............................//
void Dll:: add_after(int d,int key){
	Dnode * newNode= new Dnode (d);
	if (isEmpty()){
		head=newNode;
	
			
	}
	else {
		Dnode* current=head;
		while ((current -> data!=key)&&(current->next !=NULL)){
			current=current->next;
		}// END WHILE
		if(current -> data==key){
			newNode ->next=current->next;
			newNode ->previus=current;
			
			current->next->previus=newNode;
			current->next=newNode;
			
	
		}
		else {
			cout<<"key not found \n";
		}
	}
}

//.............................add before..............................//
void Dll:: add_before(int d,int key){
	Dnode * newNode= new Dnode (d);
	if (isEmpty()){
		head=newNode;
		
	
    }
	else if (head->data ==key){
		add_first(d);
	}
	else {
	    Dnode* current=head;
		while( (current -> data!=key)&&(current !=NULL))
		{
			current=current->next;
		}// END WHILE
		if(current -> data==key){
			newNode ->next=current;
			newNode ->previus=current->previus;
			current->previus->next=newNode;
			current->previus=newNode;
			
		
		}
		else {
			cout<<"key not found \n";
		}
	}
}

//........................... search...............................//
void Dll::search( int key){
	if (isEmpty()){
		cout <<"the list is empty\n";
	}
	else{
		Dnode* current=head;
		while((current->data!=key)&&(current->next!=NULL)){
			current=current->next;
		}
		//end while
		if(current->data==key){
			cout<<"found\n";
		}
		else 
		cout<<"key not found\n";
	}
}
//...............................print................................//
void Dll::print(){
	if (isEmpty()){
		cout <<"the list is empty\n";
	}
	else {
		cout<<"..........................\n";
		Dnode* current=head;
		while (current !=NULL){
			cout <<current -> data<<endl;
			current=current->next;
		}
	}
}
//.............................counter.................................//
void Dll::count(){
	int c=0;
		if (isEmpty()){
		cout <<"the list is empty\n";
		cout<<c;
	}
	else {
		Dnode* current=head;
		while (current !=NULL){
			c++;
			current=current->next;
		}// END WHILE
		cout<<c;
		}
}

//...............................delete first................................//
int Dll::delete_first(){
	Dnode* temp=head;
		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
	}
	else if(head==tail) {
		head=tail=NULL;
	}
	else {
		head =head->next;
		head->previus=NULL;
		temp->next=NULL;
		return temp ->data;
	}
}

//.............................delete last..............................//
int Dll::delete_last(){
	Dnode* temp=tail;
		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
	}
	else if(head==tail) {
		head=tail=NULL;
		return (temp->data);
	}
	else {
		tail =tail->previus;
		tail->next=NULL;
		temp->previus=NULL;
		return temp ->data;
	}
}

//............................delete N..............................//
int Dll::delete_N(int d){

		if (isEmpty()){
		cout <<"the list is empty\n";
		return -1;
    }
    if (head -> data==d){
			delete_first();
		}
		if (tail -> data==d){
			delete_last();
		}
		
	else {
			Dnode* current=head;
				Dnode* pre;
		while ((current -> data!=d)&&(current->next!=NULL)){
			pre= current;
			current=current->next;
		}// END WHILE
		if(current -> data==d){
			pre->next=current->next;
			current->next->previus=pre;
			current->next=current->previus=NULL;
		}
		else {
			
		    cout<<"the key not found\n";
		}
	}
}


//.............................BStree............................//
class Snode{
	public :
		int data;
		Snode*leftchild;
		Snode*rightchild;
		Snode(int d);
};
class BStree{
	public :
		Snode*root;
		BStree();
		bool isEmpty();
		void visit(int d);
		void preorder(Snode*n);
		void postorder(Snode*n);
		void inorder(Snode*n);
		void levelorder(Snode*n);
		void insert(Snode*&r, int d);
		Snode* search(Snode*r, int d);
		Snode* search2(int key);
		Snode* getMax(Snode* r);
		Snode* getMin(Snode* r);
		void get_leftChild(Snode*r);
		void get_rightChild(Snode*r);
		void External(Snode* r);
		void Internal(Snode* r);
		void Leaves(Snode* r);
		void Perent(Snode* r);
};

class queue{
	public:
		static const int size =20;
		int front ,rear;
		queue ();
		Snode*q[size];
		bool enqueue (Snode *n);
		Snode * dequeue ();
		bool isEmpty();
};

Snode::Snode(int d){
	data=d;
	leftchild=rightchild=NULL;
	
}
BStree::BStree(){
	root=NULL;
}
bool BStree ::isEmpty(){
	return (root==NULL);
}

//..................................insert.................................//
void BStree::insert(Snode*&r, int d){
	if(r==NULL)//Base case
	r=new Snode(d);
	else if(d<=r->data)//recursive
	insert(r->leftchild, d);
	else //recursive case2f
	insert(r->rightchild, d);
}

//..................................search.....................................//
Snode* BStree::search(Snode*r, int d){
	if(r==NULL)
	return r;
	else if(d<r->data){
		cout<<"input less than root\n";
		return search(r->leftchild, d);
	}
	
	else if(d>r->data){
		cout<<"input larger than root\n";
		return search(r->rightchild, d);
	}
	else{
		cout<<"input equals root\n";
		return r;
	}
}

//......................................search2....................................//
Snode* BStree::search2(int key){
	Snode* current=root;
	if(root==NULL){
		cout<<"empty tree\n";
		return current;//or root
	}
	else if(root->data==key){
		cout<<"found at root \n";
		return current;
	}
	else{
		while(current->data!=key){
			if (key<current->data)
			current=current->leftchild;
			else if(key>current->data)
			current=current->rightchild;
		}
		//end while
		cout<<"the node found:"<<current->data;
	}
}

//.......................................getMax....................................//
Snode* BStree::getMax(Snode*root){
	Snode *i=root;
	
	while(i->rightchild !=NULL)
	     i = i->rightchild;
	      cout<<i->data<<endl;
	      return i;
}

//........................................getMin.......................................//
Snode* BStree::getMin(Snode*root){
	Snode *i=root;
	while(i->leftchild !=NULL){
		i=i->leftchild;
	}
	      
	      cout<<i->data<<endl;
	      return i;
}
//......................................visit..........................................//
void BStree::visit(int d){
	cout<<d<<"\n";
}
//.....................................preorder.........................................//
void BStree::preorder(Snode*n){
	if(n!=NULL){
		visit(n->data);
		preorder(n->leftchild);
		preorder(n->rightchild);
	}
}
//.................................postorder.........................................//
void BStree::postorder(Snode*n){
	if(n!=NULL){
	    postorder(n->leftchild);
		postorder(n->rightchild);
		visit(n->data);
	}
}
//....................................inorder......................................//
void BStree::inorder(Snode*n){
	if(n!=NULL){
	    inorder(n->leftchild);
	    visit(n->data);
		inorder(n->rightchild);
		
	}
}
//..................................levelorder....................................//
void BStree::levelorder(Snode*n){
	Snode*temp;
	queue*q=new queue();
	q->enqueue(n);
	while(!q->isEmpty()){
		temp=q->dequeue();
		visit(temp->data);
		if(temp->leftchild!=NULL)
		q->enqueue(temp->leftchild);
		if(temp->rightchild!=NULL)
		q->enqueue(temp->rightchild);
	}//END WHILE
}

//...................................get_leftChild...................................//
void BStree::get_leftChild(Snode* r){
	
	if(r!=NULL){
		if(r->leftchild!=NULL){
			
			cout<<r->leftchild->data<<endl;
		}
		get_leftChild(r->rightchild);
		get_leftChild(r->leftchild);
	}

}

//..................................get_rightChild....................................//
void BStree::get_rightChild(Snode* r){
	if(r!=NULL){
		if(r->rightchild!=NULL){
			
			cout<<r->rightchild->data<<endl;
		}
		get_rightChild(r->rightchild);
		get_rightChild(r->leftchild);
	}
}

//................................... External....................................//
void BStree::External(Snode* r){
	if((r->leftchild==NULL)&&(r->rightchild==NULL)){
		cout<<"node is External\n";
	}
	else{
		cout<<"node is not External\n";
	}
}

//..................................Internal....................................//
void BStree::Internal(Snode* r){
	if((r->leftchild!=NULL)||(r->rightchild!=NULL)){
		cout<<"node is Internal\n";
	}
	else{
		cout<<"node is not Internal\n";
	}
}

//................................Leaves.....................................//
void BStree::Leaves(Snode* r){
	
	if(r!=NULL){
		if((r->leftchild==NULL)&&(r->rightchild==NULL)){
			
			cout<<r->data<<endl;
		}
		Leaves(r->rightchild);
		Leaves(r->leftchild);
	}	
}

//........................................Perent........................................//
void BStree::Perent(Snode* r){
	
	if(r!=NULL){
		if((r->leftchild!=NULL)||(r->rightchild!=NULL)){
			
			cout<<r->data<<endl;
		}
		Perent(r->rightchild);
		Perent(r->leftchild);
	}

	
}
queue::queue(){
	front=-1;
	rear=-1;
}
//.......is empty queue......//
bool queue::isEmpty(){
	return (front>rear);
}
//.......enqueue.........//
bool queue::enqueue(Snode *n){
	if(rear==size){
		cout<<"the queue is full\n";
		return false;
	}
	else if(rear==-1){
		front++;
		rear++;
		q[rear]=n;
		return true;
	}
	else {
		rear++;
		q[rear]=n;
		return true;
	}
}
//.......dequeue.........//
Snode* queue::dequeue(){
	if(front==-1){
		cout<<"empty queue\n";
		return NULL;
	}
	else {
		Snode*temp=q[front];
		front++;
		return temp;
	}
}

class Vertix{
	public:
		int data;
		bool visited;
		Vertix* next;
		Vertix(int d);
};

class List{
	public:
		Vertix* head;
		Vertix* firstVertix;
		List();
};

class Graph{
	public:
		int VertixNo;
		int count;
		List* array[];
		Graph(int no);
		void add_Edge(int d1,int src,int d2,int dest);
		void add_Vertix(int d);
		void print_Edge(int index);
		void visit(int a);
		List* search(int d);
		void DFS(Vertix*s);
		void BFS(Vertix*s);
		void reset(Graph* g);
		void delete_vertix(int key);
		void delete_edge(int d,int n);
		
};

//.......queue.......//
class queue1{
	public:
		static const int size=20;
		int front;
		int rear;
		queue1();
		Vertix* q[size];
		bool enqueue(Vertix* n);
		Vertix* dequeue();
		bool isEmpty();
};


Vertix::Vertix(int d){
	data=d;
	visited=0;
	next=NULL;
}

List::List(){
	head=NULL;
}

Graph::Graph(int no){
	VertixNo=no;
	count=0;
	array[VertixNo];
}
queue1::queue1(){
	front=-1;
	rear=-1;
}
//.......is empty queue......//
bool queue1::isEmpty(){
	return (front>rear);
}
//.......enqueue.........//
bool queue1::enqueue(Vertix *n){
	if(rear==size){
		cout<<"the queue is full\n";
		return false;
	}
	else if(rear==-1){
		front++;
		rear++;
		q[rear]=n;
		return true;
	}
	else {
		rear++;
		q[rear]=n;
		return true;
	}
}
//.......dequeue.........//
Vertix* queue1::dequeue(){
	if(front==-1){
		cout<<"empty queue\n";
		return NULL;
	}
	else {
		Vertix*temp=q[front];
		front++;
		return temp;
	}
}

//............................. add_Vertix ...............................//
void Graph::add_Vertix(int d){
	Vertix* newVertix= new Vertix(d);
	array[count]=new List();
	array[count]->firstVertix= newVertix;
	count++;
}

//.............................. add_Edge ................................//
void Graph::add_Edge(int d1,int src,int d2,int dest){
	Vertix* V1 = new Vertix(d1);
	Vertix* V2 = new Vertix(d2);
	
	V2->next= array[src]->head;
	array[src]->head= V2;
	
	V1->next= array[dest]->head;
	array[dest]->head= V1;
}
//........................... print_Edge ...........................//
void Graph::print_Edge(int index){
	if(array[index]->head==NULL){
		cout<<"is empty\n";
	}
	else {
		Vertix * current= array[index]->head;
		while (current!=NULL){
			cout<<current->data<<",";
			current= current->next;
		}
	}
}



//.............................. visit ............................//
void Graph::visit(int a){
	cout<<a<<endl;
}

//............................. search ............................//
List* Graph::search(int d){
	int i=0;
	while((i<count)&&(array[i]->firstVertix->data!=d)){
		i++;
	}//end while
	if(i>=count){
		cout <<"the' "<<d<<"' not found in the array\n";
		return 0;
	}
	else 
	return array[i];
	
}

//............................. DFS ............................//
void Graph::DFS(Vertix*s){
	if(s!=NULL){
		List* L =search(s->data);
		if(L->firstVertix->visited==0){
			visit(L->firstVertix->data);
			L->firstVertix->visited=1;
			
			for(Vertix* i =L->head; i!=NULL; i=i->next){
				DFS(i);
			}
		}
	}
}


//........................ BFS .........................//
void Graph::BFS(Vertix* s){
	Vertix* temp;
	queue1* q=new queue1();
	q->enqueue(s);
	
	while(!q->isEmpty()){
		temp= q->dequeue();
		
		List* L=search(temp->data);
		if(L->firstVertix->visited==0){
			visit(L->firstVertix->data);
			L->firstVertix->visited=1;
			
			for(Vertix* i=L->head; i!=NULL; i=i->next){
				q->enqueue(i);
			}
		}
	}
}

//.............................. reset ............................//
void Graph::reset(Graph* g){
	for(int i=0; i<g->count; i++)
	g->array[i]->firstVertix->visited=0;
}

//......................... delete_vertix ..........................//
void Graph::delete_vertix(int key){
	int s=0;
	while((s<count)&&(array[s]->firstVertix->data != key)){
		s++;
	}//end while
	if(s>=count){
		cout<<"Vertix'"<<key<<"'not found in array\n";
	}
	else{
		Vertix* current=array[s]->head;
		Vertix* temp;
		while(current!=NULL){
			temp=current;
			current=current->next;
			temp=NULL;
		}//end while
		array[s]->head=NULL;
		for(int i=s; i<count; i++){
			array[i]=array[i+1];
		}
		count--;
		
		cout<<"the array element after delete:\n";
		 for(int i=0; i<count; i++){
		       cout<<array[i]->firstVertix->data<<",";
	     }
	           cout<<endl;
	           
		for(int i=0; i<count; i++){
			Vertix* P =array[i]->head;
			Vertix* F;
			while(P!=NULL){
				if(P->data!=key){
					F=P;
					P=P->next;
				}
				else{
					F->next= P->next;
					P->next= NULL;
				}
			}
		}
	}
}

//. delete_edge ...//
void Graph::delete_edge(int d, int n){
	for(int i=0; i<count; i++){
		if(array[i]->firstVertix->data==d){
			if(array[i]->head==NULL){
				cout<<"Empty\n";
			}
			else{
				if(array[i]->head->data==n){
					array[i]->head=array[i]->head->next;
					
					cout<<"print_Edge in the vertix after delete:"<<d<<"\n\n";
	                 print_Edge(i);
					//delete first
				}
				else{
					Vertix *current=array[i]->head;
					Vertix *previous=array[i]->head;
					while((current->next!=NULL)&&(current->data!=n)){
						previous=current;
						current=current->next;
					}//end while
					if(current->data==n){
						previous->next=current->next;
						current->next=NULL;
						
						cout<<"print_Edge in the vertix after delete:"<<d<<"\n\n";
	                    print_Edge(i);
						//delete mid
					}
					else{
						cout<<"the data '"<<n<<"'not found\n";
					}
				}
		    }
		}
	}
}

//..................................Sort....................................//
class Sort{
	public :
		int Search_Sort(int array[], int element, int key);
		void bubble_Sort(int array[], int element);
		void display (int array[], int element);
		void selection_Sort(int array[], int element);
		
};


//...............................Search_Sort.................................//
int Sort::Search_Sort(int array[], int element, int key){
	int Low=0;
	int High= element-1;
	int mid= (Low+High)/2;
	
	while ((array[mid]!=key)&&(Low<=High)){
		if(key< array[mid]){
			High= mid-1;
		}
		if(key> array[mid]){
			Low= mid+1;
		}
		
		mid= (Low+High)/2;
	}
	if(array[mid]==key){
		cout<<"the key'"<<key<<"'found\n";
		return mid;
	}
	else if(Low>High){
		cout<<"the key'"<<key<<"'not found\n";
		return 0;
	}
}

//...................................display ......................................//
void Sort::display(int array[], int element){
	for(int i=0; i<element; i++){
		cout<< array[i]<<",";
	}
	cout<<endl;
}
//................................bubble_Sort.....................................//
void Sort::bubble_Sort(int array[], int element){
	for(int out= element-1; out>1; out--){
		for(int in=0; in<out; in++){
			if(array[in]>array[in+1]){
				int temp=array[in];
				array[in]=array[in+1];
				array[in+1]= temp;
			}
		}
		display(array, element);
	
	}
}

//................................selection_Sort...................................//
void Sort::selection_Sort( int array[], int element){
	int min;
	for(int out=0; out<element-1; out++){
		min=out;
		for( int in=out+1; in<element; in++){
			if(array[in]<array[min]){
				min=in;
			}
		}
		int temp= array[min];
		array[min]= array[out];
		array[out]= temp;
	}
	display(array, element);
}


int main(){

 	
    cout<<" data structure \n\n"; 
	cout<<" please enter number 1 .first term \n";
	cout<<" please enter number 2 .second term \n";
		
	int term;
	
	cin>>term;
	switch(term){
		case 1:{
				        cout<<"\t\t first term  \n\n"; 
	        cout<<" please enter number 1 .stack\n";
		    cout<<" please enter number 2 .queue \n";
		    cout<<" please enter number 3 .array \n";
		    
		    int k;
		    
		    cin>>k;
		    switch(k){
		    	case 1:{
		    		int size;
		    		int stack[size];
		    		Stack obj;
	                obj.Top=-1;
	                            cout <<" stack \n\n";
                    cout<<" press 1 to push_stack \n";
	                cout<<" press 2 to print_stack \n";
	                cout<<" press 3 to counter_stack \n";
	                cout<<" press 4 to pop_stack \n";
	                cout<<" press 5 to search_stack\n";
	                cout<<" press 6 to Max_Min_stack \n";
	                cout<<"press 7 to create_Stack\n";
	                cout<<" press 8 to pop_stack1 \n";
	                int x;
	                
	               
	                cin>>x;
                	switch(x){
		              case 1:{
		              	cout<<"\tpush_stack:\n";
			             obj.push_stack (1);
			             obj.push_stack (2);
			             obj.push_stack (3);
			             obj.push_stack (1);
			
			             break;
		              }
		              case 2:{
		              	cout<<"\tprint_stack:\n";
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
			
			             obj.print_stack();
			         
			             break;
		              }
		              case 3:{
		              	cout<<"\tcounter_stack:\n";
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
		              	
			             obj.counter_stack();
			             
			             break;
		              }
		              case 4:{
		              	cout<<"\tpop_stack:\n";
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
		              	
			             obj.pop_stack();
			            
			             break;
		              }	
		              case 5:{
		              	cout<<"\tsearch_stack:\n";
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
	        
	                     int n;
	                     cout<<"enter the number search\n";
	                     cin>>n;
	                     obj.search_stack(n); 
			              break;
		              }
		              case 6:{
		              	cout<<"\tMax_Min_stack:\n";
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
	        
	                   obj.Max_Min_stack(); 
			            break;
		              }
		              case 7:{
		              	obj.create_Stack(stack); 
		              	break;
		              }
		              case 8:{
		              	obj.push_stack (1);
			            obj.push_stack (2);
			            obj.push_stack (3);
			            obj.push_stack (1);
		              	obj.pop_stack1(); 
		              	break;
		              }
					}
					
		    		break;
				
				}
	            case 2:{
		    		 q obj;
                	obj.rear=-1;
	                obj.frount=-1;
	                            cout <<"queue \n\n";
                    cout<<" press 1 to insert_queue \n";
	                cout<<" press 2 to print_queue\n";
	                cout<<" press 3 to counter_queue \n";
	                cout<<"press 4 to remove_queue \n";
	                
	                
	                int x;
	               
	                cin>>x;
	                switch(x){
	                	case 1:{
	                		cout<<"\tinsert_queue:\n";
			               int x;
			               obj.insert_queue(x);
			               
			               break;
		                }
		                case 2:{
		                	cout<<"\tprint_queue:\n";
		                   obj.print_queue();
		                   
			               break;
		                }
		                case 3:{
		                	cout<<"\tcounter_queue:\n";
			               obj.counter_queue();
			               
			               break;
		                }
		                case 4:{
		                	cout<<"\tremove_queue:\n";
			               obj.remove_queue();
			               
			               break;
		                }
	                }
	                
		    		break;
		    	}
		        case 3:{
		        	array Obj;
	                int a[]={3,10,8,55,3};
	                int size=5;
	                               cout <<"array \n\n";
	                cout<<" please enter no 1 .create_array \n";
		            cout<<" please enter no 2 .insert_first \n";
		            cout<<" please enter no 3 .insert_last \n";
		          
		            cout<<" please enter no 4 .delete_first \n";
		            cout<<" please enter no 5 .delete_last \n";
		               
				    cout<<" please enter no 6 .search_array \n";
		            cout<<" please enter no 7 .display_array \n";
		            cout<<"please enter no 8 .sort_up_array\n";
                    cout<<" please enter no 9 .sort_down_array \n";
                    cout<<"please enter no 10 .Max_Min_array \n";
	                
	                int x;
	                
	                cin>>x;
	                switch(x){
	                	case 1:{
	                		cout<<"\tcreate_array:\n";
		                   	Obj.create_array(a);
		                   	
	                       
		                   	break;
	                   }
		               case 2:{
		               	cout<<"\tinsert_first:\n";
					       int item;
	                       cout<<"enter the item to insert_first in array\n";
	                       cin>>item;
	                       Obj.insert_first(a,item,size);
	
	                      
			                break;
		               }
		               case 3:{
		               	cout<<"\tinsert_last:\n";
			               int item;
	                       cout<<"enter the item to insert_last in array\n";
	                       cin>>item;
	                       Obj.insert_last(a,item,size);
	
	                       
			                break;
		               }
		              
		               case 4:{
		               	cout<<"\tdelete_first:\n";
			               Obj.delete_first(a,size);

			    
			                break;
		               }
		               case 5:{
		               	cout<<"\t delete_last:\n";
			               Obj.delete_last(a,size);
			               
			        
			                break;
		               }
		               
		               case 6:{
		               	cout<<"\tsearch_array:\n";
			               int item;
	                       cout<<"enter the item to search in array\n";
	                       cin>>item;
	                       Obj.search_array(a,item,size);
	
			            
			                break;
		               }
		               case 7:{
		               	cout<<"\tdisplay_array:\n";
	                       Obj.display_array(a,size);
	                       
	                
			                break;
		               }
		               case 8:{
		               	cout<<"\tsort_up_array:\n";
		               	   Obj.sort_up_array(a,size);
		               	   Obj.display_array(a,size);
		               	   
		               	   
		               	    break;
		               }
		               case 9:{
		               	cout<<"\tsort_down_array:\n";
		               	   Obj.sort_down_array(a,size);
		               	   Obj.display_array(a,size);
		               	   
		               	   
		               	    break;
		               }
		               case 10:{
		               	cout<<"\tMax_Min_array:\n";
		               	   Obj.Max_Min_array(a,size);
		               	   
		        
		               	    break;
		               }
	                	 
	                	
	                }
		    		break;
		    	}
		    }
		    break;	
	    }
			
		
		case 2: {
	        cout <<"  term 2 \n\n"; 
	        cout<<" please enter number 1 .single_linked_list \n";
		    cout<<" please enter number 2 .double_linked_list \n";
		    cout<<" please enter number 3 .Binary search tree \n";
		    cout<<" please enter number 4 .Graph \n";
		    cout<<" please enter number 5 .Sort \n";
		    
		    
		    int h;
		
		    cin>>h;
		    switch(h){
		    	case 1:{
                    cout <<" Sll \n\n"; 
		            cout<<" please enter number 1 .add_first \n";
		            cout<<" please enter number 2 .add_last \n";
		            cout<<" please enter number 3 .add_after(H.W) \n";
		            cout<<" please enter number 4 .add_before(H.W) \n";
		            cout<<" please enter number 5 .print(H.W) \n";
		            cout<<" please enter number 6 .count \n";
		            cout<<" please enter number 7 .delete_first \n";    
				    cout<<" please enter number 8 .delete_last \n";
		            cout<<" please enter number 9 .delete_N \n";
		            cout<<" please enter number 10 .search(H.W) \n";
		            
		            
		            sll* n =new sll();
	                n->isEmpty();
	
	
	                int x;

	                cin >>x;
	                switch (x){
		               case 1:{
		               	cout<<"\tadd_first:\n";
		               	int size;
	                                  	cout<<"enter the size\n";
	                                  	cin>>size;
	                                  	for(int i=0; i<size; i++){
		                   int inputdata;
	                       cout <<"please inter the data to add first\n";
	                       cin>> inputdata;
	                       n->add_first(inputdata);}
	                       n->print();
	            
		                   	break;
	                   }
		               case 2:{
		               	cout<<"\tadd_last:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
					       int inputdata;
			               cout <<"please inter the data to add last\n";
	                       cin>> inputdata;
	                       n->add_last(inputdata);
	                       n->print();
	                    
			                break;
		               }
		               case 3:{
		               	cout<<"\tadd_after:\n";
			        
			               n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
	                       int inputdata;
			               cout <<"please inter the data to add after a key value \n";
	                       cin>> inputdata;
                           cout <<"please inter the key \n";
	                       int key;
	                       cin>>key;
	                       n->add_after(inputdata,key);
	                       n->print();
	        
			                break;
		               }
		               case 4:{
		               	cout<<"\tadd_before:\n";
			    
			               n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
		                   int inputdata;
			               cout <<"please inter the data to add before a key value \n";
	                       cin>> inputdata;
	                       cout <<"please inter the key \n";
	                       int key;
	                       cin>>key;
	                       n->add_before(inputdata,key);
	                       n->print();
	        
			                break;
		               }
		               case 5:{
		               	cout<<"\tprint:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
			               n->print();
			
			                break;
		               }
		               case 6:{
		               	cout<<"\tcount:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);

			               n->count();
			        
			                break;
		               }
		               case 7:{
		               	cout<<"\tdelete_first:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
	     	               n->delete_first();
	     	               n->print();
	     	            
			                break;
		               }
		               case 8:{
		               	cout<<"\tdelete_last:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
			               n->delete_last();
			               n->print();
			    
			                break;
		               }
		               case 9:{
		               	cout<<"\tdelete_N:\n";
		               	n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
					       int inputdata;
	                       cout <<"please inter the data to delete_N :\n";
	                       cin>> inputdata;
	                       n->delete_N(inputdata);
	                       n->print();
	                       
			                break;
		               }
		               case 10:{
		               	cout<<"\tsearch:\n";
			            
			               n->add_first(10);
			               n->add_last(11);
			               n->add_last(12);
			               n->add_last(13);
			               int key;
			               cout <<"please inter the key to search: \n";
			               cin >>key;
			               n->search( key);
			               
			                break;
		               }
	                }
	                
		    		break; 
		    	}
		    	case 2:{
		            cout <<" Dll\n\n"; 
		            cout<<"please enter number 1 .add_first \n";
		            cout<<" please enter number 2 .add_last \n";
		            cout<<" please enter number 3 .add_after \n";
	            	cout<<" please enter number 4 .add_before \n";
	            	cout<<" please enter number 5 .print \n";
            		cout<<" please enter number 6 .count \n";
            		cout<<" please enter number 7 .delete_first \n";
            		cout<<" please enter number 8 .delete_last \n";
            		cout<<" please enter number 9 .delete_N \n";
            		cout<<" please enter number 10 .search \n";
            		
            		
            		
                    Dll* n =new Dll();
                 	n->isEmpty();
                 	
                 	int x;
            
                 	cin >>x;
                	switch (x){
	                	case 1:{
	                		cout<<"\tadd_first:\n";
	                		int size;
	                                  	cout<<"enter the size\n";
	                                  	cin>>size;
	                                  	for(int i=0; i<size; i++){
                		   int inputdata;
                 	       cout <<"please inter the data to add first\n";
                	       cin>> inputdata;
                 	       n->add_first(inputdata);}
                 	       n->print();
                	    
                   			break;
                 		}
                        case 2:{
                        	cout<<"\tadd_last:\n";
                        	n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
					       int inputdata;
			               cout <<"please inter the data to add last\n";
	                       cin>> inputdata;
	                       n->add_last(inputdata);
	                       n->print();
	                
			                break;
		                }
	                	case 3:{
	                		cout<<"\tadd_after:\n";
	                
	                       n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
	                       int inputdata;
		                   cout <<"please inter the data to add after a key value \n";
	                       cin>> inputdata;
                           cout <<"please inter the key \n";
	                       int key;
	                       cin>>key;
	                       n->add_after(inputdata,key);
	                       n->print();
	                       
			                break;
		                 }
		               case 4:{
		               cout<<"\tadd_before:\n";
		    
		                   n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
                           int inputdata;
			               cout<<"please inter the data to add before a key value \n";
	                       cin>> inputdata;
	                       cout <<"please inter the key \n";
	                       int key;
	                       cin>>key;
	                       n->add_before(inputdata,key);
	                       n->print();
	                       
	                    
			                break;
		                 }
		                 case 5:{
		                 	cout<<"\tprint:\n";
		                 	n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
			                n->print();
			                
			        
			                 break;
		                 }
		                 case 6:{
		                 	cout<<"\tcount:\n";
			
			                n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
			                n->count();
			                
			                
			                  break;
		                 }
		                 case 7:{
		                 	cout<<"\tdelete_first:\n";
		                 	n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
	     	                n->delete_first();
	     	                n->print();
	     	                
			                break;
		                 }
		                 case 8:{
		                 	cout<<"\tdelete_last:\n";
		                 	n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
		                	n->delete_last();
		                	n->print();
		                
		                   	 break;
	                  	 }
		                 case 9:{
		                 	cout<<"\tdelete_N:\n";
		                 	n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
						    int inputdata;
	                        cout <<"please inter the data to delete_N \n";
	                        cin>> inputdata;
	                        n->delete_N(inputdata);
	                        n->print();
	                
			                 break;
		                 }
		                 case 10:{
		                 	cout<<"\tsearch:\n";
			    
			                n->add_first(10);
	                		n->add_first(11);
	                		n->add_first(12);
	                		n->add_first(13);
			                int key;
			                cout <<"please inter the key to search: \n";
			                cin >>key;
			                n->search( key);
			                
			        
			                 break;
		                 }
	                 }
	            
		    		break;
		    	}
		    	case 3:{
		    		Snode *n1 = new Snode (3);
	                Snode*n2= new Snode(2);
	                Snode*n3= new Snode(4);
                	Snode*n4= new Snode(5);
                	Snode*n5= new Snode(1);
               	    BStree*t= new BStree();
                 	n1-> leftchild=n2;
                 	n1-> rightchild=n3;
                	n2-> leftchild=n5;
                	n3-> rightchild=n4;
                    cout<< t->isEmpty();
                    
                 	cout <<"\t\t***** operations on BINARY SEARCH TREE *****\n\n"; 
                     		cout<<"\t\t.... please enter number 1 .preorder ....\n";
                     		cout<<"\t\t.... please enter number 2 .postorder ....\n";
                    		cout<<"\t\t.... please enter number 3 .inorder ....\n";
                     		cout<<"\t\t.... please enter number 4 .levelorder ....\n";
                      		cout<<"\t\t.... please enter number 5 .insert ....\n";
                     		cout<<"\t\t.... please enter number 6 .search ....\n";
                       		cout<<"\t\t.... please enter number 7 .search2 ....\n";
                      		cout<<"\t\t.... please enter number 8 .getMax ....\n";
                    		cout<<"\t\t.... please enter number 9 .getMin ....\n";
        
                    	    cout<<"\t\t.... please enter number 10 .get_leftChild(H.W) ....\n";
                       	    cout<<"\t\t.... please enter number 11 .get_rightChild(H.W) ....\n";
                       	    cout<<"\t\t.... please enter number 12 .External(H.W) ....\n";
                      	    cout<<"\t\t.... please enter number 13 .Internal(H.W) ....\n";
                    	    cout<<"\t\t.... please enter number 14 .Leaves(H.W) ....\n";
                    	    cout<<"\t\t.... please enter number 15 .Perent(H.W) ....\n";
                    	    
                    	    
                    	    int x;
	        
	                        cin >>x;
	                        switch (x){
		                       case 1:{
		                          cout<<"\tpreorder:\n";
	                              t->preorder(n1);
	            
			                       break;
		                       }
		                       case 2:{
			                      cout<<"\tpostorder:\n";
	                              t->postorder(n1);
	                
			                       break;
		                       }
		                       case 3:{
			                      cout <<"\tinorder:\n";
	                              t->inorder(n1);
	                        
			                       break;
		                       }
	                           case 4:{
			                      cout <<"\tlevelorder:\n";
	                              t->levelorder(n1);
	            
			                       break;
		                       }
		                       case 5:{
		                          cout<<"\tinsert:\n";
		                          int d;
		                          cout<<"enter the data insert the tree:\n";
		                          cin>>d;
		                          t->insert(n1,d);
	                        
			                       break;
		                       }
		
		                       case 6:{
			                      cout <<"\tsearch:\n";
			                      int d;
			                      cout<<"enter the number to search:\n";
			                      cin>>d;
	                              t->search(n1,d);
	                    
			                       break;
		                       }
		                       case 7:{
			                      cout <<"\tsearch2:\n";
				                  int key;
			                      cout<<"enter the number to search:\n";
			                      cin>>key;
	                              t->search2(key);
	                            
			                       break;
		                       }
		                       case 8:{
			                      cout <<"\tgetMax:\n";
	                              t->getMax(n1);
	                    
			                       break;
		                       }
		                       case 9:{
			                      cout <<"\tgetMin:\n";
	                              t->getMin(n1);
	            
			                       break;
		                       }
		                       case 10:{
			                      cout <<"\tget_leftChild:\n";
	                              t->get_leftChild(n1);
	                
			                       break;
		                       }
		                       case 11:{
			                      cout <<"\tget_rightChild:\n";
	                              t->get_rightChild(n1);
	                    
			                       break;
		                       }
		                       case 12:{
			                      cout <<"\tExternal:\n";
	                              t->External(n1);
	                
			                       break;
		                       }
		                       case 13:{
			                      cout <<"\tInternal:\n";
	                              t->Internal(n1);
	                              
			                       break;
		                       }
		                       case 14:{
			                     cout <<"\tLeaves:\n";
	                             t->Leaves(n1);
	                    
			                      break;
		                       }
		                       case 15:{
			                     cout <<"\tPerent:\n";
	                             t->Perent(n1);
	                        
			                      break;
			                   }
		                    }  
		    		break;
		    	}
		    	case 4:{
		    	    int n;
	                cout<<"please enter number vertix\n";
                    cin >>n;
            
	                Graph* G= new Graph(n);
		            cout <<"Graph \n\n"; 
		            cout<<"please enter number 1 .add_Vertix\n";
		            cout<<"please enter number 2 .check vertix insertion \n";
		            cout<<"please enter number 3 .add_Edge\n";
		            cout<<"please enter number 4 .print_Edge\n";
		            cout<<"please enter number 5 .check edge insertion(print_all_Edge)\n";
		            cout<<"please enter number 6 .search\n";
		            cout<<"please enter number 7 .DFS\n";
		            cout<<"please enter number 8 .BFS\n";
		    
		            cout<<"please enter number 9 .delete_vertix \n";
		            cout<<"please enter number 10 .delete_edge \n";
	
	                int x;
	            
	                cin>>x;
	                switch (x){
		                case 1:{
		                    cout<<"\tadd_Vertix\n";
		
		                    G->add_Vertix(10);
		                    G->add_Vertix(11);
		                    G->add_Vertix(12);
		    
	            
			                 break;
		                }
		                 case 2:{
		                     cout<<"\tthe array element:\n";
			
		                     G->add_Vertix(10);
		                     G->add_Vertix(11);
	                  	     G->add_Vertix(12);
	 	
	                         for(int i=0; i<G->count; i++){
		                         cout<<G->array[i]->firstVertix->data<<",";
	                         }
	                          cout<<endl;
			
			                  break;
		                 }
                         case 3:{
                        	cout<<"\tadd_Edge\n";
			
         	                G->add_Vertix(10);
		                    G->add_Vertix(11);
		                    G->add_Vertix(12);
			
			                G->add_Edge(10,0,11,1);
	    	                G->add_Edge(11,1,12,2);
	    	                G->add_Edge(12,2,10,0);
		
	                    
			                 break;
		                 }
		                 case 4:{
			                cout<<"print_Edge in the vertix :"<<n<<"\n\n";
			
			                G->add_Vertix(10);
		                    G->add_Vertix(11);
		                    G->add_Vertix(12);
			
			                G->add_Edge(10,0,11,1);
	    	                G->add_Edge(11,1,12,2);
	    	                G->add_Edge(12,2,10,0);
	    	
		                    G->print_Edge(n);
		    
	        
			                 break;
		                 }
		                 case 5:{
			                cout<<"\tprint_all_Edge\n\n";
			                G->add_Vertix(10);
		                    G->add_Vertix(11);
		                    G->add_Vertix(12);
			
			                G->add_Edge(10,0,11,1);
	    	                G->add_Edge(11,1,12,2);
	    	                G->add_Edge(12,2,10,0);
	    	
		  	                for (int i=0; i<G->count; i++){
		                          cout<<" the edge of Vertix at index"<<i<<"=";
		                          G->print_Edge(i);
		                          cout<<endl;
		                      }
	                    
			                       break;
		                 }
		                 case 6:{
			                 cout <<"\tsearch:\n";
			
			                 G->add_Vertix(10);
		                     G->add_Vertix(11);
		                     G->add_Vertix(12);
		    
		                     G->add_Edge(10,0,11,1);
	    	                 G->add_Edge(11,1,12,2);
	    	                 G->add_Edge(12,2,10,0);
		    
			                 int d;
			                 cout<<"enter the number to search:\n";
			                 cin>>d;
			
	                         G->search(d);
	        
	            
			                  break;
		                 }
		                 case 7:{	
			                 cout <<"\tDFS:\n";
			
			                 G->add_Vertix(10);
		                     G->add_Vertix(11);
		                     G->add_Vertix(12);
		    
		                     G->add_Edge(10,0,11,1);
	    	                 G->add_Edge(11,1,12,2);
	    	                 G->add_Edge(12,2,10,0);
	    	
	    	                 G->DFS(G->array[0]->firstVertix);
		                     G->reset(G);

	                        
			                  break;
		                 }
		                 case 8:{
			                 cout <<"\t\tBFS:\n";
			
			                 G->add_Vertix(10);
		                     G->add_Vertix(11);
		                     G->add_Vertix(12);
		    
		                     G->add_Edge(10,0,11,1);
	    	                 G->add_Edge(11,1,12,2);
	    	                 G->add_Edge(12,2,10,0);
	        
	                         G->BFS(G->array[0]->firstVertix);
		                     G->reset(G);
		
	        
			                  break;
		                 }
		                 case 9:{
			                 cout <<"\tdelete_vertix:\n";
			
	                         G->add_Vertix(10);
		                     G->add_Vertix(11);
		                     G->add_Vertix(12);
		    
		                     G->add_Edge(10,0,11,1);
	    	                 G->add_Edge(11,1,12,2);
	    	                 G->add_Edge(12,2,10,0);
	    	
	                         int key;
	                         cout<<"please enter the number Vertix to delete\n";
	                         cin>> key;
	        
	                         G->delete_vertix(key);
	           
	                    
			                  break;
		                 }
		                 case 10:{
			                 cout <<"\tdelete_edge:\n";
			
	                         G->add_Vertix(10);
		                     G->add_Vertix(11);
		                     G->add_Vertix(12);
		    
		                     G->add_Edge(10,0,11,1);
	    	                 G->add_Edge(11,1,12,2);
	    	                 G->add_Edge(12,2,10,0);
	    	
	                         int d;
	                         cout<<"please enter the number vertix \n";
	                         cin>> d;
	                         int n;
	                         cout<<"please enter the number edge to delete\n";
	                         cin>> n;
	        
	                         G->delete_edge(d,n);
	           
	                        
			                  break;
		                 }
                    }
                      
		    		break;
			    }
		    
		    	case 5:{
		    			Sort Obj;
		    			
	               cout <<"Sort \n\n"; 
		           cout<<" please enter number 1 .Search_Sort \n";
		           cout<<" please enter number 2 .bubble_Sort \n";
		           cout<<"please enter number 3 .selection_Sort \n";
		           
		           
		           int x;
	        
	               cin >>x;
	               switch (x){
		               case 1:{
			              cout <<"\tSearch_Sort:\n";
		                  int array1[]={ 10,11,14,16,17,19,22,33,55,56};
		                  int key;
		                  cout<<"enter the element to search\n";
		                  cin>>key;
		                  
		                  Obj.Search_Sort(array1,10,key);
		                  
		            
			               break;
		               }
		               case 2:{
			              cout <<"\tbubble_Sort:\n";
			              int array2[]={ 10,14,11,6,17,19,22,55,50,59};
	                      Obj.bubble_Sort(array2, 10);
	        
	            
			               break;
		               }
		               case 3:{
			              cout <<"\tselection_Sort:\n";
	                      int array3[]={10,14,11,6,17,19,22,55,50,59};
	                      Obj.selection_Sort(array3,10);
	        
	                      
			               break;
		               }
	               }
		    		break;
		    	}
		    	
		    }
		    
			break;
	    }	
    }
}

	
