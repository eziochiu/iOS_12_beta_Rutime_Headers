/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSCuratedViewModel : VSViewModel <VSLogoImageViewModel> {
    bool  _beginValidationButtonEnabled;
    NSString * _beginValidationButtonTitle;
    NSString * _footerText;
    VSOptional * _identityProviderDisplayName;
    UIImage * _logo;
    NSString * _logoAccessibilityLabel;
    NSItemProvider * _logoProvider;
    NSString * _message;
    NSString * _notice;
    bool  _showFooter;
}

@property (getter=isBeginValidationButtonEnabled, nonatomic) bool beginValidationButtonEnabled;
@property (nonatomic, copy) NSString *beginValidationButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSOptional *identityProviderDisplayName;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, copy) NSString *logoAccessibilityLabel;
@property (nonatomic, retain) NSItemProvider *logoProvider;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *notice;
@property (nonatomic) bool showFooter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beginValidationButtonTitle;
- (void)configureWithRequest:(id)arg1;
- (id)footerText;
- (id)identityProviderDisplayName;
- (id)init;
- (bool)isBeginValidationButtonEnabled;
- (id)logo;
- (id)logoAccessibilityLabel;
- (id)logoProvider;
- (id)message;
- (id)notice;
- (void)setBeginValidationButtonEnabled:(bool)arg1;
- (void)setBeginValidationButtonTitle:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setIdentityProviderDisplayName:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoAccessibilityLabel:(id)arg1;
- (void)setLogoProvider:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setNotice:(id)arg1;
- (void)setShowFooter:(bool)arg1;
- (bool)showFooter;

@end
