/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListNotificationRequestItem : NSObject <NCNotificationListItem> {
    NCNotificationRequest * _notificationRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)notificationRequest;

@end
