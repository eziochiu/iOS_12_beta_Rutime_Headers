/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextHeaderView : UICollectionReusableView {
    NTKColoringLabel * _label;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end