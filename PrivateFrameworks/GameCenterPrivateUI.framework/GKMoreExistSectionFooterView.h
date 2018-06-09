/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKMoreExistSectionFooterView : UICollectionReusableView {
    GKLabel * _label;
}

@property (nonatomic, retain) GKLabel *label;
@property (nonatomic, retain) NSString *text;

+ (double)defaultHeight;
+ (bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
