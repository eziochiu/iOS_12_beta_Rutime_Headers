/* made by EzioChiu.
 */

@protocol TTYUtteranceCellDelegate <NSObject>

@required

- (TUCall *)callContainingUtterance;
- (void)utteranceCellDidUpdateContent:(TTYUtteranceCell *)arg1;

@end
