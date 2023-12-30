import java.applet.*;
import java.awt.*;
public class Q8 extends Applet{
    public void paint(Graphics gr){
        setBackground(Color.lightGray);
        gr.setColor(Color.yellow);
        gr.fillOval(330,90,80,250);
        gr.setColor(Color.red);
        gr.fillOval(370,310,250,80);
        gr.setColor(Color.orange);
        gr.fillOval(120,310,250,80);
        gr.setColor(Color.pink);
        gr.fillOval(330,360,80,250);
        gr.setColor(Color.white);
        gr.fillOval(330,310,80,80);
    }
}
//<html><applet code=Q8 height=750 width=750></applet></html>