/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver> {
    CLLocation * _lastLocationUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
- (void)_queue_loadLocation:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)currentLocation;
- (void)locationManagerDidUpdateLocation:(id)arg1;

@end
