/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableSet * _connectedWatches;
    <HMDWatchManagerDelegate> * _delegate;
    bool  _pairedWithWatch;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    IDSService * _service;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSArray *connectedWatches;
@property (readonly, copy) NSString *debugDescription;
@property <HMDWatchManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPairedWithWatch) bool pairedWithWatch;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *watches;

+ (bool)isCompatibleWatchDevice:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (void)_updateConnectedDevices:(id)arg1;
- (void)addConnectedWatch:(id)arg1;
- (id)clientQueue;
- (id)connectedWatchFromDeviceID:(id)arg1;
- (id)connectedWatches;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (bool)isPairedWithWatch;
- (void)notifyDelegateOfAddedConnectedWatch:(id)arg1;
- (void)notifyDelegateOfRemovedConnectedWatch:(id)arg1;
- (id)propertyQueue;
- (void)removeConnectedWatch:(id)arg1;
- (id)service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPairedWithWatch:(bool)arg1;
- (id)shortDescription;
- (id)watches;

@end
