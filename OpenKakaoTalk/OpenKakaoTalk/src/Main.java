import java.util.HashMap;

public class Main {
    public static String[] solution(String[] record) {
        HashMap<String, String> inputParser = new HashMap<>();
        HashMap<String, Integer> indexBuffer = new HashMap<>();
        String[] answer = record;
        for (int i = 0; i < record.length; i++) {
            String[] parsedString = record[i].split(" ");
            switch (parsedString[0]) {
                case "Enter":
                case "Change":
                    inputParser.put(parsedString[1], parsedString[2]);
                    break;
                default:
                    break;
            }

        }
        String a = "";
        for (int i = 0; i < record.length; i++) {
            String[] parsedString = record[i].split(" ");
            switch (parsedString[0]) {
                case "Enter":
                    a +=  inputParser.get(parsedString[1]) + "님이 들어왔습니다.";
                    break;
                case "Leave" :
                    a += inputParser.get(parsedString[1]) + "님이 나갔습니다.";
                    break;
                default:
                    break;
            }
            a += "A";
        }
        return a.split("A");
    }

    public static void main(String[] args) {
        String[] input = {"Enter uid1234 Muzi", "Enter uid4567 Prodo", "Leave uid1234", "Enter uid1234 Prodo", "Change uid4567 Ryan"};
        String[] output = solution(input);
        for (int i = 0; i < output.length; i++) {
            System.out.println(output[i]);
        }
    }
}
