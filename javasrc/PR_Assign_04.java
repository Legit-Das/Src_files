import java.util.*;

class Node {
    public int data;
    public Node next;

    public void displayNodeData() {
        System.out.print(" {" + data + "}");
    }

}

class SinglyLL {
    private Node head;

    public boolean isEmpty() {
        return (head == null);
    }
    //Insert at thr start of a linked list
    public void insertFirst(int d) {
        Node newNode = new Node();
        newNode.data = d;
        newNode.next = head;
        head = newNode;
    }

    //Insert at the end of a linked list
    public void insertLast(int d) {
        if(!isEmpty()) {
            Node current = head;
            while (current.next != null) {
                current = current.next;
            }
            Node newNode = new Node();
            newNode.data = d;
            current.next = newNode;
        }
        else
            insertFirst(d);
    }

    //Insert at any position
    public void insertAtPosition(int pos, int d) {
        if(pos <= (countNodes() + 1) && pos > 0) {
            if(pos != 1) {
                Node newNode = new Node();
                Node temp = head;
                
                newNode.data = d;
                newNode.next = null;
                
                int i=2;
                while (i < pos) {
                    temp = temp.next;
                    i++;
                }
                newNode.next = temp.next;
                temp.next = newNode;
            }
            else
                insertFirst(d);
        }
        else
            System.out.println("Please enter a valid position");
    }

    //Delete node from the start of the linled list
    public int deleteFirst() {
        if(!isEmpty()) {
            Node temp = head;
            head = head.next;
            return temp.data;
        }
        else {
            System.out.println("The list is empty");
            return -1;
        }
    }

    //Delete node at end
    public int deleteEnd() {
        if(!isEmpty()) {
            if(countNodes() != 1) {
                Node prevNode = new Node();
                Node temp = head;
                
                while(temp.next != null) {
                    prevNode = temp;
                    temp = temp.next;
                }
                prevNode.next = null;
                return temp.data;
            }
            else
                return deleteFirst();
        }
        else {
            System.out.println("The list is empty");
            return -1;
        }
    }

    //Delete node at a given position
    public int deleteAtPosition(int pos) {
        if(!isEmpty()) {
            if(pos <= countNodes() && pos>0) {
                if(pos != 1) {
                    Node position = new Node();
                    Node temp = head;
                    int i = 2;
                    while (i < pos) {
                        temp = temp.next;
                        i++;
                    }
                    position = temp.next;
                    temp.next = position.next;
                    return position.data;
                }
                else
                    return deleteFirst();
            }
            else {
                System.out.println("Please enter valid posititon");
                return -1;
            }
        }
        else {
            System.out.println("The list is empty");
            return -1;
        }

    }
    
    //Return the count of total nodes
    public int countNodes() {
        if(!isEmpty()) {
            int count = 0;
            Node current = head;
            while (current != null) {
                count++;
                current = current.next;
            }
            return count;
        }
        else
            return 0;
    }
    
    //print the list
    public void printList() {
        if(!isEmpty()) {
            System.out.println("Printing Linked List (head --> last)");
            Node current = head;
            while(current != null) {
                current.displayNodeData();
                current = current.next;
            }
            System.out.println("");
        }
        else
            System.out.println("The list is empty");
    }
}

public class PR_Assign_04 {
    public static void main(String[] args) {
        SinglyLL myLL = new SinglyLL();

        int choice;
        Scanner ch = new Scanner(System.in);

        do {
            System.out.print("\n1. Insert at start, 2. Insert at end, 3. Insert at any position, 4.Delete at start, 5.Delete at end, 6. Delete at any position, 7. Print List 8. Count of nodes 0. Exit\n");
            System.out.print("Enter your choice: ");
            choice = ch.nextInt();
            int d,pos;
            System.out.println("");
            switch(choice) {
                case 1:
                    System.out.print("Enter Node data value: ");
                    d = ch.nextInt();
                    myLL.insertFirst(d);
                    break;
                        
                case 2:
                    System.out.print("Enter Node data value: ");
                    d = ch.nextInt();
                    myLL.insertLast(d);
                    break;
                    
                case 3:
                    System.out.print("Enter Node data and position values: ");
                    d = ch.nextInt();
                    pos = ch.nextInt();
                    myLL.insertAtPosition(d, pos);
                    break;

                case 4:
                    System.out.println("Deleted node data value = " + myLL.deleteFirst());
                    break;

                case 5:
                    System.out.println("Deleted node data value = " + myLL.deleteEnd());
                    break;
                    
                case 6:
                    System.out.print("Enter the position at which to delete node: ");
                    pos = ch.nextInt();
                    System.out.println("Deleted node data value = " + myLL.deleteAtPosition(pos));
                    break;

                case 7:
                    myLL.printList();
                    break;
                    
                case 8:
                    System.out.println("The total number of nodes in list now = " + myLL.countNodes());
                    break;
                case 0:
                    System.exit(0);
                    
                default:
                    System.out.println("Please enter a valid response!");
                    
            }
        }while(choice != 0);
        ch.close();

    }
}
