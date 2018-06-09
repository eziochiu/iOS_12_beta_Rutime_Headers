/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagCheckmarkView : UIView <DOCTagIconView> {
    long long  _tagColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long tagColor;

+ (id)checkmarkImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setTagColor:(long long)arg1;
- (long long)tagColor;
- (void)tintColorDidChange;
- (void)updateBackgroundColor;
- (void)updateLayoutOfLayers;

@end
