/* made by EzioChiu.
 */

@protocol SVVideoImpressionTrackerFactory <NSObject>

@required

- (<SVVideoImpressionTracking> *)createImpressionTrackerForVideo:(id <SVVideo>)arg1;

@end
