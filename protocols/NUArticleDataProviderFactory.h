/* made by EzioChiu.
 */

@protocol NUArticleDataProviderFactory <NSObject>

@required

- (<NUArticleDataProvider> *)createArticleDataProviderWithArticle:(FCArticle *)arg1;

@end
