/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long  _interruptionBehavior;
}

@property (nonatomic, readonly) unsigned long long interruptionBehavior;

+ (bool)supportsSecureCoding;

- (id)_initWithInterruptionBehavior:(unsigned long long)arg1;
- (id)_initWithSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interruptionBehavior;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
