import java.util.Stack;

public class MinElemMain {
    public static void main(String[] args) {
        
        MinElem st = new MinElem();

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
        
    }
}
