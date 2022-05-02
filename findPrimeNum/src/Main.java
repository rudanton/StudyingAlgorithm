import java.util.*;

public class Main {
    public static void main(String[] args) {
        FindPrimeNums(535);
    }
    public static ArrayList<Integer> FindPrimeNums(int maxNum){
        ArrayList<Integer> list = new ArrayList<>();
        ArrayList<Boolean> isCheck = new ArrayList<>(Arrays.asList(true));
        Boolean[] isChecked = new Boolean[maxNum];



        for(int i = 1 ; i <= maxNum; i++)
        {
//            isCheck.add(false);
            isChecked[i-1] = false;
        }
        for(int i = 2 ; i * i <= maxNum+1; i++)
        {
//            if(isCheck.get(i))continue;
            if(isChecked[i-2]) continue;/*
            for(int j = i*i;j<=maxNum;j+=i){
                isCheck.set(j, true);
            }*/
            for(int j = i*i ; j<=maxNum+1 ; j+=i)
            {
                isChecked[j-2] = true;
            }
        }
        /*list.clear();
        for(int i = 2 ; i < isCheck.size();i++)
        {
            if(!isCheck.get(i)){
                System.out.print(i +", ");
            }
            if(i%50 == 0 ) System.out.println();
        }
        System.out.println();*/
        System.out.println();
        for(int i = 0; i < isChecked.length; i++)
        {
            if(!isChecked[i]){
                System.out.print((i+2) +", ");
                list.add(i+2);
            }
            if(i%50 == 48 ) System.out.println();
        }
        System.out.println("\nArrayList : " + isCheck.size()  + "\tArray : " + isChecked.length);
        return list;
    }
}
