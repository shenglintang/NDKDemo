package com.lin.jnidemo;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {
    private TextView text;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        text = (TextView) findViewById(R.id.text);
        JniTest jniTest = new JniTest();
        text.setText(jniTest.getFromJni());
        jniTest.setIntoJni("hello world");
    }

    static {
        System.loadLibrary("jni-test");
    }

}
