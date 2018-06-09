/* made by EzioChiu.
 */

@protocol PUImageInfoNode <PXRunNode>

@required

- (NSURL *)imageDataURL;
- (NSString *)imageDataUTI;
- (long long)imageExifOrientation;

@end
