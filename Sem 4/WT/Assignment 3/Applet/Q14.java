import java.awt.*;
import java.applet.*;
public class Q14 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.LIGHT_GRAY);
        Graphics2D gr=(Graphics2D) g;
        int[] x={50,150,350,450,350,150},y={200,50,50,200,350,350};
        gr.setStroke(new BasicStroke(15));
        gr.drawPolygon(x,y,6);
    }
}
//<html><applet code=Q14 width=500 height=400></applet></html>