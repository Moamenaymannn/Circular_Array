#include <iostream>
using namespace std;


class Queue{ 
private:         
int* items;
int front;
int rear;
int size;

public:
          Queue(int _size){ 
                    size =_size;
                    items =new int[_size];
                    front=rear=-1;
          }


          int Empty(){  
                    if(front == -1 && rear == -1){
                    return 1; }
                    return 0;
          }

          int Full(){  
                    if(front == 0 && rear == size-1){ 
                              return 1;
                    }
                    if(rear == front-1  ){ 
                              return 1;
                    }
                    return 0;
          }

          int Enqueue(int data){ 
                    if(Full()){ 
                              return 0;
                              cout<<"Queue FULL"<<endl;
                    }
                    if(Empty()){ 
                              front=rear=0;                                                          
                    }
                    else if( rear == size-1 && front != 0){ 
                              rear=0;                            
                    }
                    else{
                              rear++;
                    }
                    items[rear]=data;
                   cout<<"Data\t"<< items[rear] <<endl;
                    return 1;
          }

          int Dequeue(){ 
                    

                    if(Empty()){ 
                              cout<<"Queue Empty"<<endl;
                              return 0;                            
                    }  
                    int data = items[front];               
                    if(rear == front){ 
                              rear=front=-1;
                    }
                    if(front == size-1){ 
                              front = 0;
                    }
                    else{ 
                              front++;
                    }

                    return data;
          }
};


int main(){ 
     
     Queue q(5);
     q.Enqueue(10);
     q.Enqueue(20);
     q.Enqueue(30);

     q.Dequeue();





return 0;
}