/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUArrayImageModifier : SUImageModifier {
    NSArray * _modifiers;
}

@property (nonatomic, retain) NSArray *modifiers;

- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (void)drawBeforeImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })finalSizeForSize:(struct CGSize { double x1; double x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isEqual:(id)arg1;
- (id)modifiers;
- (bool)scalesImage;
- (void)setModifiers:(id)arg1;

@end
