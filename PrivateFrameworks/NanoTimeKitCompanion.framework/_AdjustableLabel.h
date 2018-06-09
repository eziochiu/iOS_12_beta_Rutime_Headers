/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _AdjustableLabel : UILabel {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _offset;
}

@property (nonatomic) struct CGVector { double x1; double x2; } offset;

- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineCalculationOnly:(bool)arg2;
- (struct CGVector { double x1; double x2; })offset;
- (void)setOffset:(struct CGVector { double x1; double x2; })arg1;

@end
