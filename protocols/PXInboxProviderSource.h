/* made by EzioChiu.
 */

@protocol PXInboxProviderSource <NSObject>

@required

- (<PXInboxModelDetailViewControllerProvider> *)detailViewControllerProvider;
- (<PXInboxModelMediaProvider> *)mediaProvider;
- (<PXInboxModelTitleProvider> *)titleProvider;

@end
