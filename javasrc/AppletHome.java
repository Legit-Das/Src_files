import java.applet.*;
import java.awt.*;

public class AppletHome extends Applet {
    public void paint(Graphics g) {
        //Drawing roof
        g.setColor(Color.red);
        int xr[] = {900, 960, 1020};
        int yr[] = {300, 250, 300};
        Polygon polyr = new Polygon(xr,yr, 3);
        g.fillPolygon(polyr);

        //Drawing body
        g.setColor(Color.gray);
        int xb[] = {900, 1020, 1020, 900};
        int yb[] = {300, 300, 400, 400};
        Polygon polyb = new Polygon(xb, yb, 4);
        g.fillPolygon(polyb);

        //Drawing door
        g.setColor(Color.blue);
        int xd[] = {940, 980, 980, 940};
        int yd[] = {360, 360, 400, 400};
        Polygon polyd = new Polygon(xd, yd, 4);
        g.fillPolygon(polyd);

        //mountain left
        g.setColor(Color.lightGray);
        int xml[]={0,450,900};
        int yml[]={400,100,400};
        Polygon polyml = new Polygon(xml, yml, 3);
        g.fillPolygon(polyml);
        
        //mountain right
        g.setColor(Color.lightGray);
        int xmr[]={1020,1470,1920};
        int ymr[]={400,100,400};
        Polygon polymr = new Polygon(xmr, ymr, 3);
        g.fillPolygon(polymr);

        //drawing road
        g.setColor(Color.darkGray);
        int xrd[] = {980, 940, 450, 1470};
        int yrd[] = {400, 400, 1080, 1080};
        Polygon polyrd = new Polygon(xrd, yrd, 4);
        g.fillPolygon(polyrd);

        //drawing grass left
        g.setColor(Color.green);
        int xgl[] = {0, 940, 450, 0};
        int ygl[] = {400, 400, 1080, 1080};
        Polygon polygl = new Polygon(xgl, ygl, 4);
        g.fillPolygon(polygl);

        //drawing grass right
        g.setColor(Color.green);
        int xgr[] = {980, 1920, 1920, 1470};
        int ygr[] = {400, 400, 1080, 1080};
        Polygon polygr = new Polygon(xgr, ygr, 4);
        g.fillPolygon(polygr);

        //drawing sky
        g.setColor(Color.cyan);
        int xsk[] = {0, 1920, 1920, 1470, 1020, 1020, 960, 900, 900, 450, 0};
        int ysk[] = {0, 0, 400, 100, 400, 300, 250, 300, 400, 100, 400};
        Polygon polysk = new Polygon(xsk, ysk, 11);
        g.fillPolygon(polysk);

        //Drawing Sun
        g.setColor(Color.yellow);
        g.fillOval(960, 100, 100, 100);

    }
}