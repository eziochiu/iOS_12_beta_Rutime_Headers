/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULoadSectionsOperation : ISOperation <ISURLOperationDelegate> {
    NSString * _activeSectionVersionString;
    SUClientInterface * _clientInterface;
    SUSectionsResponse * _sectionsResponse;
    bool  _shouldUseCache;
}

@property (copy) NSString *activeSectionVersionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) SUSectionsResponse *sectionsResponse;
@property bool shouldUseCache;
@property (readonly) Class superclass;

- (id)_cachePathForVersion:(id)arg1 create:(bool)arg2;
- (bool)_loadSectionsFromCacheForVersion:(id)arg1;
- (bool)_loadSectionsFromNetworkWithDictionary:(id)arg1;
- (void)_setSectionsResponse:(id)arg1;
- (void)_writeSectionsResponseToCache:(id)arg1 forVersion:(id)arg2;
- (id)activeSectionVersionString;
- (void)dealloc;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (void)run;
- (id)sectionsResponse;
- (void)setActiveSectionVersionString:(id)arg1;
- (void)setShouldUseCache:(bool)arg1;
- (bool)shouldUseCache;

@end
