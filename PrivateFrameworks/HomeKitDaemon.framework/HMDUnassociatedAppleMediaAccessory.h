/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging> {
    bool  _currentAccessory;
    HMDDevice * _device;
    NSString * _model;
    NSString * _serialNumber;
    HMFSoftwareVersion * _softwareVersion;
}

@property (getter=isCurrentAccessory, nonatomic) bool currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (retain) NSString *model;
@property (retain) NSString *serialNumber;
@property (retain) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (Class)modelClass;
+ (id)namespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)device;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isCurrentAccessory;
- (id)logIdentifier;
- (id)model;
- (id)serialNumber;
- (void)setCurrentAccessory:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (id)softwareVersion;

@end
