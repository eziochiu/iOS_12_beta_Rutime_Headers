/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPClientSession : NSObject {
    SPAppService * _appService;
    bool  _infinitePatience;
    bool  _observersAdded;
    int  _prefsToken;
    NSArray * _searchDomains;
    PARSession * _session;
}

@property (readonly) NSArray *disabledBundleIds;
@property (nonatomic) bool infinitePatience;

+ (void)initialize;
+ (void)retrieveFirstTimeExperienceTextWithReply:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)_setSearchDomains:(id)arg1;
- (void)activate;
- (long long)contentFilters;
- (void)deactivate;
- (void)dealloc;
- (id)disabledBundleIds;
- (void)finishRanking:(id)arg1 blendingDuration:(double)arg2;
- (bool)infinitePatience;
- (id)init;
- (void)preheat;
- (id)queryWithContext:(id)arg1;
- (void)setInfinitePatience:(bool)arg1;

@end
