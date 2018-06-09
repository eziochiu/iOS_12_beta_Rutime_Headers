/* made by EzioChiu.
 */

@protocol CNUIPlaceholderProviderFactory <NSObject>

@required

- (<CNUIPRLikenessProvider> *)loadingPlaceholderProvider;
- (<CNUIPRLikenessProvider> *)placeholderProvider;

@end
