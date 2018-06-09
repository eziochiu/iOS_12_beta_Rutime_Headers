/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCoalescingHeaderItem : NSObject <NCNotificationListCoalescingItem> {
    NSString * _coalescingIdentifier;
    NSString * _sectionTitle;
}

@property (nonatomic, readonly, copy) NSString *coalescingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly, copy) NSString *sectionTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coalescingIdentifier;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithCoalescingIdentifier:(id)arg1 sectionTitle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemType;
- (id)sectionTitle;

@end
