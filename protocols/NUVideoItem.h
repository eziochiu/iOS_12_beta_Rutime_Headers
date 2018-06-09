/* made by EzioChiu.
 */

@protocol NUVideoItem <NFCopying>

@required

- (<NUAdContextProvider> *)adContextProvider;
- (NSString *)articleID;
- (NSString *)callToActionTitle;
- (NSURL *)callToActionURL;
- (NSString *)compactSourceName;
- (FCAssetHandle *)compactSourceNameImageAssetHandle;
- (bool)isBoundToContext;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (NSString *)sourceTagID;
- (NSString *)title;
- (NSURL *)videoURL;

@end
