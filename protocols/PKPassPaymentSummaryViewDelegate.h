/* made by EzioChiu.
 */

@protocol PKPassPaymentSummaryViewDelegate <NSObject>

@required

- (void)summaryView:(PKPassPaymentSummaryView *)arg1 didArchiveMessage:(PKPaymentMessage *)arg2;

@end
