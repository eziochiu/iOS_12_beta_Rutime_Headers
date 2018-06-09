/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {
    NSUserDefaults * _defaults;
    int  _defaultsChangedNotifyToken;
    <HFLocationSensingCoordinatorDelegate> * _delegate;
    HFLocationManagerDispatcher * _locationDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic) int defaultsChangedNotifyToken;
@property (nonatomic) <HFLocationSensingCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homeSensingEnabled;
@property (nonatomic, retain) HFLocationManagerDispatcher *locationDispatcher;
@property (nonatomic, readonly) NAFuture *locationSensingAvailableFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_defaultsDidChange;
- (void)dealloc;
- (id)defaults;
- (int)defaultsChangedNotifyToken;
- (id)delegate;
- (bool)homeSensingEnabled;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)locationDispatcher;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)locationSensingAvailableFuture;
- (void)setDefaults:(id)arg1;
- (void)setDefaultsChangedNotifyToken:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHomeSensingEnabled:(bool)arg1;
- (void)setLocationDispatcher:(id)arg1;

@end
