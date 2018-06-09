/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)IsFollowUpItemNotificationForced:(id)arg1;
- (id)_actionFromInfo:(id)arg1;
- (id)_actionsFromPayload:(id)arg1;
- (id)_clearAction;
- (id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2;
- (id)_notificationFromPayload:(id)arg1;
- (id)actionWithTitle:(id)arg1 andActionKey:(id)arg2;
- (id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1;
- (id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2;

@end
