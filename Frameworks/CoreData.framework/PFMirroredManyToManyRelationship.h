/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFMirroredManyToManyRelationship : PFMirroredRelationship {
    NSString * _ckRecordName;
    NSRelationshipDescription * _inverseRelationshipDescription;
    NSString * _manyToManyRecordName;
    NSString * _manyToManyRecordType;
    NSString * _relatedCKRecordName;
    NSRelationshipDescription * _relationshipDescription;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *ckRecordName;
@property (nonatomic, readonly) NSRelationshipDescription *inverseRelationshipDescription;
@property (nonatomic, readonly) NSString *manyToManyRecordName;
@property (nonatomic, readonly) NSString *manyToManyRecordType;
@property (nonatomic, readonly) NSString *relatedCKRecordName;
@property (nonatomic, readonly) NSRelationshipDescription *relationshipDescription;
@property (nonatomic, readonly) unsigned long long type;

+ (id)ckRecordNameForOrderedRecordNames:(id)arg1;
+ (id)ckRecordTypeForOrderedRelationships:(id)arg1;
+ (id)orderRelationships:(id)arg1;
+ (id)orderedRelationshipsForRecordType:(id)arg1 andManagedObjectModel:(id)arg2;
+ (id)recordNamesFromManyToManyCKRecordName:(id)arg1;

- (id)ckRecordName;
- (void)dealloc;
- (id)initWithRecordName:(id)arg1 recordType:(id)arg2 managedObjectModel:(id)arg3 andType:(unsigned long long)arg4;
- (id)inverseRelationshipDescription;
- (id)manyToManyRecordName;
- (id)manyToManyRecordType;
- (id)recordTypesToRecordNames;
- (id)relatedCKRecordName;
- (id)relationshipDescription;
- (unsigned long long)type;
- (bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
