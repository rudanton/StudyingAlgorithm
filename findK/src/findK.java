import java.util.*;
public class findK {
    public static void main(String[] args) {
        CollectionSort s = new CollectionSort();
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(7, 5, 9, 0, 3, 1, 6, 2, 4, 8));

        ArrayList<Integer> selectionList = s.sort(list);
        for(int i = 0; i<selectionList.size(); i++)
        {
            System.out.println(i);
        }
    }
}
