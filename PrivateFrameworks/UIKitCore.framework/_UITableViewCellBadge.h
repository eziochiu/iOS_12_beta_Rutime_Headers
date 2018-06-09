/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewCellBadge : UIView {
    bool  _isSelected;
    NSString * _text;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_sizeToFit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setHighlighted:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
