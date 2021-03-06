/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDStateUpdate : NSObject <NSCopying, NSSecureCoding> {
    DNDState * _previousState;
    DNDState * _state;
}

@property (nonatomic, readonly, copy) DNDState *previousState;
@property (nonatomic, readonly, copy) DNDState *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousState:(id)arg1 state:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)previousState;
- (id)state;

@end
