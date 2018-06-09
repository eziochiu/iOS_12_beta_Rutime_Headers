/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchModelZKW : SPUISearchModel {
    bool  _newQuery;
    NSObject<OS_dispatch_queue> * _queryProcessor;
    SPZKWSession * _session;
    bool  _shouldCacheResults;
}

@property (nonatomic, retain) SPZKWSession *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)session;
- (void)setSession:(id)arg1;
- (void)updateWithQueryContext:(id)arg1;

@end
