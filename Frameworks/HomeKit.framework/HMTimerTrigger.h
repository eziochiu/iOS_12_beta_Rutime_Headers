/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTimerTrigger : HMTrigger <HFTriggerProtocol, NSSecureCoding> {
    NSDate * _fireDate;
    NSDateComponents * _recurrence;
    NSCalendar * _recurrenceCalendar;
    NSArray * _recurrences;
    NSString * _significantEvent;
    NSDateComponents * _significantEventOffset;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *fireDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDateComponents *recurrence;
@property (nonatomic, readonly, copy) NSCalendar *recurrenceCalendar;
@property (nonatomic, readonly, copy) NSArray *recurrences;
@property (nonatomic, readonly, copy) NSString *significantEvent;
@property (nonatomic, readonly, copy) NSDateComponents *significantEventOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleScheduleChangedNotification:(id)arg1;
- (void)_handleTriggerFired:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateSignificantEventOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 recurrenceCalendar:(id)arg5;
- (id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4;
- (id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4;
- (id)recurrence;
- (id)recurrenceCalendar;
- (id)recurrences;
- (void)setFireDate:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (void)setSignificantEventOffset:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)significantEvent;
- (id)significantEventOffset;
- (id)timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrence:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateTimeZone:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 timeString:(id)arg2 fireDate:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 fireDate:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3 recurrences:(id)arg4 type:(unsigned long long)arg5;

- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)hf_triggerType;

@end
