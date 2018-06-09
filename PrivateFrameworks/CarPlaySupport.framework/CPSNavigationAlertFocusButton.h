/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationAlertFocusButton : CPSButton {
    CPSNavigationAlertProgressView * _altFocusProgressView;
}

@property (nonatomic) CPSNavigationAlertProgressView *altFocusProgressView;

- (void).cxx_destruct;
- (id)altFocusProgressView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAltFocusProgressView:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end
