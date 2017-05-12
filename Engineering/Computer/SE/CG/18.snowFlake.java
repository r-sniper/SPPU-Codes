//Write C++/Java program to generate snowflake using concept of fractals.

import java.awt.Graphics;
import java.util.Scanner;

import javax.swing.JFrame;


public class mySnow extends JFrame{
	
	void snow(Graphics g,int x1,int y1,int x5,int y5,int level)
	{
		if(level==0)
		{
			g.drawLine(x1,y1,x5,y5);
		}
		else
		{
			int deltaX, deltaY, x2, y2, x3, y3, x4, y4;
			deltaX = x5 - x1;
	        deltaY = y5 - y1;
	        x2 = x1 + deltaX / 3;
	        y2 = y1 + deltaY / 3;
	        x3 = (int) (0.5 * (x1 + x5) + Math.sqrt(3) * (y1 - y5) / 6);
	        y3 = (int) (0.5 * (y1 + y5) + Math.sqrt(3) * (x5 - x1) / 6);
	        x4 = x1 + 2 * deltaX / 3;
	        y4 = y1 + 2 * deltaY / 3;

	        snow(g, x1, y1, x2, y2, level - 1);
	        snow(g, x2, y2, x3, y3, level - 1);
	        snow(g,  x3, y3, x4, y4, level - 1);
	        snow(g,  x4, y4, x5, y5, level - 1);
		}
	}
	
	public void paint(Graphics g)
	{
		Scanner input = new Scanner(System.in);
		System.out.print("Enter level: ");
		int level = input.nextInt();
		snow(g,  100, 300, 300, 300,level);
		snow(g,  300, 300, 200, 126,level);
		snow(g,  200, 126, 100, 300,level);
		input.close();
	}
	public static void main(String[] args)
	{
		mySnow my = new mySnow();
		my.setSize(700, 700);
		my.setVisible(true);
		my.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}

}
