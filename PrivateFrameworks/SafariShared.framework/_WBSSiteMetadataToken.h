/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface _WBSSiteMetadataToken : NSObject {
    NSTimer * _delayTimer;
    bool  _isOneTimeRequest;
    long long  _lastResponseType;
    long long  _priority;
    WBSSiteMetadataRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, retain) NSTimer *delayTimer;
@property (nonatomic, readonly) bool isOneTimeRequest;
@property (nonatomic) long long lastResponseType;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) WBSSiteMetadataRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delayTimer;
- (void)dispatchResponse:(id)arg1;
- (id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (bool)isOneTimeRequest;
- (long long)lastResponseType;
- (long long)priority;
- (id)request;
- (id /* block */)responseHandler;
- (void)setDelayTimer:(id)arg1;
- (void)setLastResponseType:(long long)arg1;
- (void)setPriority:(long long)arg1;

@end
