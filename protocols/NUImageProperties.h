/* made by EzioChiu.
 */

@protocol NUImageProperties <NSObject>

@required

- (long long)alphaInfo;
- (struct CGColorSpace { }*)colorSpace;
- (long long)componentInfo;
- (<NUDepthProperties> *)depthProperties;
- (NSString *)fileUTI;
- (NSDictionary *)metadata;
- (long long)orientation;
- (<NUPortraitEffectsMatteProperties> *)portraitEffectsMatteProperties;
- (<NURAWImageProperties> *)rawProperties;
- (struct { long long x1; long long x2; })size;

@end
