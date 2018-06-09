/* made by EzioChiu.
 */

@protocol ICAnalyticsReporterAccessibilityDelegate

@required

- (bool)shouldPerformLoggingForSwitchControl;
- (bool)shouldPerformLoggingForVoiceOver;

@end
