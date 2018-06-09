/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewCellDeleteConfirmationControl_Legacy : UIControl {
    NSString * _title;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) NSString *title;

+ (id)_backgroundImage;
+ (id)_highlightedBackgroundImage;
+ (struct CGSize { double x1; double x2; })defaultSizeForTitle:(id)arg1;

- (void).cxx_destruct;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)title;

@end