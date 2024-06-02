package org.docs.doubleLinkedList;

public class Node {
    int data;
    Node prev;
    Node next;

    public static Node head = null;

    public Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}
