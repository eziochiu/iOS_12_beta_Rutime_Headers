/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSMutableArray * _coalescedNotificationRequests;
    NSNumberFormatter * _decimalFormatter;
    bool  _deviceAuthenticated;
    NCNotificationSummaryBuilder * _summaryBuilder;
}

@property (nonatomic, retain) NSMutableArray *coalescedNotificationRequests;
@property (getter=isDeviceAuthenticated, nonatomic) bool deviceAuthenticated;

- (void).cxx_destruct;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)arg1;
- (id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(unsigned long long)arg2;
- (id)_placeholderSecondaryText;
- (bool)_shouldShowContent;
- (bool)_shouldShowNotificationBody;
- (void)_updateSummaryText;
- (unsigned long long)coalesceCount;
- (void)coalesceNotificationRequest:(id)arg1;
- (id)coalescedNotificationRequests;
- (bool)containsMatchingCoalescedNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;
- (bool)isDeviceAuthenticated;
- (id)notificationRequest;
- (id)primarySubtitleText;
- (id)primaryText;
- (void)removeCoalescedNotificationRequest:(id)arg1;
- (id)secondaryText;
- (void)setCoalescedNotificationRequests:(id)arg1;
- (void)setDeviceAuthenticated:(bool)arg1;
- (id)summaryText;
- (id)thumbnail;
- (void)updateCoalescedNotificationRequest:(id)arg1;

@end
