public class CapitalizeFirstLast {

    public static String capitalizeFirstAndLast(String str) {
        
        String[] words = str.split(" ");
        StringBuilder result = new StringBuilder();

        for (String word : words) {
            
            if (word.length() > 0) {
                
                String firstLetter = word.substring(0, 1).toUpperCase();
                String middle = word.substring(1, word.length() - 1);
                String lastLetter = "";
                if (word.length() > 1) {
                    lastLetter = word.substring(word.length() - 1).toUpperCase();
                }

                result.append(firstLetter).append(middle).append(lastLetter).append(" ");
            }
        }
        
        return result.toString().trim();
    }

    public static void main(String[] args) {
        
        String input = "vit university";
        String output = capitalizeFirstAndLast(input);
        System.out.println(output); 
    }
}