/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAlarm : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)absoluteDate;
- (id)acknowledgedDate;
- (long long)alarmType;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)externalData;
- (id)externalID;
- (bool)isDefaultAlarm;
- (id)location;
- (id)originalAlarm;
- (long long)proximity;
- (id)relativeOffset;
- (void)setAbsoluteDate:(id)arg1;
- (void)setAcknowledgedDate:(id)arg1;
- (void)setAlarmType:(long long)arg1;
- (void)setCalendarItemOwner:(id)arg1;
- (void)setCalendarOwner:(id)arg1;
- (void)setDefaultAlarm:(bool)arg1;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOriginalAlarm:(id)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRelativeOffset:(id)arg1;
- (void)setSnoozedAlarms:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)snoozedAlarms;
- (id)structuredLocation;

@end
