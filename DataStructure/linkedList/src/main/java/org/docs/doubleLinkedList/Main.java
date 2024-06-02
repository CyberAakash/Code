package org.docs.doubleLinkedList;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("---------- x ------------------ x ---------");
        System.out.println("---------- x Double Linked List x ---------");
        System.out.println("---------- x ------------------ x ---------");
        Scanner sc = new Scanner(System.in);
        int choice ;
        do {
            System.out.println("---------- x 1. Insert Node at End");
            System.out.println("---------- x 2. Insert Node at Front");
            System.out.println("---------- x 3. Insert Node at Position");
            System.out.println("---------- x 4. Insert Node at Middle");
            System.out.println("---------- x 5. Delete Node at End");
            System.out.println("---------- x 6. Insert Node at Front");
            System.out.println("---------- x 7. Delete Node at Position");
            System.out.println("---------- x 8. Delete Node at Middle");
            System.out.println("---------- x 9. Reverse List");
            System.out.println("---------- x 10. Print Node");
            System.out.println("---------- x 11. Exit [ Press -1 ]");
            System.out.println("---------- x Choose your option: ");
            choice = sc.nextInt();

            switch(choice) {
                case 1:
                    insertEnd(sc);
                    break;

                case 2:
                    insertFront(sc);
                    break;

                case 3:
                    insertByPosition(sc);
                    break;

                case 4:
                    insertMiddle(sc);
                    break;

                case 5:
                    deleteEnd(sc);
                    break;

                case 6:
                    deleteFront(sc);
                    break;

                case 7:
                    deleteByPosition(sc);
                    break;

                case 8:
                    deleteMiddle(sc);
                    break;

                case 9:
                    reverseList(sc);
                    break;

                case 10:
                    displayList(sc);
                    break;

                case -1:
                    System.out.println("---------- x ------------- x ---------");
                    System.out.println("---------- x See you Again x ---------");
                    System.out.println("---------- x ------------- x ---------");
                    System.exit(0);

                default:
                    System.out.println("---------- x Wrong Choice !");
                    break;

            }

        } while(choice != -1);
        sc.close();
    }

    private static void reverseList(Scanner sc) {
        Node curr = Node.head;

        Node prev = null;
        Node next = null;

        while(curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        Node.head = prev;

    }

    private static void displayList(Scanner sc) {
        if(Node.head == null) {
            System.out.println("---------- x List is Empty");
            return;
        }

        Node temp = Node.head;
        System.out.println("---------- x Printing List");
        while(temp != null) {
            System.out.printf("Value : %d\n", temp.data);
            temp = temp.next;
        }
    }

    private static void deleteMiddle(Scanner sc) {
        if(Node.head == null) {
            System.out.println("---------- x List is Empty x Deleting Head");
            return;
        }

        Node prev = null;
        Node slow = Node.head;
        Node fast = Node.head;

        while(fast != null && fast.next != null) {
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;
        }

        if (prev == null) {
            Node.head = null;
        } else {
            prev.next = slow.next;
        }
    }

    private static void deleteByPosition(Scanner sc) {
        System.out.println("---------- x Enter Position: ");
        int pos = sc.nextInt();

        if(Node.head == null) {
            System.out.println("---------- x List is Empty x Deleting Head");
            return;
        }

        if(pos  == 1) {
            Node.head = Node.head.next;
            return;
        }

        Node temp = Node.head;
        int curr = 0;
        while(temp.next != null && curr != pos - 2) {
            temp = temp.next;
            curr++;
        }

        if(temp == null || temp.next == null) {
            System.out.println("---------- x Invalid Position !");
        } else {
            temp.next = temp.next.next;
        }

    }

    private static void deleteFront(Scanner sc) {
        if(Node.head == null) {
            System.out.println("---------- x List is Empty x ---------");
            return;
        }

        Node.head = Node.head.next;
    }

    private static void deleteEnd(Scanner sc) {
        if(Node.head == null) {
            System.out.println("---------- x List is Empty x ---------");
            return;
        }

        Node prev = null;
        Node temp = Node.head;
        while(temp.next != null) {
            prev = temp;
            temp = temp.next;
        }

        if (prev == null) {
            Node.head = null;
        } else {
            prev.next = null;
        }
    }

    private static void insertMiddle(Scanner sc) {
        System.out.println("---------- x Enter Value: ");
        int val = sc.nextInt();

        if(Node.head == null) {
            System.out.println("---------- x List is Empty x ---------");
            Node.head = new Node(val);
            return;
        }

        Node newNode = new Node(val);

        Node slow = Node.head;
        Node fast = Node.head;

        while(fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        if (slow.prev == null) {
            newNode.next = Node.head;
            Node.head.prev = newNode;
            Node.head = newNode;
        } else {
            newNode.next = slow;
            newNode.prev = slow.prev;
            slow.prev.next = newNode;
            slow.prev = newNode;
        }

    }

    private static void insertByPosition(Scanner sc) {
        System.out.println("---------- x Enter Position: ");
        int pos = sc.nextInt();

        System.out.println("---------- x Enter Value: ");
        int val = sc.nextInt();

        if(Node.head == null) {
            System.out.println("---------- x List is Empty x Inserting at Start");
            Node.head = new Node(val);
            return;
        }
        Node newNode = new Node(val);

        if(pos < 1) {
            System.out.println("---------- x Invalid Position !");
            return;
        }

        if(pos == 1) {
            newNode.next = Node.head;
            Node.head.prev = newNode;
            newNode.prev = null;
            Node.head = newNode;
            return;
        }

        Node temp = Node.head;
        Node prev = temp.prev;
        int curr = 1;
        while(temp != null && curr != pos) {
            prev = temp;
            temp = temp.next;
            curr++;
        }
        if(curr == pos && temp == null) {
//          insert At End
            prev.next = newNode;
            newNode.prev = prev;
            return;
        }
        if(curr == pos && temp != null) {
            prev = temp.prev;
            newNode.next = temp;
            newNode.prev = prev;
            prev.next = newNode;
            temp.prev = newNode;
        }  else {
            System.out.println("---------- x Invalid Position !");
        }

    }

    private static void insertFront(Scanner sc) {
        System.out.println("---------- x Enter Value: ");
        int val = sc.nextInt();

        if(Node.head == null) {
            System.out.println("---------- x List is Empty x ---------");
            Node.head = new Node(val);
            return;
        }

        Node newNode = new Node(val);
        Node temp = Node.head;
        newNode.next = temp;
        temp.prev = newNode;
        Node.head = newNode;
    }

    private static void insertEnd(Scanner sc) {
        System.out.println("---------- x Enter Value: ");
        int val = sc.nextInt();

        if(Node.head == null) {
            System.out.println("---------- x List is Empty x ---------");
            Node.head = new Node(val);
            return;
        }

        Node newNode = new Node(val);
        Node temp = Node.head;
        while(temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
        newNode.prev = temp;
    }

}
