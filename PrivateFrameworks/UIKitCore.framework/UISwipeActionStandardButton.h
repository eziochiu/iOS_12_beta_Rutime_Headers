/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwipeActionStandardButton : UISwipeActionButton {
    double  _buttonWidth;
    double  _extensionLength;
}

@property (nonatomic) double extensionLength;

- (double)buttonWidth;
- (double)extensionLength;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setExtensionLength:(double)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;

@end
