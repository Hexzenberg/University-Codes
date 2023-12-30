import java.awt.*;
import java.applet.*;
public class Q20 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.lightGray);
        g.setColor(Color.red);
        g.fillArc(40,40,300,250,0,180);
        g.setColor(Color.black);
        g.fillArc(46,45,288,240,0,180);
        g.setColor(Color.blue);
        g.fillArc(57,50,280,230,0,45);
        g.setColor(Color.cyan);
        g.fillArc(53,45,280,230,45,45);
        g.setColor(Color.green);
        g.fillArc(49,45,280,230,90,45);
        g.setColor(Color.yellow);
        g.fillArc(45,48,280,230,135,45);
        g.setColor(Color.black);
        g.fillArc(140,120,100,100,0,180);
        g.setColor(Color.pink);
        g.fillArc(145,125,90,90,0,180);
        g.setColor(Color.black);
        g.fillRect(40,165,300,10);
    }
}
//<html><applet code=Q20 width=400 height=300></applet></html>