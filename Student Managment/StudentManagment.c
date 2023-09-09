#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 99

struct node {
    int rno;
    char sname[max];
    char subject[max];
    int marks;
    struct node* next, *prev;
};

typedef struct node NODE;

void insert(NODE** head);
void display_list(NODE* head);
void modify(NODE* head);
void delete(NODE** head);
void menu(NODE** head);

int main() {
    NODE* head = NULL;

    printf("\t\t\t\t\t\t_____________________________\n");
    printf("\t\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("\t\t\t\t\t\t|~~~~~~~~WELCOME~~~~~~~~~~~~|\n");
    printf("\t\t\t\t\t\t|~~~~~~~~ABC School~~~~~~~~~|\n");
    printf("\t\t\t\t\t\t|~~~~~~~~PUNE~~~~~~~~~~~~~~~|\n");
    printf("\t\t\t\t\t\t|~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("\t\t\t\t\t\t|___________________________|\n");
    printf("1. Login\n2. Change Password\n3. Exit\n");
    
    int v;
    char pas1[max], pas2[] = "password";
    
    scanf("%d", &v);
    
    switch (v) {
        case 1:
            printf("Enter password: ");
            scanf("%s", pas1);
            if (strcmp(pas1, pas2) == 0) {
                menu(&head);
            } else {
                exit(-10);
            }
            break;
        case 2:
            printf("Enter previous password: ");
            scanf("%s", pas1);
            if (strcmp(pas1, pas2) == 0) {
                printf("Enter new password: ");
                scanf("%s", pas2);
            } else {
                exit(-9876);
            }
            break;
        case 3:
            exit(-99);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

void insert(NODE** head) {
    NODE* temp = (NODE*)malloc(sizeof(NODE));
    if (temp == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter Student data (Roll no, Name, Subject, Marks): ");
    scanf("%d %s %s %d", &temp->rno, temp->sname, temp->subject, &temp->marks);

    temp->next = NULL;
    temp->prev = NULL;

    if (*head == NULL) {
        *head = temp;
    } else {
        NODE* last = *head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
        temp->prev = last;
    }
}

void display_list(NODE* head) {
    if (head == NULL) {
        printf("List is Empty\n");
    } else {
        NODE* ptr = head;
        while (ptr != NULL) {
            printf("Roll: %d, Name: %s, Subject: %s, Marks: %d\n",
                   ptr->rno, ptr->sname, ptr->subject, ptr->marks);
            ptr = ptr->next;
        }
    }
}

// Implement modify and delete functions similarly

void menu(NODE** head) {
    int ch;

    while (1) {
        printf("\t\t\t\t\t\t**************\n");
        printf("\t\t\t\t\t\tMenu\n");
        printf("\t\t\t\t\t\t**************\n");
        printf("1. Enter new Student\n2. Delete Student\n3. Modify Student\n4. Display Student list\n5. Logout\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                insert(head);
                break;
            case 2:
                delete(head);
                break;
            case 3:
                modify(*head);
                break;
            case 4:
                display_list(*head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}
void modify(NODE* head) {
    int crn;
    printf("Enter student rollno: ");
    scanf("%d", &crn);

    NODE* ptr = head;
    while (ptr != NULL) {
        if (ptr->rno == crn) {
            printf("Enter Student data (Name, Subject, Marks): ");
            scanf("%s %s %d", ptr->sname, ptr->subject, &ptr->marks);
            return;
        }
        ptr = ptr->next;
    }

    printf("Student with roll number %d not found.\n", crn);
}
void delete(NODE** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    } else {
        int crn;
        printf("Enter student rollno: ");
        scanf("%d", &crn);
        
        NODE* temp = *head;
        while (temp != NULL) {
            if (temp->rno == crn) {
                if (temp->prev != NULL) {
                    temp->prev->next = temp->next;
                } else {
                    *head = temp->next;
                }

                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
                
                free(temp);
                printf("Student with roll number %d deleted.\n", crn);
                return;
            }
            temp = temp->next;
        }

        printf("Student with roll number %d not found.\n", crn);
    }
}
