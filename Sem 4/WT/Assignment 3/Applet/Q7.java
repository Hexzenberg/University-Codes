import java.applet.*;
import java.awt.*;
public class Q7 extends Applet{
    public void paint(Graphics gr){
        setBackground(Color.LIGHT_GRAY);
        gr.fillOval(150,150,400,400);
        gr.setColor(Color.white);
        gr.fillOval(250,250,200,200);
    }
}
//<html><applet code=Q7 height=750 width=750></applet></html> 