/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView {
    UIAlertController * _alertController;
    bool  _scrollableHeaderViewHasRealContent;
}

@property (nonatomic) UIAlertController *alertController;
@property (nonatomic) bool scrollableHeaderViewHasRealContent;

- (void).cxx_destruct;
- (id)_alertController;
- (bool)_shouldInstallContentGuideConstraints;
- (bool)_shouldShowSeparatorAboveActionsSequenceView;
- (id)alertController;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
- (id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (bool)scrollableHeaderViewHasRealContent;
- (void)setAlertController:(id)arg1;
- (void)setScrollableHeaderViewHasRealContent:(bool)arg1;

@end
