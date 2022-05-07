import java.util.*;
public class CollectionSort {
    ArrayList<Integer> sort(ArrayList<Integer> ar){
        ArrayList<Integer> list = new ArrayList<>();
        list.addAll(ar);
        int index = 0;
        for(int i = 0; i<ar.size(); i++){
            int min = ar.get(i);
            for(int j = i +i ; j<ar.size(); j++){
                if (ar.get(j) < min) {
                    min = ar.get(j);
                    index = j;
                }
            }
//            list.add();
            int temp = ar.get(index);
            ar.set(index, ar.get(i));
            ar.set(i, temp);
        }
        return list;
    }

}
