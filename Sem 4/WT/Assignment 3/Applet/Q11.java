import java.applet.*;
import java.awt.*;
public class Q11 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.lightGray);
        Graphics2D gr=(Graphics2D)g;
        gr.setStroke(new BasicStroke(15));
        gr.setColor(new Color(143, 0, 255));
        gr.drawArc(100,105,280,250,0,180);
        gr.setColor(new Color(75, 0, 130));
        gr.drawArc(90,95,300,270,0,180);
        gr.setColor(Color.blue);
        gr.drawArc(80,90,320,285,0,180);
        gr.setColor(Color.green);
        gr.drawArc(70,85,340,300,0,180);
        gr.setColor(Color.yellow);
        gr.drawArc(60,80,360,315,0,180);
        gr.setColor(Color.orange);
        gr.drawArc(50,75,380,330,0,180);
        gr.setColor(Color.red);
        gr.drawArc(40,70,400,345,0,180);
        gr.setColor(Color.BLACK);
        gr.drawString("rainbow", 215, 280);
    }
}
//<html><applet code=Q11 height=300 width=500></applet></html> 