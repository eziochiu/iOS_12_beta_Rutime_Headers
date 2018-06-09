/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchConnection : CSXPCConnection {
    bool  _previouslyInitialized;
    NSMutableDictionary * _queries;
}

@property (nonatomic, readonly) bool previouslyInitialized;
@property (nonatomic, retain) NSMutableDictionary *queries;

+ (void)initialize;
+ (id)sharedSearchConnection;

- (void).cxx_destruct;
- (void)cancelQuery:(unsigned long long)arg1;
- (id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(bool)arg4;
- (void)handleError:(id)arg1;
- (void)handleReply:(id)arg1;
- (id)init;
- (bool)previouslyInitialized;
- (id)queries;
- (id)queryForID:(id)arg1;
- (id)removeQueryForID:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)setQueries:(id)arg1;
- (void)setQuery:(id)arg1 forID:(id)arg2;
- (void)startQuery:(id)arg1 context:(id)arg2;

@end
