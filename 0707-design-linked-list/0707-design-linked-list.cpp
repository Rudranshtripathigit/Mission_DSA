class MyLinkedList {
public:

    struct Node {
        int val;
        Node* prev;
        Node* next;

        Node(int val) {
            this->val = val;
            prev = NULL;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }

        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        Node* newNode = new Node(val);

        newNode->prev = curr->prev;
        newNode->next = curr;

        curr->prev->next = newNode;
        curr->prev = newNode;

        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* temp = head;

            if (size == 1) {
                head = NULL;
                tail = NULL;
            }
            else {
                head = head->next;
                head->prev = NULL;
            }

            delete temp;
            size--;
            return;
        }

        if (index == size - 1) {
            Node* temp = tail;

            tail = tail->prev;
            tail->next = NULL;

            delete temp;
            size--;
            return;
        }

        Node* curr = head;

        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }

        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;

        delete curr;
        size--;
    }
};