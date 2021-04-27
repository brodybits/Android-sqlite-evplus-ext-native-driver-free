/* !---- DO NOT EDIT: This file autogenerated by com/jogamp/gluegen/JavaEmitter.java on Tue Apr 27 17:45:10 EDT 2021 ----! */

#include <jni.h>
#include <stdlib.h>

#include <assert.h>


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: int sqlc_db_close(long db)
 *     C function: int sqlc_db_close(sqlc_handle_t db);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1close__J(JNIEnv *env, jclass _unused, jlong db) {
  int _res;
  _res = sqlc_db_close((sqlc_handle_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: int sqlc_db_errcode(long db)
 *     C function: int sqlc_db_errcode(sqlc_handle_t db);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1errcode__J(JNIEnv *env, jclass _unused, jlong db) {
  int _res;
  _res = sqlc_db_errcode((sqlc_handle_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: java.lang.String sqlc_db_errmsg_native(long db)
 *     C function: const char *  sqlc_db_errmsg_native(sqlc_handle_t db);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1errmsg_1native__J(JNIEnv *env, jclass _unused, jlong db) {
  const char *  _res;
  _res = sqlc_db_errmsg_native((sqlc_handle_t) db);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: int sqlc_db_key_native_string(long db, java.lang.String key_string)
 *     C function: int sqlc_db_key_native_string(sqlc_handle_t db, char *  key_string);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1key_1native_1string__JLjava_lang_String_2(JNIEnv *env, jclass _unused, jlong db, jstring key_string) {
  const char* _strchars_key_string = NULL;
  int _res;
  if ( NULL != key_string ) {
    _strchars_key_string = (*env)->GetStringUTFChars(env, key_string, (jboolean*)NULL);
  if ( NULL == _strchars_key_string ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"key_string\" in native dispatcher for \"sqlc_db_key_native_string\"");
      return 0;
    }
  }
  _res = sqlc_db_key_native_string((sqlc_handle_t) db, (char *) _strchars_key_string);
  if ( NULL != key_string ) {
    (*env)->ReleaseStringUTFChars(env, key_string, _strchars_key_string);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: long sqlc_db_last_insert_rowid(long db)
 *     C function: sqlc_long_t sqlc_db_last_insert_rowid(sqlc_handle_t db);
 */
JNIEXPORT jlong JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1last_1insert_1rowid__J(JNIEnv *env, jclass _unused, jlong db) {
  sqlc_long_t _res;
  _res = sqlc_db_last_insert_rowid((sqlc_handle_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: int sqlc_db_total_changes(long db)
 *     C function: int sqlc_db_total_changes(sqlc_handle_t db);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1db_1total_1changes__J(JNIEnv *env, jclass _unused, jlong db) {
  int _res;
  _res = sqlc_db_total_changes((sqlc_handle_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: java.lang.String sqlc_errstr_native(int errcode)
 *     C function: const char *  sqlc_errstr_native(int errcode);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1errstr_1native__I(JNIEnv *env, jclass _unused, jint errcode) {
  const char *  _res;
  _res = sqlc_errstr_native((int) errcode);
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: long sqlc_ev_db_open(long dboc, java.lang.String filename, int flags)
 *     C function: sqlc_handle_t sqlc_ev_db_open(sqlc_handle_t dboc, const char *  filename, int flags);
 */
JNIEXPORT jlong JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1ev_1db_1open__JLjava_lang_String_2I(JNIEnv *env, jclass _unused, jlong dboc, jstring filename, jint flags) {
  const char* _strchars_filename = NULL;
  sqlc_handle_t _res;
  if ( NULL != filename ) {
    _strchars_filename = (*env)->GetStringUTFChars(env, filename, (jboolean*)NULL);
  if ( NULL == _strchars_filename ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"filename\" in native dispatcher for \"sqlc_ev_db_open\"");
      return 0;
    }
  }
  _res = sqlc_ev_db_open((sqlc_handle_t) dboc, (char *) _strchars_filename, (int) flags);
  if ( NULL != filename ) {
    (*env)->ReleaseStringUTFChars(env, filename, _strchars_filename);
  }
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: int sqlc_ev_db_open_result(long dboc)
 *     C function: int sqlc_ev_db_open_result(sqlc_handle_t dboc);
 */
JNIEXPORT jint JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1ev_1db_1open_1result__J(JNIEnv *env, jclass _unused, jlong dboc) {
  int _res;
  _res = sqlc_ev_db_open_result((sqlc_handle_t) dboc);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: void sqlc_ev_dboc_finalize(long dboc)
 *     C function: void sqlc_ev_dboc_finalize(sqlc_handle_t dboc);
 */
JNIEXPORT void JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1ev_1dboc_1finalize__J(JNIEnv *env, jclass _unused, jlong dboc) {
  sqlc_ev_dboc_finalize((sqlc_handle_t) dboc);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: long sqlc_evcore_db_new_qc(long db)
 *     C function: sqlc_handle_t sqlc_evcore_db_new_qc(sqlc_handle_t db);
 */
JNIEXPORT jlong JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1evcore_1db_1new_1qc__J(JNIEnv *env, jclass _unused, jlong db) {
  sqlc_handle_t _res;
  _res = sqlc_evcore_db_new_qc((sqlc_handle_t) db);
  return _res;
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: java.lang.String sqlc_evcore_qc_execute(long qc, java.lang.String batch_json, int ll)
 *     C function: const char *  sqlc_evcore_qc_execute(sqlc_handle_t qc, const char *  batch_json, int ll);
 */
JNIEXPORT jstring JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1evcore_1qc_1execute__JLjava_lang_String_2I(JNIEnv *env, jclass _unused, jlong qc, jstring batch_json, jint ll) {
  const char* _strchars_batch_json = NULL;
  const char *  _res;
  if ( NULL != batch_json ) {
    _strchars_batch_json = (*env)->GetStringUTFChars(env, batch_json, (jboolean*)NULL);
  if ( NULL == _strchars_batch_json ) {
      (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/OutOfMemoryError"),
                       "Failed to get UTF-8 chars for argument \"batch_json\" in native dispatcher for \"sqlc_evcore_qc_execute\"");
      return 0;
    }
  }
  _res = sqlc_evcore_qc_execute((sqlc_handle_t) qc, (char *) _strchars_batch_json, (int) ll);
  if ( NULL != batch_json ) {
    (*env)->ReleaseStringUTFChars(env, batch_json, _strchars_batch_json);
  }
  if (NULL == _res) return NULL;
  return (*env)->NewStringUTF(env, _res);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: void sqlc_evcore_qc_finalize(long qc)
 *     C function: void sqlc_evcore_qc_finalize(sqlc_handle_t qc);
 */
JNIEXPORT void JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1evcore_1qc_1finalize__J(JNIEnv *env, jclass _unused, jlong qc) {
  sqlc_evcore_qc_finalize((sqlc_handle_t) qc);
}


/*   Java->C glue code:
 *   Java package: io.sqlc.EVNDKDriver
 *    Java method: long sqlc_new_ev_dboc(int sqlc_ev_api_version)
 *     C function: sqlc_handle_t sqlc_new_ev_dboc(int sqlc_ev_api_version);
 */
JNIEXPORT jlong JNICALL
Java_io_sqlc_EVNDKDriver_sqlc_1new_1ev_1dboc__I(JNIEnv *env, jclass _unused, jint sqlc_ev_api_version) {
  sqlc_handle_t _res;
  _res = sqlc_new_ev_dboc((int) sqlc_ev_api_version);
  return _res;
}


