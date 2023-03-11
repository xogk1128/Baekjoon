
public class pro1 {
	static long sum(int[] a) {
		long n = 0;
		for(int i : a)
			n += i;
		return n;
	}
	
	public static void main(String[] args) {
		int[] a = new int[] {1, 2, 3};
		System.out.println(sum(a));
	}

}
