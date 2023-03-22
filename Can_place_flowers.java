import java.rmi.StubNotFoundException;

public class Can_place_flowers {

    public static void main(String[] args) {

        Solution s = new Solution();
        s.canPlaceFlowers(new int[] { 0, 1, 0 }, 1);
    }
}

class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {

        int x = flowerbed.length;

        for (int i = 0; i < x; i++) {

            if (flowerbed[i] == 0) {

                if (i == 0 && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n--;

                } else if (i == x - 1 && flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n--;

                } else {
                    if (i == x - 1 && flowerbed[i - 1] == 1) {

                        continue;
                    }
                    if (i == 0 && flowerbed[i + 1] == 1) {
                        continue;
                    }
                    if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                        flowerbed[i] = 1;
                        n--;
                    }

                }
            }
        }
        System.out.println("n=" + n);
        for (var e : flowerbed) {
            System.out.println(e);
        }
        return false;
    }
}