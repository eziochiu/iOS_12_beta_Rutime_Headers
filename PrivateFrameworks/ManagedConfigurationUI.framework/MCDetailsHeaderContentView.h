/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCDetailsHeaderContentView : UIView {
    MCActionButton * _actionButton;
    UIImageView * _checkmarkView;
    UILabel * _displayNameLabel;
    id  _headerDelegate;
    int  _headerMode;
    bool  _hidesUntrustedLabel;
    bool  _isExpired;
    bool  _isNewPayload;
    bool  _isSigned;
    bool  _isTrusted;
    UILabel * _organizationNameLabel;
    MCUIGradientLabel * _trustedLabel;
    bool  _useTrustedNomenclature;
}

+ (id)_grayGradient;
+ (id)_greenGradient;
+ (id)_redGradient;
+ (void)_releaseGradients;

- (void).cxx_destruct;
- (void)_actionButtonPressed:(id)arg1;
- (bool)_canFitTrustedStringForWidth:(double)arg1;
- (id)_displayNameLabel;
- (id)_gradientForSigned:(bool)arg1 andTrusted:(bool)arg2;
- (id)_organizationNameLabel;
- (id)_scriptingInfo;
- (id)_stringForSigned:(bool)arg1 andTrusted:(bool)arg2;
- (id)_trustedLabel;
- (void)dealloc;
- (void)hideActionButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (void)layoutSubviews;
- (void)setActionToInstall;
- (void)setActionToRemove;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGradientColor:(int)arg1;
- (void)setHidesUntrustedLabel:(bool)arg1;
- (void)setIsExpired:(bool)arg1;
- (void)setIsSigned:(bool)arg1;
- (void)setIsTrusted:(bool)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setUseTrustedNomenclature:(bool)arg1;
- (void)showActionButton;

@end
