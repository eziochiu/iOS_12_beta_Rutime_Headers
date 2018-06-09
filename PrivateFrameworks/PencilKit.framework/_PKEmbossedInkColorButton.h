/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKEmbossedInkColorButton : _PKInkColorButton {
    UIImageView * _colorImageView;
    UIImageView * _embossImageView;
}

@property (nonatomic, retain) UIImageView *colorImageView;
@property (nonatomic, retain) UIImageView *embossImageView;

+ (id)colorFillImageIsCompact:(bool)arg1;

- (void).cxx_destruct;
- (id)colorImageView;
- (id)embossImageView;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (void)layoutSubviews;
- (void)setColorImageView:(id)arg1;
- (void)setEmbossImageView:(id)arg1;

@end
