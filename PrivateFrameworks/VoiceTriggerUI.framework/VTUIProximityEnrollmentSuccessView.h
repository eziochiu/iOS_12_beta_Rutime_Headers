/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIProximityEnrollmentSuccessView : UIView {
    UIView * _containerView;
    VTUIButton * _continueButton;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSString * _languageCode;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, readonly) VTUIButton *continueButton;

- (void).cxx_destruct;
- (void)_setImage:(id)arg1;
- (void)_setupConstraints;
- (void)_setupContent;
- (void)_setupImage;
- (id)continueButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
