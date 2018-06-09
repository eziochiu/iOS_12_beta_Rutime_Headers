/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFEraseDeviceRequest : DMFTaskRequest {
    unsigned long long  _dataResetOptions;
    unsigned long long  _eraseDeviceType;
    bool  _hideProximitySetupPane;
    NSString * _pin;
}

@property (nonatomic) unsigned long long dataResetOptions;
@property (nonatomic) unsigned long long eraseDeviceType;
@property (nonatomic) bool hideProximitySetupPane;
@property (nonatomic, copy) NSString *pin;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)dataResetOptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eraseDeviceType;
- (bool)hideProximitySetupPane;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)pin;
- (void)setDataResetOptions:(unsigned long long)arg1;
- (void)setEraseDeviceType:(unsigned long long)arg1;
- (void)setHideProximitySetupPane:(bool)arg1;
- (void)setPin:(id)arg1;

@end
