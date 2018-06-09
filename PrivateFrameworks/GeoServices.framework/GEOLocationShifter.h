/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver> {
    bool  _isRequestingShiftFunction;
    NSMutableArray * _locationsToShift;
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    int  _resetPrivacyToken;
    NSCache * _shiftFunctionCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool locationShiftEnabled;
@property (readonly) Class superclass;

+ (id)_proxy;
+ (bool)isLocationShiftEnabled;
+ (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
+ (unsigned int)locationShiftFunctionVersion;
+ (void)useLocalProxy;

- (void).cxx_destruct;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestNextShiftFunctionIfNecessary;
- (void)_reset;
- (bool)_shiftLocation:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)locationShiftEnabled;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (bool)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 shiftedCoordinate:(struct { double x1; double x2; }*)arg3 shiftedAccuracy:(double*)arg4;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)shiftCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 withCompletionHandler:(id /* block */)arg3 mustGoToNetworkCallback:(id /* block */)arg4 errorHandler:(id /* block */)arg5 callbackQueue:(id)arg6;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 errorHandler:(id /* block */)arg6 callbackQueue:(id)arg7;
- (bool)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(struct { double x1; double x2; }*)arg3 shiftedAccuracy:(double*)arg4;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(id /* block */)arg3 mustGoToNetworkCallback:(id /* block */)arg4 errorHandler:(id /* block */)arg5 callbackQueue:(id)arg6;

@end
