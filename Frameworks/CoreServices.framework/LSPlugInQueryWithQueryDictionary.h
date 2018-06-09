/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {
    NSArray * _extensionIdentifiers;
    NSArray * _extensionPointIdentifiers;
    id /* block */  _filterBlock;
    NSDictionary * _queryDict;
}

+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_initWithQueryDictionary:(id)arg1 applyFilter:(id /* block */)arg2;
- (id)_queryDictionary;
- (bool)_shouldCacheResolvedResults;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesPlugin:(const struct LSPluginData { int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned char x25; }*)arg1 withDatabase:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg2;

@end
