import java.util.*;

class LinkedList {
    private Node head;

    static class Node {
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = null;
        }
    }

    void insertNode(int val) {
        Node newNode = new Node(val);

        if(head == null) {
            head = newNode;
            return;
        }

        Node temp = head;
        while(temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    void deleteNode(int nodeOffset) {
        Node temp1 = head, temp2 = null;
        int listLen = 0;

        if(head == null) {
            System.out.println("List is empty!");
            return;
        }
        while(temp1 != null) {
            temp1 = temp1.next;
            listLen++;
        }

        if(listLen < nodeOffset) {
            System.out.println("Index out of range!");
            return;
        }
        temp = head;

        if(nodeOffset == 1) {
            head = head.next;
            
