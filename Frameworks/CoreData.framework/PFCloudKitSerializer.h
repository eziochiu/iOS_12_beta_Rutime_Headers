/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitSerializer : NSObject {
    NSObject<PFCloudKitSerializerDelegate> * _delegate;
    NSMutableDictionary * _manyToManyRecordNameToRecord;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSMutableDictionary * _objectIDToCKRecordName;
    NSString * _recordNamePrefix;
    PFCloudKitMirroredRelationshipCache * _relCache;
    NSMutableArray * _writtenAssetURLs;
    CKRecordZone * _zone;
}

@property (nonatomic) NSObject<PFCloudKitSerializerDelegate> *delegate;
@property (nonatomic, readonly) NSDictionary *manyToManyRecordNameToRecord;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSDictionary *objectIDToCKRecordName;
@property (nonatomic, readonly) NSString *recordNamePrefix;
@property (nonatomic, readonly) PFCloudKitMirroredRelationshipCache *relCache;
@property (nonatomic, readonly) NSArray *writtenAssetURLs;
@property (nonatomic, readonly) CKRecordZone *zone;

+ (id)applyCDPrefixToName:(id)arg1;
+ (id)assetStorageDirectoryURLForStore:(id)arg1;
+ (id)assetsOnRecord:(id)arg1 withOptions:(id)arg2;
+ (id)ckAssetAttributeNameForAttributeName:(id)arg1;
+ (id)entityNameForRecordType:(id)arg1;
+ (unsigned long long)estimateByteSizeOfRecord:(id)arg1;
+ (unsigned long long)estimateByteSizeOfRecordID:(id)arg1;
+ (unsigned long long)estimatedByteSizeOfValue:(id)arg1 andKey:(id)arg2;
+ (id)generateCKAssetFileURLForObjectInStore:(id)arg1;
+ (bool)isMirroredRelationshipRecordType:(id)arg1;
+ (bool)isPrivateAttribute:(id)arg1;
+ (bool)isVariableLengthAttributeType:(unsigned long long)arg1;
+ (id)newArchivedDataForSystemFieldsOfRecord:(id)arg1;
+ (id)newSerializerForOptions:(id)arg1 withZone:(id)arg2 recordNamePrefix:(id)arg3;
+ (id)newSetOfRecordKeysForAttribute:(id)arg1 includeCKAssetsForFileBackedFutures:(bool)arg2;
+ (id)newSetOfRecordKeysForEntitiesInConfiguration:(id)arg1 inManagedObjectModel:(id)arg2 includeCKAssetsForFileBackedFutures:(bool)arg3;
+ (id)newSetOfRecordKeysForEntity:(id)arg1 includeCKAssetsForFileBackedFutures:(bool)arg2;
+ (id)newSetOfRecordKeysForRelationship:(id)arg1;
+ (id)recordTypeForEntity:(id)arg1;
+ (bool)shouldTrackAttribute:(id)arg1;
+ (bool)shouldTrackProperty:(id)arg1;
+ (bool)shouldTrackRelationship:(id)arg1;
+ (unsigned long long)sizeOfVariableLengthAttribute:(id)arg1 onObject:(id)arg2;

- (void).cxx_destruct;
- (void)addURLToWrittenAssetURLs:(id)arg1;
- (bool)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id*)arg5;
- (bool)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 onlyUpdatingAttributes:(id)arg5 andRelationships:(id)arg6 error:(id*)arg7;
- (void)dealloc;
- (id)delegate;
- (id)getRecordNameForObject:(id)arg1;
- (id)getValueFromRecord:(id)arg1 forKey:(id)arg2;
- (id)getValuesFromRecord:(id)arg1;
- (id)init;
- (id)initWithZone:(id)arg1 mirroringOptions:(id)arg2 recordNamePrefix:(id)arg3;
- (id)manyToManyRecordNameToRecord;
- (id)mirroringOptions;
- (id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(bool)arg2;
- (id)objectIDToCKRecordName;
- (id)recordNamePrefix;
- (id)relCache;
- (void)setDelegate:(id)arg1;
- (void)setMtmRecord:(id)arg1 toMtmRecordName:(id)arg2;
- (void)setObjectID:(id)arg1 toCKRecordName:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 onRecord:(id)arg3;
- (void)updateAttributes:(id)arg1 andRelationships:(id)arg2 onManagedObject:(id)arg3 fromRecord:(id)arg4 importContext:(id)arg5;
- (id)writtenAssetURLs;
- (id)zone;

@end
