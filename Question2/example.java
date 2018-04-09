import java.io.*;

public interface myCallback {
    void printReverse(String str);
}

class Test {

    public static void main(String[] args) {
        
        
        doSomething("Zaid Rehman", new myCallback(){
            @Override
            public void printReverse(String str) {
                
                StringBuilder sb = new StringBuilder(str);
            	System.out.println(sb.reverse().toString());
            	
            }
        });
    }

    private static void doSomething(String str,myCallback callback) {
        
        if(true){ // Condition on which the callback function should be called
            callback.printReverse(str);
        }
    }

}
/*
Output : namheR diaZ
*/
