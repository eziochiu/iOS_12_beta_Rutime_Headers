/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAccessibility : NSObject <ICAccessibilityExtras, ICAnalyticsReporterAccessibilityDelegate>

+ (id)sharedInstance;

- (bool)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;
- (bool)shouldPerformLoggingForSwitchControl;
- (bool)shouldPerformLoggingForVoiceOver;

@end
