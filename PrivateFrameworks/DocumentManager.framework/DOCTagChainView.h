/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCTagChainView : UIView {
    UIColor * _borderColor;
    double  _knockOutBorderWidth;
    unsigned long long  _spacing;
    NSArray * _tagColors;
    double  _tagDimension;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double knockOutBorderWidth;
@property (nonatomic) unsigned long long spacing;
@property (nonatomic, retain) NSArray *tagColors;
@property (nonatomic) double tagDimension;

+ (void)drawTagsInContext:(struct CGContext { }*)arg1 diameter:(double)arg2 horizontalSpacing:(unsigned long long)arg3 layoutDirection:(long long)arg4 tagColors:(id)arg5 borderColor:(id)arg6 knockOutBorderWidth:(double)arg7;
+ (double)horizontalSpacingForSpace:(unsigned long long)arg1 tagDiameter:(double)arg2;
+ (struct CGSize { double x1; double x2; })sizeForDiameter:(double)arg1 horizontalSpacing:(unsigned long long)arg2 tags:(id)arg3;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)borderColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)horizontalSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)knockOutBorderWidth;
- (void)setBorderColor:(id)arg1;
- (void)setKnockOutBorderWidth:(double)arg1;
- (void)setSpacing:(unsigned long long)arg1;
- (void)setTagColors:(id)arg1;
- (void)setTagDimension:(double)arg1;
- (void)setknockOutBorderWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (unsigned long long)spacing;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tagColors;
- (double)tagDimension;

@end
