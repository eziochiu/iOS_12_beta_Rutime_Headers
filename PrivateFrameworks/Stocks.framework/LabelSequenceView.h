/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface LabelSequenceView : UIView {
    NSArray * _stringDrawingInfoValues;
}

@property (nonatomic, retain) NSArray *stringDrawingInfoValues;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })requiredSize;
- (void)setStringDrawingInfoValues:(id)arg1;
- (id)stringDrawingInfoValues;

@end