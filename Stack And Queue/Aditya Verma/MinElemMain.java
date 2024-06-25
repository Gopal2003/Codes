import java.util.Stack;

public class MinElemMain {
    public static void main(String[] args) {
        
        MinElem st = new MinElem();
        /* 
        System.out.println(st.getMinElement());
        st.popElem();
        st.pushELem(18);
        st.pushELem(19);
        st.pushELem(14);
        st.pushELem(20);
        st.pushELem(12);
        st.pushELem(16);

        System.out.println(st.getMinElement());

        st.popElem();
        st.popElem();
        
        System.out.println(st.getMinElement());
        */

        st.pushElem(5);
        System.out.println(st.getMinElement());

        st.pushElem(3);
        System.out.println(st.getMinElement()); 

        st.pushElem(7);
        System.out.println(st.getMinElement()); 
        System.out.println(st.getPeekValue());

        st.popElem();
        System.out.println(st.getPeekValue());

        st.pushElem(1);
        st.pushElem(0);

        System.out.println(st.getPeekValue());

        st.popElem();
        System.out.println(st.getMinElement());

        
        
    }
}
