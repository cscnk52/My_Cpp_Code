#include <iostream>
using namespace std;
struct student {
    int score;
    string num, name;
    student* next = nullptr;
};

student* head = nullptr, * tail = nullptr, * p;

void insert_sort(student* head) {
    student* p = head, * q = head->next;
    while (q->next != nullptr) {
        p->next = q->next;
        student* pp = head, * qq = head->next;
        while (pp->score<q->score && qq->score>q->score) {
            
        }
    }
}

int main() {
    int t;
    string num, name;
    int score;
    while (~scanf("%d", &t)) {
        head = new student;
        cin >> head->num >> head->name >> head->score;
        p = head;
        while (--t) {
            tail = new student;
            cin >> tail->num >> tail->name >> tail->score;
            p->next = tail;
            p = tail;
        }
        return 0;
    }
}