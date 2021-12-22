class LinkedList {
    static class Node {
        int data;
        Node next;
        Node(int d) {
            data = d;
        }
    }
    Node head;
    static LinkedList insert(LinkedList list, int data) {
        Node new_node = new Node(data);
        new_node.next = new_node;

        if(list.head == null) {
            list.head = new_node;
        }
        else {
            Node last = list.head;
            while(last.next != null) {
                last = last.next;
            }
            last.next = new_node;
            last.next = new_node;
        }
        return list;
    }

    static void display(LinkedList list) {
        Node current = list.head;
        System.out.print("LinkedList: ");

        while(current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }

    /*static LinkedList delatpos(LinkedList list, int index) {
        node current = list.head;
        node prev = null;
        if(index == 0 && current != null) {
            list.head = current.next;
            System.out.println(index + " position element deleted.");
            return list;
        }
    }*/

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list = insert(list,11);
        list = insert(list,22);
        list = insert(list,33);
        list = insert(list,44);
        display(list);
    }
}
