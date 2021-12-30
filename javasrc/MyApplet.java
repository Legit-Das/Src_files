import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;
import java.awt.Image;

public class MyApplet extends Applet {
    public void paint(Graphics g) {
        g.setColor(Color.RED);
        g.fillOval(640, 360, 150, 100);
        g.setColor(Color.BLUE);
        g.fillArc(50, 50, 50, 100, 200, 340);
        g.drawString("Blue colored text",100,500);

        Image img;
        img = getImage(getDocumentBase(), "MyImage.png");
        g.drawImage(img, 1000, 0, this);

    }

}