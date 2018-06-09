/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAbbreviatingLabel : UILabel {
    NSMutableArray * _textRepresentationSizes;
    NSArray * _textRepresentations;
}

@property (nonatomic, copy) NSArray *textRepresentations;

- (void).cxx_destruct;
- (void)_calculateTextSizes;
- (void)_selectBestRepresentation;
- (void)_setTextRepresentation:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextRepresentations:(id)arg1;
- (id)textRepresentations;

@end
