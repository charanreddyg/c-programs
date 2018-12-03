//abstract example
abstract class Abstractexample
{
	
}
class MyChild extends Parent
{
	public void show()
	{
	System.out.println("my child");
	}
	public static void main(String a[])
	{
	MyChild m1=new MyChild();
	m1.show();
	}
}