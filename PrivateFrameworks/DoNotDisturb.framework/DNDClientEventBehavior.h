/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _interruptionSuppression;
}

@property (nonatomic, readonly) unsigned long long interruptionSuppression;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterruptionSuppression:(unsigned long long)arg1;
- (unsigned long long)interruptionSuppression;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_behaviorForModeDetails:(id)arg1;

@end
