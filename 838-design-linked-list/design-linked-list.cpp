class Node {
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = nullptr;
    }
    
    int get(int index) {
        Node* current = head;
        for (int i = 0; i < index; i++) {
            if (current == nullptr) {
                return -1;
            }
            current = current->next;
        }
        if (current == nullptr) return -1;

        return current->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* ptr = head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* ptr = head;
        for (int i = 0; i < index - 1; i++) {
            if (ptr == nullptr) return;
            ptr = ptr->next;
        }
        if (ptr == nullptr) return;
        Node* newNode = new Node(val);
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr) return;
        if(index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            if (current == nullptr) return;
            current = current->next;
        }

        if (current == nullptr || current->next == nullptr) {
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }
};