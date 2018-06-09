/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSiteMetadataManager : WBSSiteMetadataManager {
    _SFFaviconProvider * _faviconProvider;
    _SFPasswordTouchIconCache * _passwordTouchIconCache;
    _SFTouchIconCache * _touchIconCache;
}

@property (nonatomic, readonly) _SFFaviconProvider *faviconProvider;
@property (nonatomic, readonly) _SFPasswordTouchIconCache *passwordTouchIconCache;
@property (nonatomic, readonly) _SFTouchIconCache *touchIconCache;

+ (void)setSharedSiteMetadataManager:(id)arg1;
+ (void)setSharedSiteMetadataManagerProvider:(id)arg1;
+ (id)sharedSiteMetadataManager;

- (void).cxx_destruct;
- (id)faviconProvider;
- (id)initWithInjectedBundleURL:(id)arg1 imageCacheDirectoryURL:(id)arg2 cacheIsReadOnly:(bool)arg3 metadataType:(unsigned long long)arg4;
- (id)passwordTouchIconCache;
- (void)scheduleLowPriorityRequestForBookmarks:(id)arg1;
- (id)touchIconCache;

@end
