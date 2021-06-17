import java.util.*;

public class aone {
        public static void main(String[] args) {

                Queue<String> pq = new PriorityQueue<>();

                pq.add("Apple");
                pq.add("SUB");
                pq.add("Energy");
                pq.add("Fall");
                pq.add("aspire");
                pq.add("Negation");

                pq.remove("SUB");
                pq.remove("Fall");
                pq.remove("Negation");

                System.out.println(pq);

        }
}