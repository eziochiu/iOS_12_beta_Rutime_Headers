/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {
    bool  _enabled;
    long long  _type;
}

@property (nonatomic) bool enabled;
@property (nonatomic) long long type;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { bool x1; int x2; int x3; }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTEmergencyMode:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
