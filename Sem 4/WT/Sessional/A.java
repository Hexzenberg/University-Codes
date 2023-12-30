import java.applet.*;
import java.awt.*;
public class A extends Applet{
    public void paint(Graphics g){
        setBackground(Color.lightGray);
        g.setColor(Color.black);
        g.fillOval(150,150,400,400);
        g.setColor(Color.white);
        g.fillOval(250,250,200,200);
    }
}
//<html><applet code=A height=750 width=750></applet></html> 