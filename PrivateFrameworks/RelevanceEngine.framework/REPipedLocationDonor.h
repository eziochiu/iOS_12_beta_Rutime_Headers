/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REPipedLocationDonor : RESingleton <REPipedLocationReceiver> {
    NSXPCConnection * _connection;
    CLLocation * _location;
    NSLock * _locationAccessLock;
    REObserverStore * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (readonly) Class superclass;

+ (id)_locationFromDefaults;
+ (void)_saveLocationIntoDefaultsWithLocation:(id)arg1;

- (void).cxx_destruct;
- (void)_handleInvalidation;
- (void)addObserver:(id)arg1;
- (id)init;
- (id)location;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)updateLocation:(id)arg1;

@end
