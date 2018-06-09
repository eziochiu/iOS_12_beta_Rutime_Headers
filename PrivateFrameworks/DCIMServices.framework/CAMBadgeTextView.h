/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMBadgeTextView : CAMBadgeView {
    NSString * __text;
    NSDictionary * __textAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __textInsets;
    NSString * _contentSizeCategory;
}

@property (setter=_setText:, nonatomic, copy) NSString *_text;
@property (setter=_setTextAttributes:, nonatomic, retain) NSDictionary *_textAttributes;
@property (setter=_setTextInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textInsets;
@property (nonatomic, copy) NSString *contentSizeCategory;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultTextInsets;
+ (id)_fontForContentSize:(id)arg1;
+ (double)_heightForContentSize:(id)arg1 textInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (id)_textAttributesForContentSize:(id)arg1;
+ (double)_textHeightForContentSize:(id)arg1;

- (void).cxx_destruct;
- (id)_maskImage;
- (void)_setText:(id)arg1;
- (void)_setTextAttributes:(id)arg1;
- (void)_setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_text;
- (id)_textAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (struct CGSize { double x1; double x2; })_textSize;
- (id)contentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setContentSizeCategory:(id)arg1;

@end
