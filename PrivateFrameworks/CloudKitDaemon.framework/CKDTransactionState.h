/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTransactionState : NSObject {
    CKDAssetBatch * _assetBatch;
    NSMutableDictionary * _itemByAssetId;
}

@property (nonatomic, retain) CKDAssetBatch *assetBatch;
@property (nonatomic, retain) NSMutableDictionary *itemByAssetId;

- (void).cxx_destruct;
- (id)assetBatch;
- (id)init;
- (id)itemByAssetId;
- (void)setAssetBatch:(id)arg1;
- (void)setItemByAssetId:(id)arg1;

@end
