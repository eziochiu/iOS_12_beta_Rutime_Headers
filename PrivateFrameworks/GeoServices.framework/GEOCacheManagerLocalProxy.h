/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManagerLocalProxy : NSObject <GEOCacheManaging> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_invalidationDataHasExpiredByVersionAndDomain:(id)arg1;
- (long long)_invalidationStateForInvalidationData:(id)arg1;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(id /* block */)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id /* block */)arg2;

@end
