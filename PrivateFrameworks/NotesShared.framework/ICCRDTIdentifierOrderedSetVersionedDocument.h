/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument {
    CRDocument * _document;
    CROrderedSet * _orderedSet;
    NSUUID * _replica;
}

@property (readonly) CRDocument *document;
@property (nonatomic, retain) CROrderedSet *orderedSet;
@property (nonatomic, readonly) NSUUID *replica;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)document;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1;
- (id)orderedSet;
- (id)replica;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setOrderedSet:(id)arg1;

@end
