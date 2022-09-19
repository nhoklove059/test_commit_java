package bai1;

public class PHANSO {
    int ts, ms;

    public PHANSO() {
        ts = 0;
        ms = 1;
    }

    public PHANSO(int t, int m) {
        ts = t;
        ms = m;
    }

    public PHANSO cong(PHANSO ps) {
        PHANSO kq = new PHANSO();
        kq.ts = ts * ps.ms + ms * ps.ts;
        kq.ms = ms * ps.ms;
        return kq;
    }

    public PHANSO cong(int x) {
        PHANSO kq = new PHANSO();
        kq.ts = ts + ms * x;
        kq.ms = ms;
        return kq;
    }

    public String toString() {
        return "phan so " + ts + "/" + ms;
    }
    
}
