/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudRecord : NSObject {
    NSMutableSet * _assetIdentifiers;
    CRKCloudAssetStore * _assetStore;
    CKRecord * _record;
    CKRecordZoneID * _zoneId;
}

@property (nonatomic, retain) NSMutableSet *assetIdentifiers;
@property (nonatomic, retain) CRKCloudAssetStore *assetStore;
@property (nonatomic, retain) CKRecord *record;
@property (nonatomic, retain) CKRecordZoneID *zoneId;

+ (id)new;

- (void).cxx_destruct;
- (id)assetDataForKey:(id)arg1;
- (id)assetIdentifiers;
- (id)assetStore;
- (bool)boolForKey:(id)arg1;
- (id)encryptedObjectForKey:(id)arg1;
- (id)filterEmptyArray:(id)arg1;
- (id)init;
- (id)initWithRecord:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 isEncrypted:(bool)arg2;
- (id)record;
- (id)recordName;
- (id)referenceRecordNameForKey:(id)arg1;
- (void)setAssetData:(id)arg1 forKey:(id)arg2;
- (void)setAssetIdentifiers:(id)arg1;
- (void)setAssetStore:(id)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 isEncrypted:(bool)arg3;
- (void)setRecord:(id)arg1;
- (void)setReference:(id)arg1;
- (void)setZoneId:(id)arg1;
- (bool)validCloudObject:(id)arg1;
- (id)zoneId;

@end
