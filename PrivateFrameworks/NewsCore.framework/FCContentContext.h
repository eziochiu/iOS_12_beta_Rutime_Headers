/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCContentContext : NSObject <FCContentContext, FCCoreConfigurationObserving, FCNetworkReachabilityRequirementObserving> {
    FCArticleController * _articleController;
    NSURL * _assetCacheDirectoryURL;
    FCAssetManager * _assetManager;
    <FCBackgroundTaskable> * _backgroundTaskable;
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _contentDirectory;
    FCContextConfiguration * _contextConfiguration;
    FCFlintResourceManager * _flintResourceManager;
    FCContentContextInternal * _internalContentContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    <FCPPTContext> * _pptContext;
    <FCNetworkReachabilityRequirement> * _supportedCountryNetworkReachabilityRequirement;
    FCTagController * _tagController;
    NSURL * _webArchiveCacheDirectoryURL;
    <FCWebArchiveSource> * _webArchiveSource;
}

@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, retain) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic, readonly) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentToken;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (nonatomic, copy) FCContextConfiguration *contextConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCContentContextInternal *internalContentContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) <FCPPTContext> *pptContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, retain) <FCNetworkReachabilityRequirement> *supportedCountryNetworkReachabilityRequirement;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, retain) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, retain) <FCWebArchiveSource> *webArchiveSource;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (void)initialize;

- (void).cxx_destruct;
- (void)_updateReachabilityGivenRequirements;
- (id)appConfigurationManager;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetManager;
- (id)backgroundTaskable;
- (id)configurationManager;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (id)contentDirectory;
- (id)contentEnvironmentToken;
- (id)contentStoreFrontID;
- (id)contextConfiguration;
- (void)dealloc;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)flintResourceManager;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupExcerptURLProtocol:(bool)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 backgroundTaskable:(id)arg9 pptContext:(id)arg10;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8;
- (id)internalContentContext;
- (id)networkBehaviorMonitor;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (id)news_core_ConfigurationManager;
- (id)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (void)setAssetCacheDirectoryURL:(id)arg1;
- (void)setContentDirectory:(id)arg1;
- (void)setContextConfiguration:(id)arg1;
- (void)setInternalContentContext:(id)arg1;
- (void)setSupportedCountryNetworkReachabilityRequirement:(id)arg1;
- (void)setWebArchiveCacheDirectoryURL:(id)arg1;
- (void)setWebArchiveSource:(id)arg1;
- (id)supportedContentStoreFrontID;
- (id)supportedCountryNetworkReachabilityRequirement;
- (id)tagController;
- (id)webArchiveCacheDirectoryURL;
- (id)webArchiveSource;
- (id)webArchiveSourceAllowingNil;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

+ (id)nt_contentContextWithConfigurationManager:(id)arg1 contentHostDirectory:(id)arg2 networkBehaviorMonitor:(id)arg3;

@end
