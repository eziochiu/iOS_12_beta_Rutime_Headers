/* made by EzioChiu.
 */

@protocol PUAdjustmentsModeBarDataSource <NSObject>

@required

- (NSArray *)adjustmentModesForAdjustmentsModeBar:(PUAdjustmentsModeBar *)arg1;
- (double)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 levelForMode:(PUAdjustmentsMode *)arg2;
- (PUPhotoEditLevelSlider *)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 levelSliderForMode:(PUAdjustmentsMode *)arg2;

@optional

- (bool)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 isEnabledForMode:(PUAdjustmentsMode *)arg2;

@end
