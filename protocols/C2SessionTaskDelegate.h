/* made by EzioChiu.
 */

@protocol C2SessionTaskDelegate <NSObject>

@required

- (void)C2Session:(C2Session *)arg1 task:(C2SessionTask *)arg2 didCompleteWithError:(NSError *)arg3;

@end
