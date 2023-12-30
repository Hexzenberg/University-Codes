import java.applet.*;
import java.awt.*;
public class Q10 extends Applet{
    public void paint(Graphics gr){
        setBackground(Color.lightGray);
        gr.setColor(Color.blue);
        gr.fillArc(75,75,350,350,0,90);
        gr.setColor(Color.red);
        gr.fillArc(75,75,350,350,90,90);
        gr.setColor(Color.yellow);
        gr.fillArc(75,75,350,350,180,90);
        gr.setColor(Color.green);
        gr.fillArc(75,75,350,350,270,90);
    }
}
//<html><applet code=Q10 height=500 width=500></applet></html> 