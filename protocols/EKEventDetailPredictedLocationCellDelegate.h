/* made by EzioChiu.
 */

@protocol EKEventDetailPredictedLocationCellDelegate

@required

- (void)eventDetailPredictedLocationCellAcceptedPrediction:(EKEventDetailPredictedLocationCell *)arg1 disambiguatedLocation:(EKStructuredLocation *)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(EKEventDetailPredictedLocationCell *)arg1;

@end
