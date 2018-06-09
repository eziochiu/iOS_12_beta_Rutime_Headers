/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentResourceChange : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (bool)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (id)createCount;
- (id)deleteCount;
- (id)deletedTitle;
- (int)entityType;
- (unsigned int)publicStatus;
- (id)timestamp;
- (id)updateCount;

@end