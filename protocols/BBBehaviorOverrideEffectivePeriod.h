/* made by EzioChiu.
 */

@protocol BBBehaviorOverrideEffectivePeriod <NSCopying, NSSecureCoding, NSObject>

@required

- (bool)containsDate:(NSDate *)arg1;
- (NSUUID *)identifier;
- (NSDate *)nextTransitionDateAfterDate:(NSDate *)arg1;

@end
