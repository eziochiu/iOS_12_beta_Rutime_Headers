/* made by EzioChiu.
 */

@protocol BWRendererResourceProvider <NSObject>

@required

- (BWColorLookupCache *)provideColorLookupCache;
- (BWCoreImageFilterRenderer *)provideCoreImageFilterRenderer;
- (BWMetalColorCubeRenderer *)provideMetalFilterRenderer;
- (BWStillImageMetalBlurMapRenderer *)provideStillImageMetalBlurMapRenderer;
- (BWStillImageMetalSDOFRenderer *)provideStillImageMetalSDOFRenderer;
- (BWStreamingCVAFilterRenderer *)provideStreamingCVAFilterRenderer;

@end
