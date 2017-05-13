/* 
Write C++/Java program to draw circle using Bresenham‘s algorithm. Inherit pixel class.
*/

import javax.swing.JFrame;
import java.awt.Graphics;
import java.util.Scanner;

public class bresCircle extends JFrame {
	int r, cx, cy;

	public void drawCircle(Graphics g, int x, int y) {
		g.fillOval((int) (cx + x), (int) (cy + y), 2, 2);
		g.fillOval((int) (cx - x), (int) (cy + y), 2, 2);
		g.fillOval((int) (cx + x), (int) (cy - y), 2, 2);
		g.fillOval((int) (cx - x), (int) (cy - y), 2, 2);
		g.fillOval((int) (cx + y), (int) (cy + x), 2, 2);
		g.fillOval((int) (cx - y), (int) (cy + x), 2, 2);
		g.fillOval((int) (cx + y), (int) (cy - x), 2, 2);
		g.fillOval((int) (cx - y), (int) (cy - x), 2, 2);
	}

	public void circle(Graphics g) {
		int d = 3 - 2 * r;
		int x = 0;
		int y = r;
		while (x <= y) {
			drawCircle(g,x,y);
			if (d < 0) {
				d = d + 4 * x + 6;
			} else {
				y = y - 1;
				d = d + 4 * (x - y) + 10;
			}
			x++;
		}

	}

	public void paint(Graphics g) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter radius: ");
		r = input.nextInt();
		System.out.println("Enter center's co-ordinated: ");
		cx = input.nextInt();
		cy = input.nextInt();

		circle(g);
		input.close();
	}

	public static void main(String[] args) {

		bresCircle c = new bresCircle();
		c.setSize(500, 500);
		c.setVisible(true);

		c.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
