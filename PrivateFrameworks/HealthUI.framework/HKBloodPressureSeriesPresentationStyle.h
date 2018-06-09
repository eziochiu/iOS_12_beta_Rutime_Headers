/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBloodPressureSeriesPresentationStyle : NSObject {
    UIColor * _arrowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _arrowSize;
    double  _arrowStrokeWidth;
    UIColor * _fillColor;
}

@property (nonatomic, retain) UIColor *arrowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } arrowSize;
@property (nonatomic) double arrowStrokeWidth;
@property (nonatomic, retain) UIColor *fillColor;

- (void).cxx_destruct;
- (id)arrowColor;
- (struct CGSize { double x1; double x2; })arrowSize;
- (double)arrowStrokeWidth;
- (id)fillColor;
- (void)setArrowColor:(id)arg1;
- (void)setArrowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setArrowStrokeWidth:(double)arg1;
- (void)setFillColor:(id)arg1;

@end
