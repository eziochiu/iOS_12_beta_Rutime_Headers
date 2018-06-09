/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKEmbossedInkToolButton : UIButton <PKInkToolButton> {
    unsigned long long  _attributeSet;
    UIColor * _color;
    NSString * _identifier;
    bool  _isUsedOnDarkBackground;
    UIImageView * _nibEmbossImageView;
    UIImageView * _nibImageView;
    unsigned long long  _sizeState;
    UIImageView * _toolBaseImageView;
    UIImageView * _toolDockMaskImageView;
}

@property (nonatomic) unsigned long long attributeSet;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) UIImageView *nibEmbossImageView;
@property (nonatomic, retain) UIImageView *nibImageView;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic, retain) UIImageView *toolBaseImageView;
@property (nonatomic, retain) UIImageView *toolDockMaskImageView;

+ (id)_dockColor;
+ (struct CGSize { double x1; double x2; })_toolBaseImageSizeForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2;
+ (id)buttonWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
+ (id)imageNameForIdentifier:(id)arg1;
+ (id)imageNameForIdentifier:(id)arg1 sizeState:(unsigned long long)arg2 imageType:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)attributeSet;
- (id)color;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 sizeState:(unsigned long long)arg3;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (id)nibEmbossImageName;
- (id)nibEmbossImageView;
- (id)nibImageName;
- (id)nibImageView;
- (void)setAttributeSet:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setNibEmbossImageView:(id)arg1;
- (void)setNibImageView:(id)arg1;
- (void)setSizeState:(unsigned long long)arg1;
- (void)setToolBaseImageView:(id)arg1;
- (void)setToolDockMaskImageView:(id)arg1;
- (unsigned long long)sizeState;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 sizeState:(unsigned long long)arg2;
- (id)toolBaseImageName;
- (id)toolBaseImageView;
- (id)toolDockMaskImageName;
- (id)toolDockMaskImageView;

@end