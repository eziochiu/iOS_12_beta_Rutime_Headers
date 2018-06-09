/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPeerPaymentAccountResolutionView : UIView {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _bodyLabel;
    UIView * _bottomRule;
    PKContinuousButton * _button;
    PKPeerPaymentContactResolver * _contactResolver;
    unsigned long long  _peerPaymentAccountResolution;
    PKPeerPaymentAccountResolutionController * _peerPaymentAccountResolutionController;
    bool  _showSpinner;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (id)_activityIndicator;
- (id)_bodyLabel;
- (id)_bodyText;
- (id)_bottomRule;
- (id)_button;
- (id)_buttonText;
- (id)_contactResolver;
- (bool)_displaysTitleLabel;
- (void)_handleButtonPressed:(id)arg1;
- (void)_showSpinner:(bool)arg1;
- (id)_titleLabel;
- (id)_titleText;
- (id)initWithAccountResolutionController:(id)arg1;
- (void)layoutSubviews;

@end
