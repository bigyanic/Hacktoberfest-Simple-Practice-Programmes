#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node *ptr, *newptr, *head = NULL;

struct node* getnode() {
    struct node *np;
    np = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to store: ");
    scanf("%d", &np->info);
    np->next = NULL;
    return np;
};

void create() {
    char choice;
    struct node *last;
    do {
        newptr = getnode();
        if(head == NULL) head = newptr;
        else last->next = newptr;
        last = newptr;
        fflush(stdin);
        printf("Want to add more (y or n): ");
        scanf("%c", &choice);
    } while(choice == 'Y' || choice == 'y');
    printf("\n Created a linked list successfully \n");
}

void insert() {
    int choice;
    while(1) {
        system("cls");
        printf("\t\t*********** Insertion Menu ***************");
        printf("\n\t\t1. At front \n\t\t2. At end \n\t\t3. At anywhere \n\t\t4. Back to main menu \n\t\t  Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                {
                    newptr = getnode();
                    newptr->next = head;
                    head = newptr;
                    printf("\n\t\tNode inserted at front! \n press any key to continue");
                    getch();
                }
                break;
            case 2:
                {
                    newptr = getnode();
                    ptr = head;
                    while(ptr->next != NULL) ptr = ptr->next;
                    ptr->next = newptr;
                    printf("\n\t\tNode inserted at end! \n press any key to continue");
                    getch();
                }
                break;
            case 3:
                {
                    int key;
                    printf("Enter the key after which you want to add node: ");
                    scanf("%d", &key);
                    newptr = getnode();
                    ptr = head;
                    while(ptr != NULL && ptr->info != key) ptr = ptr->next;
                    if(ptr == NULL) printf("Key you entered doesnot exist!!\n");
                    else {
                        newptr->next = ptr->next;
                        ptr->next = newptr;
                    }
                    printf("\n\t\tNode inserted after key %d! \n press any key to continue", key);
                    getch();
                }
                break;
            case 4:
                return;
                break;
            default:
                printf("No such choice!!");
                getch();
        }
    }
}

void Delete() {
    int choice;
    while(1) {
        system("cls");
        printf("\n\t\t1. At front \n\t\t2. At end \n\t\t3. At anywhere \n\t\t4. Exit \n\t\t  Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                {
                    ptr = head;
                    head = head->next;
                    free(ptr);
                    printf("\n\t\tNode deleted at front! \n press any key to continue");
                    getch();
                }
                break;
            case 2:
                {
                    struct node *prevptr;
                    ptr = head;
                    while(ptr->next != NULL) {
                            prevptr = ptr;
                            ptr = ptr->next;
                    }
                    prevptr->next = NULL;
                    free(ptr);
                    printf("\n\t\tNode deleted at end! \n press any key to continue");
                    getch();
                }
                break;
            case 3:
                {
                    int key;
                    struct node *prevptr;
                    printf("Enter the key for node which you want to delete node: ");
                    scanf("%d", &key);
                    ptr = head;
                    while(ptr != NULL && ptr->info != key) {
                        prevptr = ptr;
                        ptr = ptr->next;
                    }
                    if(ptr == NULL) printf("Key you entered doesnot exist!!\n");
                    else {
                        prevptr->next = ptr->next;
                        free(ptr);
                    }
                    printf("\n\t\tNode deleted with key %d! \n press any key to continue", key);
                    getch();
                }
                break;
            case 4:
                return;
            default:
                printf("No such choice!!");
                getch();
        }
    }
}

void display() {
    system("cls");
    if(head == NULL) printf("Linked List is empty!!\n");
    else {
        ptr = head;
        while(ptr != NULL) {
            printf("\t\t%d \n", ptr->info);
            ptr = ptr->next;
        }
    }
    printf("\t\tEnter any key to continue!");
    getch();
}

int main() {
    int choice;
    create();
    while(1){
        system("cls");
        printf("\t\t************** Singly Linked List ***************");
        printf("\n\t\t1. Insert \n\t\t2. Delete \n\t\t3. Display \n\t\t4. Exit \n\t\t  Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("No such choice!!");
                getch();
        }
    }
}