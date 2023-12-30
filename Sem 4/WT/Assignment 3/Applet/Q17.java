import java.awt.*;
import java.applet.*;
public class Q17 extends Applet{
    public void paint(Graphics g){
        int[] x1={30,140,250,140},y1={140,40,140,240},x2={35,140,245,140},y2={140,45,140,235};
        setBackground(Color.LIGHT_GRAY);
        g.fillPolygon(x1,y1,4);
        g.setColor(Color.red);
        g.fillPolygon(x2,y2,4);
        g.setColor(Color.black);
        g.fillRoundRect(90,100,100,80,50,50);
        g.setColor(Color.cyan);
        g.fillRoundRect(95,105,90,70,40,40);
        g.setColor(Color.red);
        g.fillOval(120,125,40,30);
        g.setColor(Color.black);
        g.fillOval(123,128,34,24);
    }
}//<html><applet code=Q17 width=300 height=300></applet></html>