//Write applet program to draw the Indian Flag
import java.applet.*;
import java.awt.*;
public class Q3 extends Applet{
    public void paint(Graphics obj){
        obj.setColor(Color.orange);
        obj.fillRect(0, 0, 800, 200);
        obj.setColor(Color.white);
        obj.fillRect(0, 200, 800, 200);
        obj.setColor(Color.green);
        obj.fillRect(0, 400, 800, 200);
        obj.setColor(Color.blue);
        obj.fillOval(300, 200, 200, 200);
    }
}
/* 
    <html> 
    <applet code=Q3 height=1000 width=1000></applet> 
    </html> 
*/
        
 
