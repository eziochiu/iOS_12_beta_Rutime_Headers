/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIProgressBarLayout : NSObject {
    UIColor * _fillColor;
    double  _height;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _margin;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    UIColor * _tintColor;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margin;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)fillColor;
- (double)height;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (void)setFillColor:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setMargin:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
