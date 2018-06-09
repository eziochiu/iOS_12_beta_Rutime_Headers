/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate> {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSArray * _providers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *providers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(bool)arg2;
- (id)concurrentQueue;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithDataProviders:(id)arg1;
- (bool)isEmpty;
- (id)metadataForDestinationID:(id)arg1;
- (id)providers;
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1;

@end
