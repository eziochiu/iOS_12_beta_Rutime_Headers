/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRoundedCornerLabel : TLKVibrantLabel {
    bool  _large;
}

@property (nonatomic) bool large;

- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)large;
- (struct CGSize { double x1; double x2; })makeLabelInsets:(struct CGSize { double x1; double x2; })arg1;
- (void)setLarge:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
