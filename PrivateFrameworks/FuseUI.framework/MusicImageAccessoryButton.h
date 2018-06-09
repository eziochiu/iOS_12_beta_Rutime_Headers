/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicImageAccessoryButton : UIButton {
    bool  _shouldBaselineAlignTrailingAccessoryImage;
    double  _tallestFontDescender;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _trailingAccessoryOffset;
}

@property (nonatomic) bool shouldBaselineAlignTrailingAccessoryImage;
@property (nonatomic) struct UIOffset { double x1; double x2; } trailingAccessoryOffset;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)music_configureControlWithTextDescriptor:(id)arg1;
- (void)setShouldBaselineAlignTrailingAccessoryImage:(bool)arg1;
- (void)setTrailingAccessoryOffset:(struct UIOffset { double x1; double x2; })arg1;
- (bool)shouldBaselineAlignTrailingAccessoryImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIOffset { double x1; double x2; })trailingAccessoryOffset;

@end
