
public class Overloading {

	public static void main(String[] args) {
		square sq = new square();
		triangle tr = new triangle();
		rectangle r = new rectangle();
		System.out.println(sq.area(3));
		System.out.println(tr.area(3, 4, 5));
		System.out.println(r.area(3, 4));
		System.out.println(area(3));
		System.out.println(area(3,4,5));
		System.out.println(area(3,4));

	}

	private static int area(int i, int j) {
		return i*j;
	}

	private static int area(int i) {
		return i*i;
	}

	private static double area(int i, int j, int k) {
		int s=(i+j+k)/2;
		return Math.sqrt(s*(s-k)*(s-k)*(s-k));
	}
}

class square{
	public double area(int side) {
		return side*side;
	}
}

class rectangle{
	public double area(int len, int bredth) {
		return len*bredth;
	}
}

class triangle{
	public double area(int a,int b, int c) {
		int s = (a+b+c)/2;
		return Math.sqrt(s*(s-1)*(s-b)*(s-c));
	}
}