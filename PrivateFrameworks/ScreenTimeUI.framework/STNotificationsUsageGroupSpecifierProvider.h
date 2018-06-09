/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STNotificationsUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    PSSpecifier * _notificationsSummaryGraphSpecifier;
    NSDictionary * _usageItemsByIdentifier;
}

@property (nonatomic, retain) PSSpecifier *notificationsSummaryGraphSpecifier;
@property (nonatomic, copy) NSDictionary *usageItemsByIdentifier;

- (void).cxx_destruct;
- (id)getNotificationsInfo:(id)arg1;
- (id)getUsageReport:(id)arg1;
- (id)init;
- (id)notificationsSummaryGraphSpecifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setNotificationsSummaryGraphSpecifier:(id)arg1;
- (void)setUsageItemsByIdentifier:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)usageItemsByIdentifier;

@end
