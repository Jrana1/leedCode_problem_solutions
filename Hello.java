import java.beans.JavaBean;

public class Hello {

    public static void main(String[] args) {

        System.out.println(Pythagoras.class);
    }

}

class Pythagoras {

    public double distance(double x1, double y1, double x2, double y2) {

        double dx = x1 - x2;
        double dy = y1 - y2;
        return Math.sqrt(dx * dx + dy * dy);
    }
}
