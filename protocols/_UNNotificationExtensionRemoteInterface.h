/* made by EzioChiu.
 */

@protocol _UNNotificationExtensionRemoteInterface

@required

- (void)_didReceiveNotification:(UNNotification *)arg1;
- (void)_didReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)_loadAudioAccessoryViewForNotification:(UNNotification *)arg1;
- (void)_mediaPause;
- (void)_mediaPlay;
- (void)_preserveInputViews;
- (void)_restoreInputViews;
- (void)_updateMediaPlayPauseButton;

@end
