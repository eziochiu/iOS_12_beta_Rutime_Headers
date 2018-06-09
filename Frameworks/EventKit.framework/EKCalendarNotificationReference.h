/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarNotificationReference : NSObject {
    NSDate * _date;
    EKEventStore * _eventStore;
    EKCalendarNotification * _notification;
    EKObjectID * _objectID;
    int  _type;
}

@property (nonatomic, readonly) EKCalendarNotification *notification;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
- (id)description;
- (id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4;
- (id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3;
- (id)notification;
- (int)type;

@end
