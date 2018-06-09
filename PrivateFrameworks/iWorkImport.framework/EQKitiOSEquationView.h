/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface EQKitiOSEquationView : UIView {
    <EQKitLayout> * _equationLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    double  _padding;
    double  _viewScale;
}

@property (nonatomic, retain) <EQKitLayout> *equationLayout;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) double padding;
@property (nonatomic) double viewScale;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)equationLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })offset;
- (double)padding;
- (void)setEquationLayout:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPadding:(double)arg1;
- (void)setViewScale:(double)arg1;
- (double)viewScale;

@end
