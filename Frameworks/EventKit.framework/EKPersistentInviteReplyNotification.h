/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentInviteReplyNotification : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (bool)alerted;
- (id)calendar;
- (id)calendarName;
- (id)creationDate;
- (int)entityType;
- (id)inviteReplyCalendar;
- (id)shareeAddressURL;
- (id)shareeDisplayName;
- (id)shareeFirstName;
- (id)shareeLastName;
- (unsigned long long)status;

@end
