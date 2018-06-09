/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCacheManager : NSObject <GEOCacheManaging> {
    <GEOCacheManaging> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (void)checkHasExpiredWithInvalidationDatas:(id)arg1 handler:(id /* block */)arg2;
- (id)init;
- (long long)invalidationStateForComponent:(id)arg1;
- (long long)invalidationStateForPlace:(id)arg1;
- (void)snapshotWithFilePathArray:(id)arg1 handler:(id /* block */)arg2;
- (void)versionsForDomains:(id)arg1 handler:(id /* block */)arg2;

@end
