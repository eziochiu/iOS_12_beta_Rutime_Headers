/* made by EzioChiu.
 */

@protocol BKFaceDetectOperationDelegate <BKOperationDelegate>

@optional

- (void)operation:(BKOperation *)arg1 faceDetectStateChanged:(BKFaceDetectStateInfo *)arg2;

@end
