/*
wap a program to convert String into Char
*/
import java.io.*;
public class stoc
{
	public static void main(string args[])throws IOException
	{
		string str;
		int i,n;
		datainputstream ds=new datainputstream(system.in);
		system.out.println("Enter a string");
		str=ds
		n=str.length();
		//system.out.println(n);
		char ch[]=new char[n];
		ch=str.tochararray();
 		//system.out.println(ch);
		for(i=0;i<n;i++)
		{
 		 	system.out.println(ch[i]);
		}
	}
}
