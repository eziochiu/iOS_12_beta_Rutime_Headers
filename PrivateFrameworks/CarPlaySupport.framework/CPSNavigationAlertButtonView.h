/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationAlertButtonView : UIView {
    CPSNavigationAlertFocusButton * _primaryButton;
    CPSNavigationAlertFocusButton * _secondaryButton;
}

@property (nonatomic, retain) CPSNavigationAlertFocusButton *primaryButton;
@property (nonatomic, retain) CPSNavigationAlertFocusButton *secondaryButton;

- (void).cxx_destruct;
- (id)initWithPrimaryAction:(id)arg1 secondaryAction:(id)arg2 progressView:(id)arg3;
- (id)primaryButton;
- (id)secondaryButton;
- (void)setPrimaryButton:(id)arg1;
- (void)setSecondaryButton:(id)arg1;

@end
