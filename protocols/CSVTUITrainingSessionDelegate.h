/* made by EzioChiu.
 */

@protocol CSVTUITrainingSessionDelegate <NSObject>

@required

- (void)CSVTUITrainingSessionRMSAvailable:(float)arg1;
- (void)CSVTUITrainingSessionStopListen;

@optional

- (void)CSVTUITrainingSession:(CSVTUITrainingSession *)arg1 hasTrainUtterance:(NSData *)arg2 languageCode:(NSString *)arg3;

@end
