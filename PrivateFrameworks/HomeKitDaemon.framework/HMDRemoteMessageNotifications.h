/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteMessageNotifications : HMFObject {
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMapTable * _sessionNotificationPayloads;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSMapTable *sessionNotificationPayloads;

+ (void)initialize;
+ (bool)messageExpectsNotificationResponse:(id)arg1;
+ (id)messagesWithNotificationResponses;

- (void).cxx_destruct;
- (id)_notificationPayloadsForDevice:(id)arg1;
- (void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3;
- (void)clearNotificationsForDevice:(id)arg1;
- (id)description;
- (id)init;
- (id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (id)propertyQueue;
- (void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (id)sessionNotificationPayloads;
- (void)setPropertyQueue:(id)arg1;
- (void)setSessionNotificationPayloads:(id)arg1;

@end
