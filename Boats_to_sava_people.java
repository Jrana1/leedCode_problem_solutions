import java.util.Arrays;

public class Boats_to_sava_people {

    public static void main(String[] args) {
        Solution s = new Solution();

        int people[] = { 3, 5, 3, 4 };
        System.out.println(s.numRescueBoats2(people, 5));

    }
}

class Solution {
    public int numRescueBoats(int[] people, int limit) {

        int cnt = 0;

        for (int i = 0; i < people.length; i++) {

            for (int j = 0; j < people.length; j++) {

                if (people[i] != 0 && people[j] != 0) {

                    if (people[i] == limit) {
                        cnt++;
                        people[i] = 0;
                        break;
                    }
                    if (i != j && (people[i] + people[j]) <= limit) {
                        cnt++;
                        people[i] = 0;
                        people[j] = 0;
                        break;
                    }

                }
            }

        }
        for (int i = 0; i < people.length; i++) {
            if (people[i] != 0) {
                cnt++;
            }
        }
        System.out.println(cnt);
        return 2;
    }

    public int numRescueBoats2(int[] people, int limit) {

        int cnt = 0;

        int st = 0;
        int end = people.length - 1;
        Arrays.sort(people);
        while (st <= end) {
            if (st == end) {
                cnt++;
                break;
            }
            if ((people[st] + people[end]) == limit) {
                st++;
                end--;
                cnt++;
                if (st == end) {
                    break;
                }
            } else {
                cnt++;
                end--;
            }
        }
        return cnt;
    }
}