#include <iostream>
#include <string.h>
#include <stdexcept>

using namespace std;

void debug(string msg){
    cout << "DEBUG: " << msg << endl;
}

/*
    A Node of an LinkedList. 

    Nodes are never returned by functions
 */

struct Node {
        
    const char* label = NULL;
    Node* next = NULL;
};

/** Holds only one pointer to the first node
*/
struct LinkedList {

    Node* head = NULL;
};


// LinkedList - returns a NEW empty LinkedList

LinkedList* init(){
    // write 

    LinkedList* out = new LinkedList;
    
    return out;

};

/** Return true if the list is empty, false otherwise            
*/
bool is_empty(LinkedList* ll){
    // write here
    if (ll->head==NULL) return true;
    else return false; 
}

/** Adds item at the beginning of the list   
*/                
void add(LinkedList* ll, const char * label){    
    debug(string("adding ") + label );

    // write here
    Node* newelement = new Node;
    newelement->label = label;
    newelement->next = ll->head;

    ll->head = newelement;
    

}


/** For potentially complex data structures like this one, having a to_string function 
 *  is essential to  quickly inspect the label by printing it. 
 * 
 *  Note string to return has c++ type  string 
 * 
 *  - To initialize a c++ string, you can just set it to some like
 * 
 *      string s = "some characters"
 * 
 *  - To augment the string, you can write:
 * 
 *      s += "some characters"
*/
string to_string(LinkedList* ll) {
            
    // write here

    Node* current = ll->head;
    string display;

    while (current != NULL){
        // fai qualcosa con current
        //current->label

        display += (string(current->label) + ", ");

        current = current->next;
    }

    return string("LinkedList:") + display;
}

/**  Returns the size of the list 
 */
int size(LinkedList* ll){
    
    // write here
    Node* element = ll->head;
    int count = 0;
    while(element!=NULL){
        count++;
        element = element->next;
    }
    return count;
} 

/**
 *  Returns true if label is present in list, false otherwise              
*/
bool search(LinkedList* ll, const char * label){
                
    // write here
    Node* temp = ll->head;

    while (temp!=NULL){
        if (string(temp->label)==string(label)) return true;
        else temp = temp->next;
    }

    return false;
}

/*
    Removes the last item of the list, and returns its label

    - If the list is empty, write

        throw std::invalid_argument( "empty list!" );

      to stop function (and program) excecution (needs #include <stdexcept>)
*/        

const char* pop(LinkedList* ll){

    // write here    
    debug("popping last item...");

    Node* temp = ll->head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    const char * letter = temp->label;
    delete temp;
    temp = NULL;
    cout << "smt" << endl;
    return letter;
}

/*
    Deletes all nodes in the chain    
    Careful about deletion order!
*/


void destroying(Node* elemento){    
    
    // write here
    if (elemento!=NULL) destroying(elemento->next);
    else delete elemento;
    

}


void destroy(LinkedList* ll){    
    
    Node* elemento = ll->head;
    // write here
    destroying(elemento);
    

}


int main(int, char**) {

    LinkedList* ll = init();

    add(ll, "a");
    add(ll, "b");
    add(ll, "c");

        
    cout << to_string(ll) << endl;

    cout << "size:" << size(ll) << endl;

    add(ll, "d");

    cout << to_string(ll) << endl;

    cout << "size:" << size(ll) << endl;


    cout << "search(ll,\"a\"): " << (search(ll, "a") ? "true" : "false") << endl;

    cout << "search(ll,\"z\"): " << (search(ll, "z")  ? "true" : "false") << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;
    
    cout << pop(ll) << endl;    

    cout << to_string(ll) << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;

    cout << pop(ll) << endl;    
    
    cout << to_string(ll) << endl;

    // to test exception
    // cout << pop(ll) << endl;            

    destroy(ll);

    cout << "destroyed"  << endl;    

} 
   

/* OUTPUT ATTESO

DEBUG: adding a
DEBUG: adding b
DEBUG: adding c
LinkedList: c,b,a
size:3
DEBUG: adding d
LinkedList: d,c,b,a
size:4
search(ll,"a"): true
search(ll,"z"): false
DEBUG: popping last item...
a
LinkedList: d,c,b
DEBUG: popping last item...
b
LinkedList: d,c
DEBUG: popping last item...
c
LinkedList: d
DEBUG: popping last item...
d
LinkedList:
destroyed

*/