struct Node{
    int val;
    Node* next;
    Node(int x){
        val = x;
        next = nullptr;
    } 
};

class MyLinkedList {
    Node* head;
    int size;
public:
    MyLinkedList() {
        head = new Node(0);
        size = 0;
    }
    
    int get(int index) {
        if(index<0) return -1;
        if(index>=size) return -1;

        Node* curr = head;
        for(int i=0; i<=index ; i++){
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    void addAtTail(int val) {
         addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index<0) return;
        if(index>size) return;

        Node* curr = head;
        for(int i=0; i<index; i++){
            curr = curr->next;
        }
        Node* newnode = new Node(val);
        newnode->next = curr->next;
        curr->next = newnode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0) return;
        if(index>=size) return;

        Node* curr = head;
        for(int i=0; i<index ; i++){
            curr = curr->next;
        }
        Node* target = curr->next;
        curr->next = target->next;
        delete target;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */