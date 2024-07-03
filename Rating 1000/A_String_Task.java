import java.util.Scanner;

public class A_String_Task {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();

        String result = processString(input);
        System.out.println(result);
    }

    private static String processString(String input) {
        // Define vowels
        String vowels = "aoyeuiAOYEUI";
        StringBuilder sb = new StringBuilder();

        for (char ch : input.toCharArray()) {
            // Check if the character is a consonant
            if (vowels.indexOf(ch) == -1) {
                // Convert to lowercase if it is an uppercase consonant
                ch = Character.toLowerCase(ch);
                // Append '.' and the consonant to the result
                sb.append('.').append(ch);
            }
        }

        return sb.toString();
    }
}
