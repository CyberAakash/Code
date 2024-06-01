package org.docs.singleLinkedList;

public class Node {
    int data;
    Node next;

    public static Node head = null;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}
