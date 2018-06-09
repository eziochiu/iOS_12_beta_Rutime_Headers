/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFileObjectID : NSObject <NSCopying, NSSecureCoding, PQLValuable>

@property (nonatomic, readonly) NSString *asString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *documentID;
@property (nonatomic, readonly) NSNumber *folderID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDocumentID;
@property (nonatomic, readonly) bool isFolderOrAliasID;
@property (nonatomic, readonly) unsigned long long rawID;
@property (readonly) Class superclass;

+ (id)fileObjectIDForURL:(id)arg1 allocateDocID:(bool)arg2 error:(id*)arg3;
+ (id)fileObjectIDWithString:(id)arg1;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)asString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)documentID;
- (void)encodeWithCoder:(id)arg1;
- (id)folderID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDocumentID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFileObjectID:(id)arg1;
- (bool)isFolderOrAliasID;
- (unsigned long long)rawID;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
