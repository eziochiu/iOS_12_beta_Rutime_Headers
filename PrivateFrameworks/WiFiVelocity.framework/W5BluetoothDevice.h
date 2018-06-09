/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5BluetoothDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSString * _afhMap;
    long long  _connectionMode;
    long long  _connectionModeInterval;
    bool  _isAppleDevice;
    bool  _isCloudPaired;
    bool  _isConnected;
    bool  _isLowEnergy;
    bool  _isPaired;
    unsigned long long  _lmpSubversion;
    unsigned long long  _lmpVersion;
    unsigned long long  _majorClass;
    long long  _manufacturer;
    unsigned long long  _minorClass;
    NSString * _name;
    long long  _role;
    long long  _rssi;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *afhMap;
@property (nonatomic) long long connectionMode;
@property (nonatomic) long long connectionModeInterval;
@property (nonatomic) bool isAppleDevice;
@property (nonatomic) bool isCloudPaired;
@property (nonatomic) bool isConnected;
@property (nonatomic) bool isLowEnergy;
@property (nonatomic) bool isPaired;
@property (nonatomic) unsigned long long lmpSubversion;
@property (nonatomic) unsigned long long lmpVersion;
@property (nonatomic) unsigned long long majorClass;
@property (nonatomic) long long manufacturer;
@property (nonatomic) unsigned long long minorClass;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long role;
@property (nonatomic) long long rssi;

+ (bool)supportsSecureCoding;

- (id)address;
- (id)afhMap;
- (bool)conformsToProtocol:(id)arg1;
- (long long)connectionMode;
- (long long)connectionModeInterval;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAppleDevice;
- (bool)isCloudPaired;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBluetoothDevice:(id)arg1;
- (bool)isLowEnergy;
- (bool)isPaired;
- (unsigned long long)lmpSubversion;
- (unsigned long long)lmpVersion;
- (unsigned long long)majorClass;
- (long long)manufacturer;
- (unsigned long long)minorClass;
- (id)name;
- (long long)role;
- (long long)rssi;
- (void)setAddress:(id)arg1;
- (void)setAfhMap:(id)arg1;
- (void)setConnectionMode:(long long)arg1;
- (void)setConnectionModeInterval:(long long)arg1;
- (void)setIsAppleDevice:(bool)arg1;
- (void)setIsCloudPaired:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)setIsLowEnergy:(bool)arg1;
- (void)setIsPaired:(bool)arg1;
- (void)setLmpSubversion:(unsigned long long)arg1;
- (void)setLmpVersion:(unsigned long long)arg1;
- (void)setMajorClass:(unsigned long long)arg1;
- (void)setManufacturer:(long long)arg1;
- (void)setMinorClass:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRole:(long long)arg1;
- (void)setRssi:(long long)arg1;

@end
