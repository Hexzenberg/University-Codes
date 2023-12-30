//WAP to draw cirle with perpendicular diameters with the 4 parts with different colors
import java.applet.*;
import java.awt.*;
public class Q5 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.BLUE);
        g.fillArc(250, 250, 500, 500, 0, 90);
        g.setColor(Color.CYAN);
        g.fillArc(250, 250, 500, 500, 90, 90);
        g.setColor(Color.MAGENTA);
        g.fillArc(250, 250, 500, 500, 180, 90);
        g.setColor(Color.orange);
        g.fillArc(250, 250, 500, 500, 270, 90);
    }
}
/*
 <html>
 <applet code=Q5 height=1000 width=1000></applet>
 </html>
*/