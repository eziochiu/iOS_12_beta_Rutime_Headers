/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioGetTracksStep : NSObject {
    ICUserIdentityProperties * _delegatedIdentityProperties;
    NSError * _error;
    bool  _finished;
    ICUserIdentityProperties * _identityProperties;
    unsigned long long  _playActitySessionToken;
    SSVPlayActivityController * _playActivityController;
    unsigned long long  _playActivitySessionToken;
    ICRadioGetTracksRequest * _request;
    ICRadioGetTracksResponse * _response;
    ICRadioGetTracksResponse * _siriAssetInfoGetTracksResponse;
}

@property (nonatomic, readonly, copy) ICUserIdentityProperties *delegatedIdentityProperties;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly, copy) ICUserIdentityProperties *identityProperties;
@property (nonatomic, readonly) unsigned long long playActitySessionToken;
@property (nonatomic, readonly, copy) SSVPlayActivityController *playActivityController;
@property (nonatomic, readonly, copy) ICRadioGetTracksRequest *request;
@property (nonatomic, readonly, copy) ICRadioGetTracksResponse *response;
@property (nonatomic, readonly) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse;

- (void).cxx_destruct;
- (void)_fireAndForgetServerDialog:(id)arg1;
- (void)_performDefaultHandlingForButtonAction:(id)arg1;
- (void)_presentServerDialog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegatedIdentityProperties;
- (id)error;
- (id)identityProperties;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3;
- (id)initWithPreviousStep:(id)arg1;
- (bool)isFinished;
- (id)nextStepWithError:(id)arg1;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)playActitySessionToken;
- (id)playActivityController;
- (id)request;
- (id)response;
- (id)siriAssetInfoGetTracksResponse;

@end
