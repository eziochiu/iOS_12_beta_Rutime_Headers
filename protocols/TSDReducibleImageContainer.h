/* made by EzioChiu.
 */

@protocol TSDReducibleImageContainer <TSDReplaceableMediaContainer>

@required

- (struct CGSize { double x1; double x2; })targetSizeForImageData:(TSPData *)arg1 associatedHint:(id <NSObject>)arg2;

@end
