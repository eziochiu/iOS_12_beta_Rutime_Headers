/* made by EzioChiu.
 */

@protocol SVPrefetcherFactory <NSObject>

@required

- (<SVPrefetcher> *)createPrefetcherForVideo:(id <SVVideo>)arg1 afterVideo:(id <SVVideo>)arg2;

@end
