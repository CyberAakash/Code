package Zoho.newworld;

import java.util.*;

class Variable {
    String name;
    int value;

    Variable(String name, int value) {
        this.name = name;
        this.value = value;
    }
}

public class TransactionalDatabase {
    private Map<String, Variable> database;
    private Stack<Map<String, Variable>> transactionStack;

    public TransactionalDatabase() {
        database = new HashMap<>();
        transactionStack = new Stack<>();
    }

    public void set(String name, int value) {
        database.put(name, new Variable(name, value));
    }

    public Integer get(String name) {
        Variable variable = database.get(name);
        return variable != null ? variable.value : null;
    }

    public void unset(String name) {
        database.remove(name);
    }

    public int count(int value) {
        int count = 0;
        for (Variable variable : database.values()) {
            if (variable.value == value) {
                count++;
            }
        }
        return count;
    }

    public void begin() {
        transactionStack.push(new HashMap<>(database));
    }

    public void rollback() {
        if (!transactionStack.isEmpty()) {
            database = transactionStack.pop();
        }
    }

    public void commit() {
        transactionStack.clear();
    }

    public static void main(String[] args) {
        TransactionalDatabase db = new TransactionalDatabase();

        // Example 1
        db.set("a", 20);
        System.out.println("GET a: " + db.get("a")); // Output: 20
        db.set("b", 30);
        System.out.println("GET b: " + db.get("b")); // Output: 30
        db.set("a", 10);
        System.out.println("GET a: " + db.get("a")); // Output: 10
        System.out.println("UPDATE c 40: No variable named “c”");
        db.set("c", 30);
        System.out.println("COUNT 30: " + db.count(30)); // Output: 2
        System.out.println("COUNT 40: " + db.count(40)); // Output: 0
        db.unset("a");
        System.out.println("GET a: " + db.get("a")); // Output: null

        // Example 2
        System.out.println("GET a: " + db.get("a")); // Output: null
        db.set("a", 30);
        System.out.println("GET a: " + db.get("a")); // Output: 30

        // Example 3
        db.set("a", 30);
        db.begin();
        System.out.println("GET a: " + db.get("a")); // Output: 30
        db.set("a", 40);
        System.out.println("GET a: " + db.get("a")); // Output: 40
        db.set("b", 40);
        System.out.println("GET b: " + db.get("b")); // Output: 40
        db.rollback();
        System.out.println("GET b: " + db.get("b")); // Output: null
        System.out.println("GET a: " + db.get("a")); // Output: 30

        // Example 4
        db.begin();
        db.set("a", 40);
        db.set("b", 40);
        db.set("c", 50);
        System.out.println("COUNT 40: " + db.count(40)); // Output: 2
        db.begin();
        System.out.println("COUNT 40: " + db.count(40)); // Output: 0
        db.commit();
        System.out.println("COUNT 40: " + db.count(40)); // Output: 2
        db.begin();
        db.set("c", 10);
        System.out.println("GET c: " + db.get("c")); // Output: 10
        db.rollback();
        System.out.println("GET c: " + db.get("c")); // Output: 50
    }
}
