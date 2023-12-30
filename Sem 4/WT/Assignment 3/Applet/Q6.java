import java.applet.*;
import java.awt.*;
public class Q6 extends Applet{
    public void paint(Graphics gr){
        setBackground(Color.LIGHT_GRAY);
        gr.setColor(Color.MAGENTA);
        gr.fillArc(100,100,200,200,180,180);
        gr.fillArc(300,100,200,200,0,180);
        gr.fillArc(500,100,200,200,180,180);
        gr.fillArc(700,100,200,200,0,180);
    }
}
//<html><applet code=Q6 height=500 width=1000></applet></html> 