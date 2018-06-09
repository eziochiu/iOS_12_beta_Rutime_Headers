/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCItemID_v9 : NSObject <PQLValuable> {
    BRCALRowID * _appLibraryRowID;
    unsigned char  _kind;
    unsigned char  _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void).cxx_destruct;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRootObject:(struct RootItemObject { unsigned char x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; }*)arg1;
- (id)initWithUUID:(const char *)arg1;
- (id)initWithUUIDObject:(struct _UUIDItemObject_OLD { unsigned char x1; unsigned int x2; unsigned char x3[16]; }*)arg1;
- (id)itemIDString;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
