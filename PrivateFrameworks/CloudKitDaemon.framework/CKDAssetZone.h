/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetZone : NSObject {
    NSMutableOrderedSet * _assetRecords;
    NSMutableDictionary * _assetRecordsByRecordID;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, retain) NSMutableOrderedSet *assetRecords;
@property (nonatomic, retain) NSMutableDictionary *assetRecordsByRecordID;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)assetRecords;
- (id)assetRecordsByRecordID;
- (id)description;
- (id)initWithZoneID:(id)arg1;
- (void)setAssetRecords:(id)arg1;
- (void)setAssetRecordsByRecordID:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)zoneID;

@end
