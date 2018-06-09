/* made by EzioChiu.
 */

@protocol SVSSiriViewControllerHosting <NSObject>

@required

- (void)getScreenshotWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)handlePasscodeUnlockWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)notifyOnNextUserInteraction;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(void *)arg1 replyHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFBulletin *, void*
- (void)serviceDidChangeUserAttentionStatus:(bool)arg1;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceDidEnterUITrackingMode;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidFinishTest:(NSString *)arg1;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(NSString *)arg1;
- (void)serviceDidRequestCurrentTextInput:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)serviceDidRequestKeyboard:(bool)arg1;
- (void)serviceDidRequestKeyboard:(bool)arg1 minimized:(bool)arg2;
- (void)serviceDidResetTextInput;
- (void)serviceFailTest:(NSString *)arg1 withReason:(NSString *)arg2;
- (void)serviceLaunchApplicationWithBundleIdentifier:(void *)arg1 withURL:(void *)arg2 launchOptions:(void *)arg3 replyHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSURL *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)serviceOpenURL:(NSURL *)arg1 appBundleID:(NSString *)arg2 allowSiriDismissal:(bool)arg3;
- (void)serviceOpenURL:(void *)arg1 delaySessionEndForTTS:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceRequestsActivationSourceWithReplyHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)serviceRequestsDismissalWithDelayForTTS:(bool)arg1 userInfo:(NSDictionary *)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(AFUIRequestOptions *)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillBeginTapToEdit;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillStartTest:(NSString *)arg1;
- (void)setBugReportingAvailable:(bool)arg1;
- (void)setCarDisplayGatekeeperVisible:(bool)arg1;
- (void)setCarDisplaySnippetVisible:(bool)arg1;
- (void)setHelpButtonEmphasized:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setStatusBarHidden:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setStatusViewDisabled:(bool)arg1;
- (void)setStatusViewHidden:(bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(bool)arg1;
- (void)siriIdleAndQuietStatusDidChange:(bool)arg1;

@optional

- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;

@end
