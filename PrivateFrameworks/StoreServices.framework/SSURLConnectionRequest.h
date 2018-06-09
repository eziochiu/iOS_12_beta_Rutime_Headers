/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext * _authenticationContext;
    SSVURLDataConsumer * _dataConsumer;
    NSURL * _destinationFileURL;
    SSURLRequestProperties * _requestProperties;
    bool  _runsInProcess;
    SSVFairPlaySAPSession * _sapSession;
    SSVSAPSignaturePolicy * _sapSignaturePolicy;
    bool  _sendsResponseForHTTPFailures;
    bool  _shouldMescalSign;
    SSURLBag * _urlBag;
    SSVURLBagInterpreter * _urlBagInterpreter;
}

@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (readonly) NSURLRequest *URLRequest;
@property (copy) SSAuthenticationContext *authenticationContext;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSURLConnectionRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy) NSURL *destinationFileURL;
@property (readonly) unsigned long long hash;
@property (readonly) SSURLRequestProperties *requestProperties;
@property bool runsInProcess;
@property bool sendsResponseForHTTPFailures;
@property bool shouldMescalSign;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)SAPSession;
- (id)SAPSignaturePolicy;
- (id)URLRequest;
- (bool)_canRunInProcess;
- (id)authenticationContext;
- (void)configureWithURLBag:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)copyXPCEncoding;
- (id)dataConsumer;
- (void)dealloc;
- (id)destinationFileURL;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)requestProperties;
- (bool)runsInProcess;
- (bool)sendsResponseForHTTPFailures;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setDestinationFileURL:(id)arg1;
- (void)setRunsInProcess:(bool)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setSAPSignaturePolicy:(id)arg1;
- (void)setSendsResponseForHTTPFailures:(bool)arg1;
- (void)setShouldMescalSign:(bool)arg1;
- (bool)shouldMescalSign;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithConnectionResponseBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)newRadioRequestWithRequestContext:(id)arg1 requestProperties:(id)arg2 storeBag:(id)arg3;

@end
