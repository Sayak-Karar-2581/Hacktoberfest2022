import java.util.*;
class palin
{
	int num,revnum;
	palin()
	{
		num=0;
		revnum=0;
	}
	void input()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter a number");
		num=sc.nextInt();
	}
	int reverse(int y,int r)
	{

		if(y==0)
		{
			return r;
		}
		else
		{
			r=r*10+(y%10);
			return reverse(y/10,r);
		}
	}
	void check()
	{
		revnum=reverse(num,0);
		if(num==revnum)
		{
			System.out.println("it is a palindrome number"+'\t'+num);
		}
		else
		{
			System.out.println("not a palindrome number");
		}
	}
	public static void main(String[]args)
	{
		palin ob=new palin();
		ob.input();
		ob.check();
	}
}
