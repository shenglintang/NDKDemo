package com.lin.jnidemo;

/**
 * 1.声明native方法
 */
public class JniTest {

    public native String getFromJni();

    public native void setIntoJni(String info);
}
