#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int id_val) {
    id = id_val;
    cout << "adding " << id << endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<id<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node data:"<<id<<endl;
 }
void NODE::insert(NODE*& x){
     x->next=this;

     }

/*void highestGPA(NODE* x){
    
    if (!x) return; 
    
    NODE* max_node = x; 
    NODE* current = x->move_next(); 
    
    while (current != NULL) {
        if (current->gpa > max_node->gpa) {
            max_node = current;
        }
        current = current->move_next();
    }
    max_node->show_node();     
}*/