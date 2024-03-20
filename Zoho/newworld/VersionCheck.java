package Zoho.newworld;

public class VersionCheck {
    public static void main(String[] args) {
        String version = "Version1 4.0.2 Version2 4.8.0";
        String one = "";
        String two = "";
        for(int i = 0; i < version.length(); i++) {
            if(version.charAt(i) == ' ' && version.charAt(i-1) == '1') {
                one = version.substring(i+1, i+6);
                i+=6;
            } else if(version.charAt(i) == ' ' && version.charAt(i-1) == '2') {
                two = version.substring(i + 1, i + 6);
                i += 6;
            }
        }

        if(one.compareTo(two) > 0) {
            System.out.println("Version 1 is higher than Version 2");
        } else if(one.compareTo(two) < 0) {
            System.out.println("Version 2 is higher than Version 1");
        } else {
            System.out.println("Both versions are same");
        }

        System.out.println(version);
        System.out.println("Version 1: " + one);
        System.out.println("Version 2: " + two);
    }
    
}
