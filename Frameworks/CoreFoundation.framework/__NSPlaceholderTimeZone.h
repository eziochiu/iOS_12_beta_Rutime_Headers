/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSPlaceholderTimeZone : NSTimeZone

+ (id)immutablePlaceholder;
+ (void)initialize;

- (id)__initWithName:(id)arg1 cache:(bool)arg2;
- (id)__initWithName:(id)arg1 data:(id)arg2 cache:(bool)arg3;
- (id)abbreviationForDate:(id)arg1;
- (id)data;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (bool)isDaylightSavingTimeForDate:(id)arg1;
- (id)name;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (long long)secondsFromGMTForDate:(id)arg1;

@end
