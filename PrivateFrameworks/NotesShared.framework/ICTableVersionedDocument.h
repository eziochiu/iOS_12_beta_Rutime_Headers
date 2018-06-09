/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTableVersionedDocument : TTVersionedDocument {
    CRDocument * _innerTableDocument;
    NSUUID * _replica;
    ICTable * _table;
}

@property (readonly) CRDocument *innerTableDocument;
@property (nonatomic, readonly) NSUUID *replica;
@property (nonatomic, retain) ICTable *table;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
+ (id)tableDoc;
+ (id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)innerTableDocument;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithTableVersionedDocument:(id)arg1;
- (id)replica;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setReplica:(id)arg1;
- (void)setTable:(id)arg1;
- (id)table;

@end
