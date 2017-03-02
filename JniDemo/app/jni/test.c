/*
#include是编译预处理指令，就是在编译前将stdio.h这个文件里
的函数都添加到你写的cpp文件中，然后参与编译，生成.obj文件。
如果没有这个指令，你用到的一些方法时编辑器就会报错：
*/
#include <jni.h>
#include <stdio.h>


 jstring  Java_com_lin_jnidemo_JniTest_getFromJni
  (JNIEnv *env, jobject thiz){
   printf("getFromJni is load");
   return (*env)->NewStringUTF(env, "i am from jni ");
  };

 void  Java_com_lin_jnidemo_JniTest_setIntoJni
  (JNIEnv *env, jobject thiz, jstring string){
  printf("setIntoJni is load");
  char* str = (char*)(*env)->GetStringUTFChars(env, string, NULL);
  (*env)->ReleaseStringUTFChars(env, string, str);
  };

