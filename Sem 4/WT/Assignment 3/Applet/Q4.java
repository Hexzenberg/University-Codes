import java.applet.*;
import java.awt.*;
public class Q4 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.black);
        g.drawOval(350,350,400,400);
        g.setColor(Color.white);
        g.fillOval(351,351,398,398);
        g.setColor(Color.black);
        g.drawOval(415,415,125,125);
        g.setColor(Color.WHITE);
        g.fillOval(416,416,123,123);
        g.setColor(Color.BLACK);
        g.fillOval(420,445,63,63);
        g.drawOval(550,415,125,125);
        g.setColor(Color.WHITE);
        g.fillOval(551,416,123,123);
        g.setColor(Color.BLACK);
        g.fillOval(555,445,63,63);
        g.drawArc(430,550,250,165,180,180);
    }
}
//<html><applet code=Q4 height=1000 width=1000></applet></html>
