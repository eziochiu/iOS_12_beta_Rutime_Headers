/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCAccessibility : NSObject <DCAccessibilityExtras, DCAnalyticsReporterAccessibilityDelegate>

+ (id)sharedInstance;

- (bool)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (bool)shouldPerformLoggingForSwitchControl;
- (bool)shouldPerformLoggingForVoiceOver;

@end
