/* made by EzioChiu
   Image: /usr/lib/system/libsystem_trace.dylib
 */

@interface OSLogCoder : NSObject <OSLogCoder> {
    struct { unsigned int x1 : 4; unsigned int x2 : 4; unsigned char x3; unsigned char x4[0]; } * _fmt_cmd;
    unsigned long long  _maxsz;
    struct os_trace_blob_s { union { char *x_1_1_1; void *x_1_1_2; char *x_1_1_3; char *x_1_1_4; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; bool x6; } * _ob;
    struct os_trace_blob_s { union { char *x_1_1_1; void *x_1_1_2; char *x_1_1_3; char *x_1_1_4; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; bool x6; } * _ob_priv;
    struct os_trace_blob_s { union { char *x_1_1_1; void *x_1_1_2; char *x_1_1_3; char *x_1_1_4; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned short x5; bool x6; } * _ob_pub;
    unsigned short  _offset;
    bool  _truncated;
    unsigned short  _written;
}

- (void)_setFlags:(unsigned char)arg1;
- (void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)setPublic;
- (void)setTruncated;

@end
