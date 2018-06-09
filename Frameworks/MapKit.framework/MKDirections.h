/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDirections : NSObject {
    GEOQuickETARequest * _etaRequest;
    GEOQuickETARequester * _etaRequester;
    GEODirectionsRequest * _geoRequest;
    <MKLocationManagerOperation> * _locationOperation;
    MKDirectionsRequest * _request;
    NSObject<OS_dispatch_group> * _waypointsDispatchGroup;
}

@property (getter=isCalculating, nonatomic, readonly) bool calculating;

- (void).cxx_destruct;
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_cleanupLocationOperation;
- (void)_establishCurrentLocationAndThen:(id /* block */)arg1;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(bool)arg1 traits:(id)arg2 handler:(id /* block */)arg3;
- (void)calculateDirectionsWithCompletionHandler:(id /* block */)arg1;
- (void)calculateETAWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isCalculating;

@end
