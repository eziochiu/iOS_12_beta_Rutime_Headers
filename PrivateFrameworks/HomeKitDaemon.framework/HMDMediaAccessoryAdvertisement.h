/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {
    bool  _associated;
    HMDMediaOutputDevice * _outputDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (getter=isAssociated) bool associated;
@property (retain) HMDMediaOutputDevice *outputDevice;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;

+ (bool)canAirPortExpressSupportMediaAccessory:(id)arg1;

- (void).cxx_destruct;
- (long long)associationOptions;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (id)initWithOutputDevice:(id)arg1;
- (bool)isAssociated;
- (bool)matchesWACDeviceID:(id)arg1;
- (id)outputDevice;
- (id)propertyQueue;
- (void)setAssociated:(bool)arg1;
- (void)setOutputDevice:(id)arg1;

@end
