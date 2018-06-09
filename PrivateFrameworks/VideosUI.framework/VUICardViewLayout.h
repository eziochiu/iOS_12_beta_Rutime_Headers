/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICardViewLayout : NSObject {
    VUIImageLayout * _appImageLayout;
    UIColor * _backgroundColor;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    UIColor * _highlightColor;
    VUIImageLayout * _imageLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    <VUIOverlayLayoutProtocol> * _overlayLayout;
    VUITextLayout * _secondaryTextLayout;
    NSShadow * _shadow;
    bool  _shouldLayoutImageFirst;
    VUITextLayout * _subtitleTextLayout;
    VUITextLayout * _titleTextLayout;
}

@property (nonatomic, retain) VUIImageLayout *appImageLayout;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) VUIImageLayout *imageLayout;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) <VUIOverlayLayoutProtocol> *overlayLayout;
@property (nonatomic, retain) VUITextLayout *secondaryTextLayout;
@property (nonatomic, retain) NSShadow *shadow;
@property (nonatomic) bool shouldLayoutImageFirst;
@property (nonatomic, retain) VUITextLayout *subtitleTextLayout;
@property (nonatomic, retain) VUITextLayout *titleTextLayout;

- (void).cxx_destruct;
- (id)appImageLayout;
- (id)backgroundColor;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (id)highlightColor;
- (id)imageLayout;
- (struct CGSize { double x1; double x2; })imageSize;
- (struct CGSize { double x1; double x2; })imageSizeWithWidth:(double)arg1;
- (id)init;
- (id)overlayLayout;
- (id)secondaryTextLayout;
- (void)setAppImageLayout:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setImageLayout:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverlayLayout:(id)arg1;
- (void)setSecondaryTextLayout:(id)arg1;
- (void)setShadow:(id)arg1;
- (void)setShouldLayoutImageFirst:(bool)arg1;
- (void)setSubtitleTextLayout:(id)arg1;
- (void)setTitleTextLayout:(id)arg1;
- (id)shadow;
- (bool)shouldLayoutImageFirst;
- (id)subtitleTextLayout;
- (id)titleTextLayout;

@end
