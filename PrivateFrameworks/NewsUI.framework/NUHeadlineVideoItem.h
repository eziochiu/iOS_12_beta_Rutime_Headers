/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUHeadlineVideoItem : NSObject <NUVideoItem> {
    <NUAdContextProvider> * _adContextProvider;
    <FCHeadlineProviding> * _headline;
}

@property (nonatomic, readonly) <NUAdContextProvider> *adContextProvider;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (getter=isBoundToContext, nonatomic, readonly) bool boundToContext;
@property (nonatomic, readonly, copy) NSString *callToActionTitle;
@property (nonatomic, readonly, copy) NSURL *callToActionURL;
@property (nonatomic, readonly, copy) NSString *compactSourceName;
@property (nonatomic, readonly) FCAssetHandle *compactSourceNameImageAssetHandle;
@property (nonatomic, readonly, copy) <FCHeadlineProviding> *headline;
@property (getter=isHiddenFromFeeds, nonatomic, readonly) bool hiddenFromFeeds;
@property (getter=isPaid, nonatomic, readonly) bool paid;
@property (nonatomic, readonly, copy) NSString *sourceTagID;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *videoURL;

- (void).cxx_destruct;
- (id)adContextProvider;
- (id)articleID;
- (id)callToActionTitle;
- (id)callToActionURL;
- (id)compactSourceName;
- (id)compactSourceNameImageAssetHandle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)headline;
- (id)init;
- (id)initWithHeadline:(id)arg1;
- (bool)isBoundToContext;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (id)sourceTagID;
- (id)title;
- (id)videoURL;

@end
