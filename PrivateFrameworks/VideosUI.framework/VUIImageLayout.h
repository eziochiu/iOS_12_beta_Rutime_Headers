/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIImageLayout : NSObject {
    UIColor * _borderColor;
    struct TVCornerRadii { 
        double topLeft; 
        double topRight; 
        double bottomLeft; 
        double bottomRight; 
    }  _borderRadii;
    double  _borderWidth;
    double  _continuousBorder;
    UIColor * _highlightColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    NSString * _placeholderArtworkName;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) struct TVCornerRadii { double x1; double x2; double x3; double x4; } borderRadii;
@property (nonatomic) double borderWidth;
@property (nonatomic) double continuousBorder;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic, copy) NSString *placeholderArtworkName;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)borderColor;
- (struct TVCornerRadii { double x1; double x2; double x3; double x4; })borderRadii;
- (double)borderWidth;
- (double)continuousBorder;
- (id)highlightColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (id)placeholderArtworkName;
- (void)setBorderColor:(id)arg1;
- (void)setBorderRadii:(struct TVCornerRadii { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setContinuousBorder:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPlaceholderArtworkName:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tintColor;

@end
