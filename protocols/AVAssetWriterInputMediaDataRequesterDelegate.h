/* made by EzioChiu.
 */

@protocol AVAssetWriterInputMediaDataRequesterDelegate <NSObject>

@required

- (bool)mediaDataRequesterShouldRequestMediaData:(AVAssetWriterInputMediaDataRequester *)arg1;

@end
