package Zoho.newworld;

import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class GIT {
    private Map<String, Integer> data;
    private Stack<Map<String, Integer>> transactionStack;

    public GIT() {
        this.data = new HashMap<>();
        this.transactionStack = new Stack<>();
    }

    // SET a variable
    public void set(String variable, int value) {
        data.put(variable, value);
    }

    // GET a variable
    public Integer get(String variable) {
        return data.getOrDefault(variable, null);
    }

    // UNSET a variable
    public void unset(String variable) {
        data.remove(variable);
    }

    // COUNT numbers of variable with given value
    public int count(int value) {
        int count = 0;
        for (int val : data.values()) {
            if (val == value) {
                count++;
            }
        }
        return count;
    }

    // BEGIN a new transaction
    public void begin() {
        transactionStack.push(new HashMap<>(data));
    }

    // ROLLBACK all the commands in the open transaction
    public void rollback() {
        if (!transactionStack.isEmpty()) {
            data = transactionStack.pop();
        }
    }

    // COMMIT the transaction
    public void commit() {
        transactionStack.clear();
    }

    public static void main(String[] args) {
        GIT store = new GIT();

        // Example usage
        store.set("a", 20);
        System.out.println("GET a: " + store.get("a")); // 20

        store.set("b", 30);
        System.out.println("GET b: " + store.get("b")); // 30

        store.set("a", 10);
        System.out.println("GET a: " + store.get("a")); // 10

        // Example 1
        store.set("c", 30);
        System.out.println("COUNT 30: " + store.count(30)); // 2
        System.out.println("COUNT 40: " + store.count(40)); // 0

        store.unset("a");
        System.out.println("GET a: " + store.get("a")); // null

        // Example 2
        System.out.println("GET a: " + store.get("a")); // null
        store.set("a", 30);
        System.out.println("GET a: " + store.get("a")); // 30

        // Example 3
        store.set("a", 30);
        store.begin();
        System.out.println("GET a: " + store.get("a")); // 30
        store.set("a", 40);
        System.out.println("GET a: " + store.get("a")); // 40
        store.set("b", 40);
        System.out.println("GET b: " + store.get("b")); // 40
        store.rollback();
        System.out.println("GET b: " + store.get("b")); // 30
        System.out.println("GET a: " + store.get("a")); // 30

        // Example 4
        store.begin();
        store.set("a", 40);
        store.set("b", 40);
        store.set("c", 50);
        System.out.println("COUNT 40: " + store.count(40)); // 2
        store.begin();
        System.out.println("COUNT 40: " + store.count(40)); // 0
        store.commit();
        System.out.println("COUNT 40: " + store.count(40)); // 2
        store.begin();
        store.set("c", 10);
        System.out.println("GET c: " + store.get("c")); // 10
        store.rollback();
        System.out.println("GET c: " + store.get("c")); // 50
    }
}
