/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>

+ (id)lifetimeForUserRequest;
+ (id)lifetimeUntilEndOfCalendarEventWithIdentifier:(id)arg1;
+ (id)lifetimeWithCalendarEventIdentifier:(id)arg1;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDateInterval:(id)arg1;
+ (id)lifetimeWithDuration:(double)arg1;
+ (bool)supportsSecureCoding;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
