  package cc;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class FootballMatch {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();

		while (t > 0) {
			int n = scan.nextInt();
			HashMap<String, Integer> map = new HashMap<>();
			for (int i = 0; i < n; i++) {
				String str = scan.nextLine();
				if (map.containsKey(str)) {
					map.put(str, map.get(str) + 1);
				} else {
					map.put(str, 1);
				}
			}
			ArrayList<String> list = new ArrayList<>(map.keySet());

			if (list.size() == 2) {
				if (map.get(list.get(0)) == map.get(list.get(1))) {
					System.out.println("Draw");
				} else if (map.get(list.get(0)) > map.get(list.get(1))) {
					System.out.println(list.get(0));
				} else {
					System.out.println(list.get(1));
				}
			} else {
				System.out.println(list.get(0));
			}
			--t;
		}
	}

}
