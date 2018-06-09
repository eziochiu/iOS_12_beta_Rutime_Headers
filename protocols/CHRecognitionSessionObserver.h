/* made by EzioChiu.
 */

@protocol CHRecognitionSessionObserver <NSObject>

@required

- (void)recognitionSessionDidUpdateRecognitionResult:(CHRecognitionSession *)arg1;

@optional

- (void)recognitionSessionDidChangeStatus:(CHRecognitionSession *)arg1;
- (bool)wantsHighFrequencyNotifications;

@end
