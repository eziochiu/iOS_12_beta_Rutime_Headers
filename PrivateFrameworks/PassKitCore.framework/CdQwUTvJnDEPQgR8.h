/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface CdQwUTvJnDEPQgR8 : NSObject {
    bool  _callbackDone;
    NSObject<OS_dispatch_queue> * _callback_queue;
    jprL7AuZZkLkFoBK * _context;
    id /* block */  _handler;
    NSMutableDictionary * _identifier2UUID;
    NSString * _lastScoreIdentifier;
    NSError * _prepareError;
    bool  _prepared;
    NSObject<OS_dispatch_queue> * _score_id_queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callback_queue;
@property (nonatomic, retain) jprL7AuZZkLkFoBK *context;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSString *lastScoreIdentifier;
@property (nonatomic, retain) NSError *prepareError;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *score_id_queue;

+ (id)scorerWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)_decryptScores:(id)arg1 error:(id*)arg2;
- (void)_safeCallbackWithMessage:(id)arg1 uuid:(id)arg2 error:(id)arg3;
- (id)callback_queue;
- (id)context;
- (id /* block */)handler;
- (id)initWithContext:(id)arg1;
- (id)lastScoreIdentifier;
- (id)prepareError;
- (void)prepareScoreMessage;
- (void)scoreMessageWithNonce:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scoreWithNonce:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scoreWithScoreRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)score_id_queue;
- (void)setCallback_queue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLastScoreIdentifier:(id)arg1;
- (void)setPrepareError:(id)arg1;
- (void)setScore_id_queue:(id)arg1;
- (id)settingsFromContext:(id)arg1;
- (void)stop;

@end
