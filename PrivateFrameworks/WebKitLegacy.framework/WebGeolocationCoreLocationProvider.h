/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {
    bool  _isWaitingForAuthorization;
    int  _lastAuthorizationStatus;
    struct RetainPtr<CLLocationManager> { 
        void *m_ptr; 
    }  _locationManager;
    <WebGeolocationCoreLocationUpdateListener> * _positionListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createLocationManager;
- (void)dealloc;
- (id)initWithListener:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)requestGeolocationAuthorization;
- (void)sendLocation:(id)arg1;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)start;
- (void)stop;

@end
