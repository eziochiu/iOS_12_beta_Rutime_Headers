/* made by EzioChiu.
 */

@protocol NUDepthProperties <NUAuxiliaryDataProperties>

@required

- (AVDepthData *)depthData:(out id*)arg1;
- (NSString *)depthType;

@end
