 #include<iostream>
 using namespace std;
 #define n 100

 class Stack{
     int* arr; //dynamic arr
    int top;

    public:
    Stack(){  //constructor
       arr=new int[n]; // allocating memeory
    top = -1;
    }


    void push (int x){
        if(top==n-1){  //last index!
            cout<<"stack overflow"<<endl;
            return;
        }
         top++;
         arr[top] = x;
    }

    void pop(){
        if (top== -1){ // empty
        cout<<"no element to pop, stack underflow"<<endl;
        return;
        }
        top--;
    }

    int peak(){
        if (top== -1){ // empty
        cout<<"no element to pop,empty, stack underflow"<<endl;
        return -1;

        }
        return arr[top]; //return integer value of top

    }

    bool empty(){
        return top==-1; //if stack empty, return true

    }

    int Size(){
        return top;
    }

 };

 int main(){
   Stack s;
   s.push(1);
   s.push(3);
   s.push(5);
   cout<<s.peak()<<endl;
s.pop();
  cout<<s.peak()<<endl;
  s.pop();
   s.pop();
    
   cout<<s.empty()<<endl;
   s.push(98);
   s.push(99);
   s.push(97);
   s.push(96);
   s.push(94);
   cout<<s.Size();
     return 0;
 }