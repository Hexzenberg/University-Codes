import java.applet.*;
import java.awt.*;
public class Q9 extends Applet{
    public void paint(Graphics gr){
        gr.setColor(Color.lightGray);
        gr.fillRect(0, 0, 500, 400);
        gr.setColor(Color.red);
        gr.fillRect(15, 15, 465, 415);
        gr.setColor(Color.blue);
        gr.fillOval(45,80,370,370);
    }
}
//<html><applet code=Q9 height=400 width=500></applet></html> 