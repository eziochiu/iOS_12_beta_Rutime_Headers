/* made by EzioChiu.
 */

@protocol AEMessagesShelfLayoutDelegate <NSObject>

@required

- (double)layout:(AEMessagesShelfLayout *)arg1 aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (long long)layout:(AEMessagesShelfLayout *)arg1 irisToggleStateForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (double)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathDuration:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathIsLoop:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layout:(AEMessagesShelfLayout *)arg1 itemAtIndexPathIsVideo:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (bool)layoutShouldShowVideoDuration:(AEMessagesShelfLayout *)arg1;

@end
