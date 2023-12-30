//WAP to draw cirle with with 4 different colors
import java.applet.*;
import java.awt.*;
public class Q1 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.BLUE);
        g.drawArc(250,250,500,500,0,90);
        g.setColor(Color.CYAN);
        g.drawArc(250,250,500,500,90,90);
        g.setColor(Color.MAGENTA);
        g.drawArc(250,250,500,500,180,90);
        g.setColor(Color.orange);
        g.drawArc(250,250,500,500,270,90);
    }
}
//<html><applet code=Q1 height=1000 width=1000></applet></html>
