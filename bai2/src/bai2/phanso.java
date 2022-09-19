package bai2;

public class phanso {
    int tu, mau;

    // Constructor
    public phanso(int tu, int mau) {
        this.tu = tu;
        this.mau = mau;
    }

    public static int SOSANH(phanso ps1, phanso ps2) {

        int Y = (ps1.tu * ps2.mau - ps1.mau * ps2.tu) / (ps1.mau * ps2.mau);
        if (Y > 0) {
            return 1;
        }
        if (Y < 0) {
            return -1;
        }
        return 0;
    }
}