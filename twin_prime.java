import java.util.*;
class twin 
{
	int n;
	int isprime()
	{
		int i,f;
		f=1;
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				f=0;
				break;
			}
		}
		return f;
	}
	void input(int x)
	{
		n=x;
	}
	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		twin ob=new twin();
		System.out.println("Enter a number");
		int n=sc.nextInt();
		int a,f1,f2,b=0;
		for(a=n;a>=0;a--)
		{
			b=a-2;
			ob.input(a);
			f1=ob.isprime();
			ob.input(b);
			f2=ob.isprime();
			if(f1==1 && f2==1)
			{
				System.out.println(a+ "\t"+b);
				break;
			}
			
		}
		int x,y=0;
		for(x=n;x<=(n+50);x++)
		{
			y=x+2;
			ob.input(x);
			f1=ob.isprime();
			ob.input(y);
			f2=ob.isprime();
			if(f1==1 && f2==1)
			{
				System.out.println(x+ "\t"+y);
				break;
			}
			
		}
	}
}
