import java.util.*;

public class Main2 
{
    static class Node 
    {
        int data;
        Node next;

        Node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }

    Node head;

    void insertfirst(int data)
    {
        Node newNode=new Node(data);
        newNode.next=head;
        head=newNode;
    }

    void insertlast(int data)
    {
        Node newNode=new Node(data);

        if(head==null)
        {
            head=newNode;
            return;
        }

        Node currNode=head;

        while(currNode.next!=null)
        {
            currNode=currNode.next;
        }

        currNode.next=newNode;
    }

    void display()
    {
        Node currNode=head;

        while(currNode!=null)
        {
            System.out.print(currNode.data+" ");
            currNode=currNode.next;
        }
    }

    void deletefirst()
    {
        if(head==null)
            return;

        head=head.next;
    }

    void deletelast()
    {
        if(head==null)
            return;

        if(head.next==null)
        {
            head=null;
            return;
        }

        Node currNode=head;

        while(currNode.next.next!=null)
        {
            currNode=currNode.next;
        }

        currNode.next=null;
    }

    public static void main(String[]args)
    {
        Main m=new Main();

        m.insertfirst(2);
        m.insertfirst(3);
        m.insertlast(8);
        m.insertfirst(6);
        m.insertlast(20);
        m.insertlast(24);

        m.deletefirst();
        m.deletelast();

        m.display();
    }
}