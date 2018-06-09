/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKPlaceholderTextView : UITextView {
    UILabel * _placeholder;
    bool  _showingPlaceholder;
}

- (void).cxx_destruct;
- (id)_placeholderLabel;
- (void)_updatePlaceholder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;

@end
