/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCCoalescedNotification : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NCNotificationContent * _content;
    NSMutableArray * _notificationRequests;
    NCNotificationOptions * _options;
    NSString * _sectionIdentifier;
    NSString * _threadIdentifier;
}

@property (nonatomic, readonly, copy) NCNotificationContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *notificationRequests;
@property (nonatomic, readonly) NCNotificationOptions *options;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;

- (void).cxx_destruct;
- (bool)canCoalesceNotificationRequest:(id)arg1;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoalescedNotification:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationRequestMatchingRequest:(id)arg1;
- (id)notificationRequests;
- (id)options;
- (id)sectionIdentifier;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)threadIdentifier;

@end
