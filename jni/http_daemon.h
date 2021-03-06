#ifndef HTTP_DAEMON_H
#define HTTP_DAEMON_H

#include <jni.h>
#include "utstring.h"
#include "uthash.h"

#define DATA_DIR "/mnt/sdcard/FastRunningFriend/"

int http_run_daemon(JNIEnv* env,jobject* cfg_obj);
void http_stop_deamon();
int http_daemon_running();
#endif