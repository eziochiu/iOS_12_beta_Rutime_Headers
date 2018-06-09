/* made by EzioChiu.
 */

@protocol DCAnalyticsReporterAccessibilityDelegate

@required

- (bool)shouldPerformLoggingForSwitchControl;
- (bool)shouldPerformLoggingForVoiceOver;

@end
