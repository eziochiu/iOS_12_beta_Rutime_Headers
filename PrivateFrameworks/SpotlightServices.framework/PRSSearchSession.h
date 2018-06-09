/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSSearchSession : NSObject <PARSessionDelegate> {
    <PRSSessionController> * _client;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _configuredSession;
    NSMutableArray * _feedback;
    double  _lastQueryTime;
    PRSFeedbackProxy * _listener;
    NSString * _modelL2Version;
    bool  _parsecFeedbackAllowed;
    NSString * _queryLanguage;
    NSObject<OS_dispatch_source> * _quiescenceTimer;
    double  _retryAfter;
    NSDictionary * _serverFeatures;
    PARSession * _session;
    double  _sessionStartTime;
    NSDictionary * _sqfData;
    NSArray * _supportedServices;
    NSString * _userAgent;
}

@property (nonatomic, readonly) NSSet *appBlacklist;
@property (nonatomic, readonly) SSPlistDataReader *cannedCEPValues;
@property (nonatomic, readonly) SSPlistDataReader *cepDictionary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property bool configuredSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool disableAsTypedSuggestion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SFFeedbackListener> *listener;
@property (nonatomic, readonly) NSString *modelL2Version;
@property (retain) NSObject<OS_dispatch_source> *quiescenceTimer;
@property (nonatomic, readonly) PRSRankingServerKnobs *rankingKnobs;
@property double retryAfter;
@property (nonatomic, readonly) double searchRenderTimeout;
@property (retain) PARSession *session;
@property (nonatomic) double sessionStartTime;
@property (nonatomic, readonly) double suggestionsRenderTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedServices;
@property (retain) NSString *userAgent;

- (void).cxx_destruct;
- (void)activate;
- (id)appBlacklist;
- (id)cannedCEPValues;
- (id)cepDictionary;
- (id)clientQueue;
- (bool)configuredSession;
- (void)deactivate;
- (id)dictationQueryWithResponse:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 webSearch:(bool)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (bool)disableAsTypedSuggestion;
- (id)feedbackListener;
- (void)getCachedQueries:(id*)arg1 results:(id*)arg2 webSearch:(bool)arg3;
- (void)getFTEStringsWithReply:(id /* block */)arg1;
- (id)getQueryTaskForHandler:(id)arg1 scaleFactor:(double)arg2 whyQuery:(unsigned long long)arg3;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2;
- (id)initWithClient:(id)arg1 clientQueue:(id)arg2 config:(id)arg3 session:(id)arg4;
- (id)listener;
- (id)modelL2Version;
- (void)pruneCache;
- (void)queryCompleted:(id)arg1;
- (id)queryWithEngagedSuggestion:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 handler:(id)arg4 queryIdent:(unsigned long long)arg5 whyQuery:(unsigned long long)arg6;
- (id)queryWithString:(id)arg1 keyboardLanguage:(id)arg2 externalId:(unsigned int)arg3 scaleFactor:(double)arg4 handler:(id)arg5 queryIdent:(unsigned long long)arg6 whyQuery:(unsigned long long)arg7;
- (id)quiescenceTimer;
- (id)rankingKnobs;
- (double)retryAfter;
- (double)searchRenderTimeout;
- (id)session;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)session:(id)arg1 didDeleteResource:(id)arg2;
- (void)session:(id)arg1 didDownloadResource:(id)arg2;
- (double)sessionStartTime;
- (void)setClientQueue:(id)arg1;
- (void)setConfiguredSession:(bool)arg1;
- (void)setFeedbackStartTime;
- (void)setParsecFeedbackAllowed:(bool)arg1;
- (void)setQueryLanguage:(id)arg1;
- (void)setQuiescenceTimer:(id)arg1;
- (void)setRetryAfter:(double)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionStartTime:(double)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setUserAgentString:(id)arg1;
- (void)shrinkCaches;
- (double)suggestionsRenderTimeout;
- (id)supportedServices;
- (id)userAgent;
- (void)warmup;

@end
