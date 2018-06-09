/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationSmoother : NSObject {
    _CLLocationSmootherProxy * _locationManagerSmootherProxy;
}

@property (nonatomic) <CLLocationManagerDelegateInternal> *delegate;
@property (nonatomic, readonly, retain) _CLLocationSmootherProxy *locationManagerSmootherProxy;

- (void)dealloc;
- (id)delegate;
- (id)locationManagerSmootherProxy;
- (void)setDelegate:(id)arg1;
- (void)smoothLocations:(id)arg1;
- (void)smoothLocations:(id)arg1 handler:(id /* block */)arg2;

@end