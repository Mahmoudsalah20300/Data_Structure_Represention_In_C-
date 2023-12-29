#include <iostream>

// Node class represents each element in the linked list
template <typename T>
class Node {
public:
    T data;
    Node* next;

    // Constructor to initialize data and next pointer
    Node(T value) : data(value), next(nullptr) {}
};

// LinkedList class manages the linked list
template <typename T>
class Linked_List {
private:
    Node<T>* head; // Pointer to the first node in the list

public:
    // Constructor initializes an empty list
    Linked_List() : head(nullptr) {}

    // Destructor to free memory when the list is destroyed
    ~Linked_List() {
        clear();
    }

    // Function to insert a new node with the given value at the beginning of the list
    void Insert_at_beginning(T value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a new node with the given value at the end of the list
    void Insert_in_End(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (!head) {
            // If the list is empty, set the new node as the head
            head = newNode;
        }
        else {
            // Traverse the list to find the last node and append the new node
            Node<T>* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Function to insert a new node with the given value after a specific node
    void Insert_at_node(T value, T afterValue) {
        Node<T>* newNode = new Node<T>(value);
        Node<T>* current = head;

        // Find the node with the specified value
        while (current && current->data != afterValue) {
            current = current->next;
        }

        // Insert the new node after the found node
        if (current) {
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to delete the node at the beginning of the list
    void Delete_at_beginning() {
        if (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to delete the node at the end of the list
    void Delete_in_End() {
        if (!head) {
            return;
        }

        if (!head->next) {
            // If there is only one node, delete it and set head to null
            delete head;
            head = nullptr;
        }
        else {
            // Traverse the list to find the second-to-last node
            Node<T>* current = head;
            while (current->next->next) {
                current = current->next;
            }

            // Delete the last node and set the next of the second-to-last node to null
            delete current->next;
            current->next = nullptr;
        }
    }

    // Function to delete the node with the given value
    void Delete_at_node(T value) {
        if (!head) {
            return;
        }

        if (head->data == value) {
            // If the node to be deleted is the first node
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            // Traverse the list to find the node before the node to be deleted
            Node<T>* current = head;
            while (current->next && current->next->data != value) {
                current = current->next;
            }

            // Delete the node if found
            if (current->next) {
                Node<T>* temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
        }
    }

    // Function to search for the element in the linked list
    bool Search_for_the_element(T value) {
        Node<T>* current = head;
        while (current) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Function to display the elements of the linked list
    void Display_Elements() {
        Node<T>* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to remove all elements from the linked list
    void clear() {
        while (head) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    // Example usage of the Linked_List class
    Linked_List<int> myList;

    myList.Insert_at_beginning(1);
    myList.Insert_in_End(2);
    myList.Insert_in_End(3);
    myList.Insert_at_node(4, 2);

    std::cout << "Linked List: ";
    myList.Display_Elements();

    myList.Delete_at_beginning();
    myList.Delete_in_End();
    myList.Delete_at_node(2);

    std::cout << "Linked List after deletion: ";
    myList.Display_Elements();

    int searchValue = 4;
    if (myList.Search_for_the_element(searchValue)) {
        std::cout << searchValue << " found in the Linked List.\n";
    }
    else {
        std::cout << searchValue << " not found in the Linked List.\n";
    }
    return 0;
}