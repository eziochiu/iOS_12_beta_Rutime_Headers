/* made by EzioChiu.
 */

@protocol BWStillImageProcessingStatusDelegate <NSObject>

@required

- (void)node:(BWNode *)arg1 didSelectReferenceFrameBracketedCaptureSequenceNumber:(NSNumber *)arg2 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)nodeDidCaptureStillImage:(BWNode *)arg1;

@end
