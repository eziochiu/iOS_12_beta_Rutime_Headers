/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSRecordBuilder : NSObject {
    struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; } * _db;
}

+ (id)recordBuilderForType:(unsigned long long)arg1;

- (unsigned int)createStringFrom:(id)arg1 lowercase:(bool)arg2;
- (bool)parseInfoPlist:(id)arg1;
- (bool)parseInstallationInfo:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (unsigned int)registerBundleRecord:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 error:(id*)arg2;
- (id)retainArray:(id)arg1;
- (id)retainDictionary:(id)arg1;
- (id)retainNumber:(id)arg1;
- (id)retainString:(id)arg1;
- (id)retainURL:(id)arg1;
- (void)setDatabase:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1;

@end
