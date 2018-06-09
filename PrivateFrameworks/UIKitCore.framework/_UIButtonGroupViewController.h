/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    NSArray * _barButtonItemGroups;
    _UIButtonBar * _buttonBar;
    _UIButtonBar * _originalOwner;
    bool  _overLightKeyboard;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupForDismissal;
- (void)dismissIfNecessary;
- (id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
