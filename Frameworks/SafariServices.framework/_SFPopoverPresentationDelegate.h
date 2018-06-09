/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFPopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {
    UIPopoverPresentationController * _popoverPresentationController;
    bool  _popoverUsesAdaptivePresentationInCompact;
    <_SFPopoverSourceInfo> * _sourceInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool popoverUsesAdaptivePresentationInCompact;
@property (readonly) Class superclass;

+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReaderAppearanceButtonInNavigationBar:(id)arg2;
+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReaderButtonInNavigationBar:(id)arg2;
+ (void)attachDelegateToPopoverPresentationController:(id)arg1 anchoredToReloadButtonInNavigationBar:(id)arg2;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)attachToPopoverPresentationController:(id)arg1;
- (id)initWithSourceInfo:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverUsesAdaptivePresentationInCompact;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)setPopoverUsesAdaptivePresentationInCompact:(bool)arg1;
- (void)updatePopoverPosition;

@end
