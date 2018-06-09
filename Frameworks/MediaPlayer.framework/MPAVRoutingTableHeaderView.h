/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingTableHeaderView : UIView {
    CAShapeLayer * _borderLayer;
    UILabel * _detailLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UILabel * _titleLabel;
}

- (void).cxx_destruct;
- (void)_init;
- (id)_mirroringCompactDescription;
- (id)_mirroringCompactDescriptionTextAttributes;
- (id)_mirroringTitleTextAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
