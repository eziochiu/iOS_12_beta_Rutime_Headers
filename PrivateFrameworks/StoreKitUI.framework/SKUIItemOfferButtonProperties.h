/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemOfferButtonProperties : NSObject {
    double  _alpha;
    NSAttributedString * _attributedText;
    UIColor * _borderBackgroundColor;
    UIColor * _borderColor;
    CAFilter * _borderCompositingFilter;
    double  _borderCornerRadius;
    bool  _borderCornerRadiusMatchesHalfBoundingDimension;
    double  _borderWidth;
    UIImage * _borderedImage;
    bool  _cancelRecognizer;
    long long  _confirmationTitleStyle;
    bool  _hasBorderView;
    bool  _hasTitleLabel;
    UIImage * _image;
    double  _progress;
    bool  _progressIndeterminate;
    long long  _progressType;
    bool  _restores;
    UIColor * _textColor;
    long long  _titleStyle;
    bool  _universal;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIColor *borderBackgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, retain) CAFilter *borderCompositingFilter;
@property (nonatomic) double borderCornerRadius;
@property (nonatomic) bool borderCornerRadiusMatchesHalfBoundingDimension;
@property (nonatomic) double borderWidth;
@property (nonatomic, retain) UIImage *borderedImage;
@property (nonatomic) bool cancelRecognizer;
@property (nonatomic) long long confirmationTitleStyle;
@property (nonatomic) bool hasBorderView;
@property (nonatomic) bool hasTitleLabel;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double progress;
@property (nonatomic) bool progressIndeterminate;
@property (nonatomic) long long progressType;
@property (nonatomic) bool restores;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) long long titleStyle;
@property (nonatomic) bool universal;

- (void).cxx_destruct;
- (double)alpha;
- (id)attributedText;
- (id)borderBackgroundColor;
- (id)borderColor;
- (id)borderCompositingFilter;
- (double)borderCornerRadius;
- (bool)borderCornerRadiusMatchesHalfBoundingDimension;
- (double)borderWidth;
- (id)borderedImage;
- (bool)cancelRecognizer;
- (long long)confirmationTitleStyle;
- (bool)hasBorderView;
- (bool)hasTitleLabel;
- (id)image;
- (double)progress;
- (bool)progressIndeterminate;
- (long long)progressType;
- (bool)restores;
- (void)setAlpha:(double)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBorderBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderCompositingFilter:(id)arg1;
- (void)setBorderCornerRadius:(double)arg1;
- (void)setBorderCornerRadiusMatchesHalfBoundingDimension:(bool)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBorderedImage:(id)arg1;
- (void)setCancelRecognizer:(bool)arg1;
- (void)setConfirmationTitleStyle:(long long)arg1;
- (void)setHasBorderView:(bool)arg1;
- (void)setHasTitleLabel:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressIndeterminate:(bool)arg1;
- (void)setProgressType:(long long)arg1;
- (void)setRestores:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitleStyle:(long long)arg1;
- (void)setUniversal:(bool)arg1;
- (id)textColor;
- (long long)titleStyle;
- (bool)universal;

@end
