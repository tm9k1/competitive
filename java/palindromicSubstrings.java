public class palindromicSubstrings {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

	public static String substringPalindrome(String str) {

		for (int i = 0; i < str.length(); i++) {
			String ch=str.charAt(i)+"";
			for (int j = i+1; j < str.length(); j++) {
				String chk = str.substring(i, j);
			}
		}

	}

}
