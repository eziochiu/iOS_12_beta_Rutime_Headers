/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropBrowser : NSObject {
    <SFAirDropBrowserBatchDelegate> * _batchDelegate;
    struct __SFBrowser { } * _browser;
    <SFAirDropBrowserDelegate> * _delegate;
    NSMutableDictionary * _nodes;
    NSArray * _people;
    NSString * _sessionID;
}

@property <SFAirDropBrowserBatchDelegate> *batchDelegate;
@property <SFAirDropBrowserDelegate> *delegate;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic, copy) NSString *sessionID;

- (void).cxx_destruct;
- (id)batchDelegate;
- (void)dealloc;
- (id)delegate;
- (void)getChangedIndexesForClientPeopleList:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handleBrowserCallBack;
- (id)init;
- (id)people;
- (id)sessionID;
- (void)setBatchDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)start;
- (void)stop;
- (void)updateDiscoveredPeople;

@end
