/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceBluetooth : RTSource <NSCopying, NSSecureCoding> {
    NSString * _deviceName;
    long long  _deviceType;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) long long deviceType;

+ (id)stringFromBluetoothDeviceType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
