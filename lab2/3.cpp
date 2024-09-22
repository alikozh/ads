#include <iostream>
using namespace std;

// Структура для узла связного списка
struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

// Класс для односвязного списка
class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Добавление элемента в конец списка
    void add(int val) {
        if (!head) {
            head = new Node(val);
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new Node(val);
        }
    }

    // Удаление каждого второго элемента
    void deleteEverySecond() {
        if (!head || !head->next) return;

        Node* current = head;
        Node* prev = nullptr;

        int count = 1;
        while (current) {
            if (count % 2 == 0) {
                // Удаление узла
                prev->next = current->next;
                delete current;
                current = prev->next;
            } else {
                prev = current;
                current = current->next;
            }
            count++;
        }
    }

    // Вывод элементов списка
    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int N;
    cin >> N;

    LinkedList list;

    // Ввод элементов
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        list.add(val);
    }

    // Удаление каждого второго элемента
    list.deleteEverySecond();

    // Вывод оставшихся элементов
    list.printList();

    return 0;
}