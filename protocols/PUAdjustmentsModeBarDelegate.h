/* made by EzioChiu.
 */

@protocol PUAdjustmentsModeBarDelegate <NSObject>

@optional

- (void)adjustmentsModeBar:(PUAdjustmentsModeBar *)arg1 didTapModeToggle:(PUAdjustmentsMode *)arg2;
- (void)adjustmentsModeBarDidChangeModeListExpandedState:(PUAdjustmentsModeBar *)arg1;
- (void)adjustmentsModeBarDidChangeSelectedMode:(PUAdjustmentsModeBar *)arg1;

@end
