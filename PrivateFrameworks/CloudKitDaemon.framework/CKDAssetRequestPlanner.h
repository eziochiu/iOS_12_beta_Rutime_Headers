/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetRequestPlanner : NSObject {
    NSMutableDictionary * _assetBatchesByZoneID;
    NSArray * _assetGetChunkKeysBatches;
    NSArray * _assetRegisterAndPutBatches;
    unsigned int  _assetTokenRequestSizeLimit;
    NSArray * _assetTokenRequests;
    NSMutableDictionary * _assetZonesByZoneID;
    NSMutableOrderedSet * _items;
    NSMutableDictionary * _rerefAssetBatchesByZoneID;
}

@property (nonatomic, retain) NSMutableDictionary *assetBatchesByZoneID;
@property (nonatomic, retain) NSArray *assetGetChunkKeysBatches;
@property (nonatomic, retain) NSArray *assetRegisterAndPutBatches;
@property (nonatomic, readonly) unsigned int assetTokenRequestSizeLimit;
@property (nonatomic, retain) NSArray *assetTokenRequests;
@property (nonatomic, retain) NSMutableDictionary *assetZonesByZoneID;
@property (nonatomic, retain) NSMutableOrderedSet *items;
@property (nonatomic, retain) NSMutableDictionary *rerefAssetBatchesByZoneID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)assetBatchesByZoneID;
- (id)assetGetChunkKeysBatches;
- (id)assetRegisterAndPutBatches;
- (unsigned int)assetTokenRequestSizeLimit;
- (id)assetTokenRequests;
- (id)assetZonesByZoneID;
- (id)description;
- (void)failBatch:(id)arg1;
- (bool)hasSuccessfulAssetTokenRequests;
- (bool)hasSuccessfulBatches;
- (id)init;
- (id)items;
- (void)planAssetRequests;
- (void)planGetChunkKeysBatches;
- (void)planRegisterBatches;
- (id)rerefAssetBatchesByZoneID;
- (void)resetAssetTokenRequests;
- (void)setAssetBatchesByZoneID:(id)arg1;
- (void)setAssetGetChunkKeysBatches:(id)arg1;
- (void)setAssetRegisterAndPutBatches:(id)arg1;
- (void)setAssetTokenRequests:(id)arg1;
- (void)setAssetZonesByZoneID:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setRerefAssetBatchesByZoneID:(id)arg1;

@end
