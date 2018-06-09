/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDState : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    NSArray * _activeModeIdentifiers;
    bool  _willSuppressInterruptions;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSArray *activeModeIdentifiers;
@property (nonatomic, readonly) bool willSuppressInterruptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeModeIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActive:(bool)arg1 willSuppressInterruptions:(bool)arg2 activeModeIdentifiers:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)willSuppressInterruptions;

@end
