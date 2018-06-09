/* made by EzioChiu.
 */

@protocol SiriUISnippetViewControllerDelegate <SiriUIAceObjectViewControllerDelegate>

@required

- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 didShowGuideStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 pushSirilandSnippets:(NSArray *)arg2;
- (void)siriSnippetViewController:(void *)arg1 requestPasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: SiriUISnippetViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)siriSnippetViewController:(id <SiriUIViewController>)arg1 setStatusBarHidden:(bool)arg2 animated:(bool)arg3;
- (void)siriSnippetViewController:(void *)arg1 setStatusBarHidden:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <SiriUIViewController> *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriSnippetViewController:(void *)arg1 shouldPresentPicker:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriUIViewController> *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)siriSnippetViewControllerIsVisible:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewControllerViewDidLoad:(id <SiriUIViewController>)arg1;
- (void)siriSnippetViewControllerWillBecomeFirstResponder:(id <SiriUIViewController>)arg1;

@optional

- (unsigned long long)navigationIndexOfSnippetViewController:(SiriUISnippetViewController *)arg1;
- (unsigned long long)siriDeviceLockStateForSnippetViewController:(id <SiriUIViewController>)arg1;
- (NSSet *)siriEnabledAppListForSiriViewController:(id <SiriUIViewController>)arg1;

@end
