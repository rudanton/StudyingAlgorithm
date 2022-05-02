import java.util.*;

public class Main {
    public static boolean[] visited;
    public static Set<Integer> set;
    public static void main(String[] args) {
        String input;
        Scanner scan = new Scanner(System.in);
        input = scan.next();
        visited = new boolean[input.length()];
        set = new HashSet<>();
        backTracking(0, input, "");
        Object[] array = set.toArray();
        Arrays.sort(array);
        System.out.println("num Sets");
        for(int i = 0; i< array.length; i++){
            System.out.print(array[i]+", ");
            if(i % 10 == 9 ) System.out.println();
        }
        System.out.println();
        System.out.println();
        System.out.print("Prime Numbers");
        ArrayList<Integer> prime = FindPrimeNums((int)array[array.length-1]);
        for(int i = 0 ; i < prime.size(); i++){
            System.out.print(prime.get(i) + ", ");
            if(i % 10 == 9 ) System.out.println();
        }
        System.out.println();
        System.out.println();
        System.out.println("the num of Primes : " +check(array, prime));
    }
    public static void backTracking(int depth, String inputNum, String current){
        if(depth == inputNum.length()) return;

        for(int i = 0 ; i<inputNum.length(); i++){
            if(!visited[i]){
                visited[i]= true;
                String num = current+inputNum.charAt(i);
                set.add(Integer.parseInt(num));

                backTracking(depth+1, inputNum, num);
                visited[i] = false;
            }
        }
    }
    public static ArrayList<Integer> FindPrimeNums(int maxNum){
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Boolean> isCheck = new ArrayList<>(Arrays.asList(true));
        Boolean[] isChecked = new Boolean[maxNum];

        for(int i = 1 ; i <= maxNum; i++)
        {
            isChecked[i-1] = false;
        }
        for(int i = 2 ; i * i <= maxNum+1; i++)
        {
            if(isChecked[i-2]) continue;
            for(int j = i*i ; j<=maxNum+1 ; j+=i)
            {
                isChecked[j-2] = true;
            }
        }
        System.out.println();
        for(int i = 0; i < isChecked.length; i++)
        {
            if(!isChecked[i]){
                list.add(i+2);
            }
        }
        return list;
    }
    public static int check(Object[] numbers, ArrayList<Integer> primes){
        int num = 0;
        for(int i = 0; i<numbers.length;i++){
            for(int j = 0; j<primes.size(); j++)
            {
                if(primes.get(j) == numbers[i]) num++;
            }
        }
        return num;
    }

}
