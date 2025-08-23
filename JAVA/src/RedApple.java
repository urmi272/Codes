import java.util.Scanner;

public class RedApple {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-- > 0) {
            //int n = sc.nextInt(); // total apples in North
            int s = sc.nextInt(); // total apples in South
            int w = sc.nextInt(); // total apples in West
            int e = sc.nextInt(); // total apples in East
            int M = sc.nextInt(); // required red apples

            // Guaranteed reds: South all red + 1 from W if exists + 1 from E if exists
            int guaranteedReds = s + (w > 0 ? 1 : 0) + (e > 0 ? 1 : 0);

            if (guaranteedReds < M) {
                System.out.println(-1); // Impossible to guarantee M reds
                continue;
            }

            // Strategy:
            // 1. Pick all South apples first (all red)
            // 2. Pick 1 from W and/or E if needed
            // 3. Any extra reds must come from possible gamble in W/E (we may need to pick more total apples)

            int redsCollected = Math.min(s, M); // start with South reds
            int applesPicked = redsCollected;   // apples picked so far

            // Pick guaranteed red from W if needed
            if (redsCollected < M && w > 0) {
                redsCollected++;
                applesPicked++;
                w--; // one apple taken from W
            }

            // Pick guaranteed red from E if needed
            if (redsCollected < M && e > 0) {
                redsCollected++;
                applesPicked++;
                e--; // one apple taken from E
            }

            // If still need reds, must gamble from W/E (may pick non-reds)
            while (redsCollected < M && (w > 0 || e > 0)) {
                if (w > 0) { w--; applesPicked++; redsCollected++; }
                else if (e > 0) { e--; applesPicked++; redsCollected++; }
            }

            System.out.println(applesPicked);
        }
        sc.close();
    }
}
