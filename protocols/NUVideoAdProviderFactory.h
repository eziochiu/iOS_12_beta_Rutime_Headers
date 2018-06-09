/* made by EzioChiu.
 */

@protocol NUVideoAdProviderFactory <NSObject>

@required

- (NUVideoAdProvider *)createVideoAdProviderWithContextProviderForVideoBefore:(id <NUAdContextProvider>)arg1 contextProviderForVideoAfter:(id <NUAdContextProvider>)arg2;

@end
