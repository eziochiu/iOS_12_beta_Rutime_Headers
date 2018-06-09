/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedImageDescription : NSObject {
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentEdgeInsets;
    int  _blendMode;
    long long  _displayGamut;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    int  _exifOrientation;
    long long  _idiom;
    long long  _imageType;
    long long  _layoutDirection;
    long long  _resizingMode;
    double  _scale;
    long long  _sizeClassHorizontal;
    long long  _sizeClassVertical;
    long long  _subtype;
    long long  _templateRenderingMode;
}

@property (nonatomic) struct { double x1; double x2; double x3; double x4; } alignmentEdgeInsets;
@property (nonatomic) int blendMode;
@property (nonatomic) long long displayGamut;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) int exifOrientation;
@property (nonatomic) long long idiom;
@property (nonatomic) long long imageType;
@property (nonatomic) bool isTemplate;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long resizingMode;
@property (nonatomic) double scale;
@property (nonatomic) long long sizeClassHorizontal;
@property (nonatomic) long long sizeClassVertical;
@property (nonatomic) long long subtype;
@property (nonatomic) long long templateRenderingMode;

- (struct { double x1; double x2; double x3; double x4; })alignmentEdgeInsets;
- (int)blendMode;
- (id)description;
- (long long)displayGamut;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (int)exifOrientation;
- (long long)idiom;
- (long long)imageType;
- (bool)isTemplate;
- (long long)layoutDirection;
- (long long)resizingMode;
- (double)scale;
- (void)setAlignmentEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setBlendMode:(int)arg1;
- (void)setDisplayGamut:(long long)arg1;
- (void)setEdgeInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setImageType:(long long)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setResizingMode:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setSizeClassHorizontal:(long long)arg1;
- (void)setSizeClassVertical:(long long)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (long long)subtype;
- (long long)templateRenderingMode;

@end
