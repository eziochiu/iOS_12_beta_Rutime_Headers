/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _itemCaches;
    unsigned long long  _lastExpiredMetadataPurgeMachTime;
}

+ (unsigned long long)optimalBatchSize;
+ (id)sharedStoreItemMetadataRequestController;

- (void).cxx_destruct;
- (void)_removeExpiredItemsPeriodically;
- (void)addStoreItemMetadata:(id)arg1;
- (id)getStoreItemMetadataForRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)init;
- (void)requestStoreItemMetadataForReason:(unsigned long long)arg1 withItemIdentifiers:(id)arg2 responseHandler:(id /* block */)arg3;

@end
