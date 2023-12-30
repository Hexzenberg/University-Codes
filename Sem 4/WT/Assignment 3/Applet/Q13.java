import java.awt.*;
import java.applet.*;
public class Q13 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.LIGHT_GRAY);
        g.setColor(Color.red);
        g.fillRect(50,100,400,200);
        g.setColor(Color.green);
        g.fillOval(150,0,200,200);
        g.setColor(Color.blue);
        g.fillOval(180,160,20,20);
    }
}
//<html><applet code=Q13 width=500 height=300></applet></html>