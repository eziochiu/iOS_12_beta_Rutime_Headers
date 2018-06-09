/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitIncidentItemCellBackgroundView : UIView {
    double  _cornerRadius;
    UIColor * _fillColor;
    long long  _position;
    double  _scale;
    UIColor * _strokeColor;
}

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic) long long position;
@property (nonatomic, retain) UIColor *strokeColor;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)position;
- (void)setFillColor:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setStrokColor:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;

@end
