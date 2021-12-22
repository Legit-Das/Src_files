class A {
    A()
    {

        System.out.println("Parent class");
    }

}
class B extends A{
    B()
    {

        System.out.println("Child class");
    }

}
class C extends B{
    C()
    {

        System.out.println(" Sub Child class");
    }


}

class mulInheritance
{

    public static void  main(String[] args)
    {

        C obj=new C();
    };
};
