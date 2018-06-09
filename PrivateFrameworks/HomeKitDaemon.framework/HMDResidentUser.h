/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentUser : HMDUser {
    unsigned long long  _configurationState;
    HMDDevice * _device;
}

@property unsigned long long configurationState;
@property (readonly) HMDDevice *device;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)configurationState;
- (id)device;
- (id)deviceIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 configurationState:(unsigned long long)arg4;
- (id)initWithModelObject:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (bool)refreshDisplayName;
- (void)registerIdentity;
- (bool)requiresMakoSupport;
- (void)setConfigurationState:(unsigned long long)arg1;
- (void)setDevice:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (bool)updateWithDevice:(id)arg1;
- (id)userID;

@end
