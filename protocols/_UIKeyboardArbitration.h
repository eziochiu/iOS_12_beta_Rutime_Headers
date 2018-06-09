/* made by EzioChiu.
 */

@protocol _UIKeyboardArbitration

@required

- (void)applicationShouldFocusWithBundle:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notifyHostedPIDsOfSuppression:(bool)arg1;
- (void)retrieveDebugInformation:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)retrieveMoreDebugInformationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)setKeyboardTotalDisable:(void *)arg1 withFence:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setWantsFencing:(bool)arg1;
- (void)setWindowContextID:(unsigned int)arg1 sceneIdentifier:(NSString *)arg2 forKeyboard:(bool)arg3 withLevel:(double)arg4;
- (void)setWindowHostingPID:(int)arg1 active:(bool)arg2;
- (void)signalKeyboardChangeComplete;
- (void)signalKeyboardChanged:(void *)arg1 onCompletion:(void *)arg2; // needs 2 arg types, found 6: _UIKeyboardChangedInformation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startArbitrationWithExpectedState:(void *)arg1 hostingPIDs:(void *)arg2 usingFence:(void *)arg3 withSuppression:(void *)arg4 onConnected:(void *)arg5; // needs 5 arg types, found 11: _UIKeyboardChangedInformation *, NSArray *, bool, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIKeyboardChangedInformation *, bool, void*
- (void)transition:(NSString *)arg1 eventStage:(unsigned long long)arg2 withInfo:(NSDictionary *)arg3;

@end
