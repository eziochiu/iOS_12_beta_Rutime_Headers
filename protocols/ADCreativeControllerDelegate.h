/* made by EzioChiu.
 */

@protocol ADCreativeControllerDelegate <NSObject>

@required

- (void)creativeControllerNavigationAttemptBlockedDueToAccidentalTap;
- (void)creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvoked;
- (void)creativeControllerVideoCompletedWithVolume:(float)arg1;
- (void)creativeControllerVideoCreativeViewLoaded;
- (void)creativeControllerVideoExitFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoFullScreenTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMoreInfoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoMuted:(float)arg1;
- (void)creativeControllerVideoPaused:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoProgressed:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoResumedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoSkipAdTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoStartedPlaying:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoTapped:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoUnmuted:(float)arg1 volume:(float)arg2;
- (void)creativeControllerVideoViewabilityChanged:(bool)arg1 playTime:(float)arg2 volume:(float)arg3;
- (void)creativeControllerVideoVolumeChanged:(float)arg1 playTime:(float)arg2;
- (void)creativeControllerViewDidRequestCloseWithTapLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)creativeControllerViewDidRequestCreateCalendarEvent:(NSDictionary *)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)creativeControllerViewDidRequestExpandURL:(NSURL *)arg1 withMaximumSize:(struct CGSize { double x1; double x2; })arg2 withTapLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)creativeControllerViewDidRequestOpenURL:(NSURL *)arg1 withTapLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
