import java.awt.*;
import java.applet.*;
public class Q18 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.green);
        g.setColor(Color.red);
        g.fillArc(25,50,100,100,3,-180);
        g.fillArc(124,48,100,100,3,180);
        g.fillArc(223,42,100,100,3,-180);
        g.fillArc(322,40,100,100,3,180);
        g.setColor(Color.black);
        g.fillArc(29,55,93,93,3,-180);
        g.setColor(Color.cyan);
        g.fillArc(227,47,93,93,3,-180);
        g.setColor(Color.yellow);
        g.fillArc(325,42,93,93,3,180);
    }
}
//<html><applet code=Q18 width=500 height=200></applet></html>