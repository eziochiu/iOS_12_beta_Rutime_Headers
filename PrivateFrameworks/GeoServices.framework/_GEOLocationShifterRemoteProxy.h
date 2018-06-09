/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)isLocationShiftEnabled;
- (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
- (unsigned int)locationShiftFunctionVersion;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(id /* block */)arg3;

@end
