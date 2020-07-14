package reflection;

import java.io.Serializable;
import java.util.Arrays;

/**
 * Status: Fail
 */
public class ArrayClassTest {
    
    public static void main(String[] args) {
        boolean b1 = testArrayClass(boolean[].class, "[Z");
        boolean b2 = testArrayClass(byte[].class,    "[B");
        boolean b3 = testArrayClass(char[].class,    "[C");
        boolean b4 = testArrayClass(short[].class,   "[S");
        boolean b5 = testArrayClass(int[].class,     "[I");
        boolean b6 = testArrayClass(long[].class,    "[J");
        boolean b7 = testArrayClass(float[].class,   "[F");
        boolean b8 = testArrayClass(double[].class,  "[D");
        boolean b9 = testArrayClass(int[][].class,   "[[I");
        boolean b10 = testArrayClass(Object[].class,  "[Ljava.lang.Object;");
        boolean b11 = testArrayClass(Object[][].class,"[[Ljava.lang.Object;");
        System.out.println((b1 && b2 && b3 && b4 && b5 && b6 && b7 && b8 && b9 && b10 && b11) ? "Pass" : "Fail");
    }
    
    private static boolean testArrayClass(Class<?> c, String name) {
        boolean b1 = name.equals(c.getName());
        boolean b2 = Object.class == c.getSuperclass();
        boolean b3 = Arrays.deepEquals(new Class<?>[]{ Cloneable.class, Serializable.class }, c.getInterfaces());
        boolean b4 = 0 == c.getFields().length;
        boolean b5 = 0 == c.getDeclaredFields().length;
        boolean b6 = 9 == c.getMethods().length;
        boolean b7 = 0 == c.getDeclaredMethods().length;
//        System.out.println((b1 && b2 && b3 && b4 && b5 && b6 && b7) ? "Pass" : "Fail");
        return b1 && b2 && b3 && b4 && b5 && b6 && b7;
    }
    
}