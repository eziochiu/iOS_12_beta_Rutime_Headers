/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceId;
    NSString * _deviceName;
    NSString * _idsDeviceId;
    bool  _isActiveDevice;
    bool  _isAutoMeCapable;
    bool  _isThisDevice;
}

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *idsDeviceId;
@property (nonatomic) bool isActiveDevice;
@property (nonatomic) bool isAutoMeCapable;
@property (nonatomic) bool isThisDevice;

+ (id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(bool)arg4 isThisDevice:(bool)arg5 isAutoMeCapable:(bool)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)deviceId;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsDeviceId;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveDevice;
- (bool)isAutoMeCapable;
- (bool)isEqual:(id)arg1;
- (bool)isThisDevice;
- (void)setDeviceId:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIdsDeviceId:(id)arg1;
- (void)setIsActiveDevice:(bool)arg1;
- (void)setIsAutoMeCapable:(bool)arg1;
- (void)setIsThisDevice:(bool)arg1;
- (void)updateIsActive:(bool)arg1 isThisDevice:(bool)arg2;

@end
