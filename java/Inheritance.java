class Parent1
{
    void showParent1()
    {
        System.out.println("Parent 1");
    }
}

class Parent2 extends Parent1
{
    void showParent2()
    {
        System.out.println("Parent 2");
    }
}

public class Inheritance
{
    public static void main(String[] args)
    {
        Parent2 obj = new Parent2();

        obj.showParent1();
        obj.showParent2();
    }
}