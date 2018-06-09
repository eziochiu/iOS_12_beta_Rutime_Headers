/* made by EzioChiu.
 */

@protocol PLPTPConversionSupport <NSObject>

@required

- (PLPTPConversionResult *)conversionResultForAsset:(PLPTPAsset *)arg1 isVideo:(bool)arg2 isRender:(bool)arg3;
- (bool)supportsTranscodeChoice;

@end
