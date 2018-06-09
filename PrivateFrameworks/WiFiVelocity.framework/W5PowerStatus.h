/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding> {
    int  _batteryWarningLevel;
    double  _internalBatteryLevel;
    long long  _powerSourceType;
    unsigned int  _powerStateCaps;
}

@property (nonatomic) int batteryWarningLevel;
@property (nonatomic) double internalBatteryLevel;
@property (nonatomic) long long powerSourceType;
@property (nonatomic) unsigned int powerStateCaps;

+ (bool)supportsSecureCoding;

- (int)batteryWarningLevel;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (double)internalBatteryLevel;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPowerStatus:(id)arg1;
- (long long)powerSourceType;
- (unsigned int)powerStateCaps;
- (void)setBatteryWarningLevel:(int)arg1;
- (void)setInternalBatteryLevel:(double)arg1;
- (void)setPowerSourceType:(long long)arg1;
- (void)setPowerStateCaps:(unsigned int)arg1;

@end
