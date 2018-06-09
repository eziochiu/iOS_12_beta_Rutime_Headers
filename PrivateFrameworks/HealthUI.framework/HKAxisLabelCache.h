/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabelCache : NSObject {
    <HKAxisLabelDataSource> * _axisLabelDataSource;
    NSNumber * _axisLabelMaximumWidth;
    NSCache * _mainCache;
}

@property (nonatomic) <HKAxisLabelDataSource> *axisLabelDataSource;
@property (nonatomic, readonly) NSNumber *axisLabelMaximumWidth;
@property (nonatomic, retain) NSCache *mainCache;

- (void).cxx_destruct;
- (void)_handleTimeChangeNotification:(id)arg1;
- (id)allAxisLabelsForRange:(id)arg1 isHorizontal:(bool)arg2 zoomScale:(double)arg3 timeScope:(long long)arg4;
- (id)axisLabelDataSource;
- (id)axisLabelMaximumWidth;
- (void)dealloc;
- (void)enumerateAxisLabelsForTextInRange:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7 gridlineWidth:(double)arg8 timeScope:(long long)arg9 usingBlock:(id /* block */)arg10;
- (id)init;
- (void)invalidateCache;
- (id)mainCache;
- (void)setAxisLabelDataSource:(id)arg1;
- (void)setMainCache:(id)arg1;

@end
