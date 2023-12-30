import java.applet.*;
import java.awt.*;
public class Q12 extends Applet{
    public void paint(Graphics gr){
        setBackground(Color.LIGHT_GRAY);
        gr.setColor(Color.blue);
        gr.fillOval(50,50,200,200);
        gr.setColor(Color.red);
        gr.fillArc(50,165,200,200,0,180);
    }
}
// <html><applet code=Q12 height=300 width=300></applet></html>