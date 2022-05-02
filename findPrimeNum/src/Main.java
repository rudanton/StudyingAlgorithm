import java.util.*;

public class Main {
    public ArrayList<String> arrayList = new ArrayList<>();
    public static void main(String[] args) {
        String input;
        Scanner scan = new Scanner(System.in);
        input = scan.next();
        char[] chars = input.toCharArray();


        System.out.println("ÃÑ°³¼ö : " + TheNumP(chars));

    }
    public static int TheNumP(char[] array){
        int sum = 0;
        for(int i = array.length ; i >0 ; i--)
        {
            int p = 1;
            for(int j = array.length ; j>=i; j--){
                p *= j;
                System.out.println("j : "+j);
            }
            sum+=p;
        }
        System.out.println(sum);
        return sum;
    }
    public static void addP(int depth, char[] array){
        int index = array.length;

        for(int j = 0; j<array.length;j++){
            boolean[] isCome = new boolean[index];
            Arrays.fill(isCome, false);
            for (int i = 0; i < depth; i++) {
                int d = 0;
                while (d<i){
                    isCome[j] = true;
                }
            }
        }
    }
}