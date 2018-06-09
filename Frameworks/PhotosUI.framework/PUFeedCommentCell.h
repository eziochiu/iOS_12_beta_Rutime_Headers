/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedCommentCell : PUFeedCell {
    UITextView * __textView;
    NSAttributedString * _attributedText;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    long long  _numberOfTextLines;
    bool  _shouldUseOpaqueBackground;
    long long  _textAlignment;
}

@property (nonatomic, readonly) UITextView *_textView;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long numberOfTextLines;
@property (nonatomic) bool shouldUseOpaqueBackground;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_textView;
- (id)_textViewBackgroundColor;
- (void)_updateLabelsBackgroundColor;
- (id)attributedText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfTextLines;
- (void)setAttributedText:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNumberOfTextLines:(long long)arg1;
- (void)setShouldUseOpaqueBackground:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (bool)shouldUseOpaqueBackground;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)textAlignment;

@end
