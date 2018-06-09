/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFResidentDeviceStatusDetailsItem : HFItem <HFHomeKitItemProtocol> {
    HMHome * _home;
    HMResidentDevice * _residentDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMResidentDevice *residentDevice;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 residentDevice:(id)arg2;
- (id)residentDevice;

@end
