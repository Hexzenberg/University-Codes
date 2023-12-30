//WAP to draw smiley
import java.applet.*;
import java.awt.*;
public class Q4 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.black);
        g.drawOval(350,350,400,400);
        g.setColor(Color.YELLOW);
        g.fillOval(351,351,398,398);
        g.setColor(Color.black);
        g.drawOval(415,415,125,125);
        g.setColor(Color.WHITE);
        g.fillOval(416,416,123,123);
        g.setColor(Color.BLACK);
        g.fillOval(440,445,63,63);
        g.drawOval(550,415,125,125);
        g.setColor(Color.WHITE);
        g.fillOval(551,416,123,123);
        g.setColor(Color.BLACK);
        g.fillOval(590,445,63,63);
        g.drawArc(430,550,250,165,180,180);
        g.setColor(Color.WHITE);
        g.fillArc(431,551,248,163,180,180);
        g.setColor(Color.BLACK);
        g.drawLine(430,632,680,632);
    }
}
/*
 <html>
 <applet code=Q4 height=1000 width=1000></applet>
 </html>
*/