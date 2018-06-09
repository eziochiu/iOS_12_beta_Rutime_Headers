/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProximityDetector : NSObject {
    bool  _advertisingDeviceNearby;
    NSUUID * _advertisingDeviceUUID;
    NSObject<OS_dispatch_queue> * _discoveryQueue;
    id /* block */  _handler;
    bool  _isDetecting;
    SFDeviceDiscovery * _nearbyInfoDiscovery;
    unsigned int  _powerAssertionIdentifier;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, readonly) NSUUID *advertisingDeviceUUID;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) bool isDetecting;

- (void).cxx_destruct;
- (id /* block */)_createDeviceFoundBlockWithName:(id)arg1;
- (id /* block */)_createDeviceLostBlockWithName:(id)arg1;
- (id /* block */)_createDiscoveryActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_createPowerAssertion;
- (void)_endPowerAssertion;
- (void)_queue_endDetecting;
- (id)advertisingDeviceUUID;
- (void)dealloc;
- (void)endDetecting;
- (id /* block */)handler;
- (id)initWithAdvertisingDeviceUUID:(id)arg1;
- (bool)isDetecting;
- (void)setHandler:(id /* block */)arg1;
- (void)startDetectingWithDuration:(double)arg1 completion:(id /* block */)arg2;

@end
