import java.awt.*;
import java.applet.*;
public class Q16 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.LIGHT_GRAY);
        g.setColor(Color.green);
        g.fillRoundRect(50,50,400,250,60,60);
        g.setColor(Color.black);
        g.fillRoundRect(60,60,380,230,50,50);
        g.setColor(Color.green);
        g.fillRoundRect(120,110,280,150,60,60);
        g.setColor(Color.cyan);
        g.fillRoundRect(130,120,260,130,50,50);
        g.setColor(Color.green);
        g.fillOval(220,165,70,40);
        g.setColor(Color.red);
        g.fillOval(225,170,60,30);
    }
}
//<html><applet code=Q16 width=500 height=400></applet></html>