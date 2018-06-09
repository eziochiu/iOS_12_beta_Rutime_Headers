/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastPickerStandaloneViewController : RPBroadcastPickerViewController {
    <RPBroadcastPickerViewControllerDelegate> * _delegate;
    RPModalPresentationWindow * _presentationWindow;
}

@property (nonatomic) <RPBroadcastPickerViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissAfter:(double)arg1;
- (void)presentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewControllerDidFinish;
- (void)viewDidDisappear:(bool)arg1;

@end
