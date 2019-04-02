import java.awt.*;
import java.awt.event.*;
import java.util.Scanner; 

interface Function
{
	double f(double c);
}

class Cosin implements Function
{
	public double f(double x)
	{
		return x*Math.sin(x);
	}
}
class HomeWorkFunction implements Function
{
	public double f(double x)
	{
		int a=50;
		//return 1/(Math.sqrt(Math.pow(a,2)-Math.pow(x,2)));
		return Math.exp(x);
	}
}

class Grafic extends Frame
{
	double a, b;
	Function of;
	Grafic(double a1, double b1, Function of1)
	{
		a = a1;
		b = b1;
		of = of1;
		setSize(600, 400);
		setVisible(true);
		addWindowListener(new WindowAdapter() 
		{
			@Override
			public void windowClosing(WindowEvent e) 
			{
				System.exit(0);
			}
		});
	}
		public double max()
		{
			double m = of.f(a);
			for (double x=a+0.1; x <= b; x+=0.1)
			{
				if (of.f(x) > m)
				m = of.f(x);
			}
			return m;
		}
		public double min()
		{
			double mi = of.f(a);
			for (double x=a+0.1; x <= b; x+=0.1)
			{
				if (of.f(x) < mi)
				mi = of.f(x);
			}
			return mi;
		}
	public void paint(Graphics g)
	{
		double al, be, ga, de, x, y, c = max(), d = min();
		int w = getWidth(); 
		int h = getHeight();
		al = (w-20)/(b-a);
		
		ga = (h-100)/(c-d);
		al = al<ga?al:ga;
		be = 10 - al*a;
		de = 0;
		if (d > 0 && c > 0)
		{
			de = h -50;
		}
		if (c < 0 && d<0)
		{
			de = 50;
		}
		if (c > 0 && d < 0)
		{
			de = 50+c*al;
		}
		g.drawLine((int)be, 50, (int) be,  h-10);
		g.drawLine(5, (int)de, w-5, (int)de);
		int ix1 = (int)(be+al*a);
		int ix2 = (int)(be+al*b);
		int iy;
		for(int ix=ix1; ix<ix2; ix++)
		{
			x = (ix-be)/al;
			y = of.f(x);
			iy = (int)(de-al*y);
			g.drawLine(ix, iy, ix, iy);
		}	
		
		
	}
}
	
			
class Test 
{
	public static void main (String args[])
	{
		//Cosin oc = new Cosin();
		//Grafic og = new Grafic(-5*Math.PI, 5*Math.PI, oc);
		HomeWorkFunction func = new HomeWorkFunction();
		Plot og = new Plot(-10,10, func);
		System.out.println("Result: "+Integral.compute_integral(10,12,0.000001));
	}
}

class Integral{
	double a,b,eps;
	public Integral(double a,double b,double eps)
	{
		this.a=a;
		this.b=b;
		this.eps=eps;
	}
	public static double compute_integral(double a,double b,double eps)
	{	
		Integral F = new Integral(a,b,eps);
		a=F.a;
		b=F.b;
		eps=F.eps;
		double h=eps;
		double n=(b-a)/h;
		double res=0;
		HomeWorkFunction func = new HomeWorkFunction();
		for (int i=0;i<n;i++)
		{	
			res+=func.f(a+i*h-h/2);	

		}
		res*=h;
		return res;
	}
	public static double derivate(double x)
	{	
		HomeWorkFunction func = new HomeWorkFunction();
		double h=0.00005;
		return (func.f(x+h)-func.f(x))/h;
	}
}
					
