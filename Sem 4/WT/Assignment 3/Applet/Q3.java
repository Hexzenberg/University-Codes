import java.awt.*;
import java.applet.*;
public class Q3 extends Applet {
    public void paint(Graphics gr) {
            Graphics2D g=(Graphics2D) gr;
            g.setStroke(new BasicStroke(3));
            g.setColor(Color.blue);
            g.drawOval(110, 110, 100, 100);
            g.setColor(Color.black);
            g.drawOval(220, 110, 100, 100);
            g.setColor(Color.red);
            g.drawOval(330, 110, 100, 100);
            g.setColor(Color.yellow);
            g.drawOval(165, 165, 100, 100);
            g.setColor(Color.green);
            g.drawOval(275, 165, 100, 100);
    }
}
//<html> <applet code=Q3 height=500 width=750> </applet> </html> 