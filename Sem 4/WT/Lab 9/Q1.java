//Write applet program to draw the Indian Flag
import java.applet.*;
import java.awt.*;
public class Q1 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.orange);
        g.fillRect(0, 0, 800, 200);
        g.setColor(Color.white);
        g.fillRect(0, 200, 800, 200);
        g.setColor(Color.green);
        g.fillRect(0, 400, 800, 200);
        g.setColor(Color.blue);
        g.fillOval(300, 200, 200, 200);
    }
}
/* 
    <html> 
    <applet code=Q1 height=1000 width=1000></applet> 
    </html> 
*/
        
 
