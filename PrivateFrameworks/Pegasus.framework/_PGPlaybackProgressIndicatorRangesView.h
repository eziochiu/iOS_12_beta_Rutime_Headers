/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface _PGPlaybackProgressIndicatorRangesView : UIView {
    UIColor * _rangeColor;
    NSArray * _ranges;
}

@property (nonatomic, retain) UIColor *rangeColor;
@property (nonatomic, retain) NSArray *ranges;

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)rangeColor;
- (id)ranges;
- (void)setRangeColor:(id)arg1;
- (void)setRanges:(id)arg1;

@end
