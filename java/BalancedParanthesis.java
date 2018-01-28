import java.util.Scanner;

public class BalancedParanthesis {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String str = scan.next();
		boolean result = checkbalancedparanthesis(str, new StringBuilder(), 0);
		System.out.println(result);
	}

	public static boolean checkbalancedparanthesis(String str, StringBuilder paranthesis, int index) {

		if (index == str.length()) {
			String check = paranthesis.toString();
			if (check.equals(""))	return true;
      else return false;							// open brackets left
		}

		char ch = str.charAt(index);

		if ( (ch == '{') || (ch == '[') || (ch == '(') ) paranthesis.append(ch);
    else 
    	if ( (ch == '}') || (ch == ']') || (ch == ')') ) 
          if (index != 0 && paranthesis.length()>0) {
						int lastindex = paranthesis.length() - 1;
						char checkpreviousparanthesis = paranthesis.charAt(lastindex);
						if ((checkpreviousparanthesis=='{' && ch == '}') || (checkpreviousparanthesis=='(' && ch == ')') || (checkpreviousparanthesis=='[' && ch == ']') ) paranthesis.deleteCharAt(lastindex); 
          	else	return false;		// wrong closing
          }
      		else	return false;				// closed brackets left
		boolean result = checkbalancedparanthesis(str, paranthesis, index + 1);
		return result;
	}
}
