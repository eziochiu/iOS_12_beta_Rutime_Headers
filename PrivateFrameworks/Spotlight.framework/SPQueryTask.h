/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Spotlight.framework/Spotlight
 */

@interface SPQueryTask : NSObject {
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _deferredUpdate;
    SPQueryResponse * _delayedResponse;
    NSObject<SPQueryTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _finished;
    bool  _forceStableResults;
    bool  _live;
    unsigned long long  _maxTopHitAppResults;
    NSObject<OS_dispatch_queue> * _queryProcessor;
    NSString * _rankingDebugLog;
    NSArray * _sections;
    bool  _sentSuggestions;
    NSString * _sessionEntityString;
    int  _state;
    int  _unsafeState;
    int  _updatesDisabled;
    unsigned long long  _whyQuery;
}

@property (nonatomic) NSObject<SPQueryTaskDelegate> *delegate;
@property (nonatomic) bool finished;
@property (nonatomic) bool forceStableResults;
@property (nonatomic) bool live;
@property (nonatomic) unsigned long long maxTopHitAppResults;
@property (readonly) NSObject<OS_dispatch_queue> *queryProcessor;
@property (nonatomic, retain) NSString *rankingDebugLog;
@property (readonly) NSString *searchString;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSString *sessionEntityString;
@property (nonatomic) int state;
@property (nonatomic, readonly) NSString *suggestionsDebugLog;
@property (nonatomic, readonly) int unsafeState;
@property (nonatomic) unsigned long long whyQuery;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_shouldPromptUserToOpenTTR;
- (void)cancel;
- (id)delegate;
- (void)disableUpdates;
- (void)enableUpdates;
- (bool)finished;
- (bool)forceStableResults;
- (id)init;
- (bool)live;
- (unsigned long long)maxTopHitAppResults;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)arg1;
- (void)pushAndPostUpdates;
- (id)queryProcessor;
- (id)rankingDebugLog;
- (bool)readyToUpdate;
- (id)searchString;
- (id)sections;
- (id)sessionEntityString;
- (void)setDelegate:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setForceStableResults:(bool)arg1;
- (void)setLive:(bool)arg1;
- (void)setMaxTopHitAppResults:(unsigned long long)arg1;
- (void)setRankingDebugLog:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSessionEntityString:(id)arg1;
- (void)setState:(int)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (void)start;
- (int)state;
- (id)suggestionsDebugLog;
- (id)unsafeCombinedSuggestions;
- (int)unsafeState;
- (void)updateResultsThroughDelegate:(bool)arg1 state:(int)arg2 sections:(id)arg3;
- (unsigned long long)whyQuery;

@end
