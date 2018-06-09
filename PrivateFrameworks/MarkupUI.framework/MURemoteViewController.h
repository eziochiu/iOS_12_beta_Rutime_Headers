/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MURemoteViewController : _UIRemoteViewController <MURemoteViewProtocol> {
    id /* block */  _finishedWithResultsCompletionBlock;
    long long  _sandboxExtensionHandle;
    bool  _shouldResignFirstResponder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finishedWithResultsCompletionBlock;
@property (readonly) unsigned long long hash;
@property long long sandboxExtensionHandle;
@property bool shouldResignFirstResponder;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)beginDismissWithInfo:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id /* block */)finishedWithResultsCompletionBlock;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (long long)sandboxExtensionHandle;
- (void)serviceDidFinishwithResults:(id)arg1 andSandboxExtension:(id)arg2;
- (void)setFinishedWithResultsCompletionBlock:(id /* block */)arg1;
- (void)setSandboxExtensionHandle:(long long)arg1;
- (void)setShouldResignFirstResponder:(bool)arg1;
- (bool)shouldResignFirstResponder;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
