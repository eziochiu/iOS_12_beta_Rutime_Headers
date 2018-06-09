/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController {
    bool  _includeExplanation;
}

@property (nonatomic) bool includeExplanation;

- (void)_configureView;
- (bool)includeExplanation;
- (void)setIncludeExplanation:(bool)arg1;

@end
