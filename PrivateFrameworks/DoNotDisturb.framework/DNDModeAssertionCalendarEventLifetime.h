/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime {
    NSString * _eventIdentifier;
    bool  _onlyDuringEvent;
}

@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (getter=isOnlyDuringEvent, nonatomic, readonly) bool onlyDuringEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 onlyDuringEvent:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnlyDuringEvent;

@end
