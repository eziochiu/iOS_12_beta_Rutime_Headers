/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSALog : NSObject {
    NSString * _bugType;
    bool  _deleteOnRetire;
    NSString * _filepath;
    NSDictionary * _metaData;
    bool  _preserveFiles;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _stream;
}

@property (readonly) NSString *bugType;
@property bool deleteOnRetire;
@property (readonly) NSString *filepath;
@property (readonly) NSDictionary *metaData;
@property (readonly) struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*stream;

+ (void)cleanupRetired:(id)arg1;
+ (void)purgeLogs:(id)arg1;
+ (unsigned int)scanLogs:(id)arg1 from:(id)arg2;
+ (id)scanProxies:(id)arg1;

- (void).cxx_destruct;
- (id)bugType;
- (void)closeFileStream;
- (void)dealloc;
- (bool)deleteOnRetire;
- (id)description;
- (id)filepath;
- (id)getFilenames;
- (id)initWithPath:(id)arg1 forRouting:(id)arg2 options:(id)arg3;
- (bool)isReasonableSize:(long long)arg1 forRouting:(id)arg2;
- (void)markWithKey:(const char *)arg1 value:(const char *)arg2;
- (id)metaData;
- (void)retire:(const char *)arg1;
- (void)setDeleteOnRetire:(bool)arg1;
- (struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)stream;

@end
