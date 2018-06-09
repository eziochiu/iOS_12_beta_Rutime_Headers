/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKCellEditorField : UIView {
    UILabel * mLeftSymbolView;
    UILabel * mRightSymbolView;
    UITextView * mTextView;
}

@property (nonatomic, retain) NSString *leftSymbol;
@property (nonatomic, retain) UILabel *leftSymbolView;
@property (nonatomic, retain) NSString *rightSymbol;
@property (nonatomic, retain) UILabel *rightSymbolView;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) UITextView *textView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftSymbol;
- (id)leftSymbolView;
- (id)p_symbolContainerBackgroundColor;
- (id)rightSymbol;
- (id)rightSymbolView;
- (void)setLeftSymbol:(id)arg1;
- (void)setLeftSymbolView:(id)arg1;
- (void)setRightSymbol:(id)arg1;
- (void)setRightSymbolView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)text;
- (id)textView;

@end
