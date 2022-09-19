package bai1;

import bai1.PHANSO;

public class Test {
    public static void main(String[] args) {
        PHANSO ps1, ps2, ps3, ps4;
        ps1 = new PHANSO(1, 2);
        ps2 = new PHANSO(3, 4);
        ps3 = ps1.cong(ps2);
        System.out.println(ps3);
        ps4 = ps3.cong(1);
        System.out.println(ps4);
    }
}