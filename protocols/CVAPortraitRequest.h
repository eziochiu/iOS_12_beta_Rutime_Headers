/* made by EzioChiu.
 */

@protocol CVAPortraitRequest <NSObject>

@required

- (struct __CVBuffer { }*)destinationColorPixelBuffer;
- (CVAMattingRequest *)mattingRequest;

@end
