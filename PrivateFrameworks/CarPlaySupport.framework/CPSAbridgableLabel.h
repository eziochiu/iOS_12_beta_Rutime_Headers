/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSAbridgableLabel : UILabel {
    NSArray * _textVariants;
    unsigned long long  _variantsIndex;
}

@property (nonatomic, copy) NSArray *textVariants;
@property (nonatomic) unsigned long long variantsIndex;

+ (id)sanitizedTextForText:(id)arg1;

- (void).cxx_destruct;
- (long long)_compareBoundsSizeToLayoutSizeForString:(id)arg1;
- (void)_updateVariant;
- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextVariants:(id)arg1;
- (void)setVariantsIndex:(unsigned long long)arg1;
- (id)textVariants;
- (unsigned long long)variantsIndex;

@end
