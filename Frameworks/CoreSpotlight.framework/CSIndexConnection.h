/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSIndexConnection : CSXPCConnection {
    NSMutableDictionary * _indexMap;
    bool  _previouslyInitialized;
}

@property (nonatomic, readonly) NSMutableDictionary *indexMap;
@property (nonatomic, readonly) bool previouslyInitialized;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)addIndex:(id)arg1 forID:(unsigned int)arg2;
- (void)dropIndexID:(unsigned int)arg1;
- (void)handleError:(id)arg1;
- (void)handleReply:(id)arg1;
- (id)indexForID:(unsigned int)arg1;
- (id)indexMap;
- (bool)previouslyInitialized;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;

@end
