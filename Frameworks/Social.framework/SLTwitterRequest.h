/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLTwitterRequest : NSObject {
    ACAccount * _account;
    NSString * _applicationID;
    int  _callingPID;
    OACredential * _credential;
    NSMutableArray * _multiParts;
    NSMutableDictionary * _parameters;
    long long  _requestMethod;
    NSObject<SLTimestampSkewStorageDelegate> * _timestampSkewStorageDelegate;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) long long requestMethod;

+ (bool)responseIsTimestampOutOfBounds:(id)arg1 data:(id)arg2 JSONResponseObject:(id)arg3;
+ (float)retryDelayForRetryCount:(int)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_allParameters;
- (id)_parameterString;
- (void)_performRequestExtractingJSONResponse:(bool)arg1 retryCount:(int)arg2 maxRetries:(int)arg3 completion:(id /* block */)arg4;
- (void)_setTimestampSkew:(double)arg1;
- (double)_timestampSkew;
- (id)_urlEncodedString:(id)arg1;
- (id)account;
- (void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)calculateTimestampSkewFromResponse:(id)arg1;
- (int)callingPID;
- (id)commandName;
- (id)credential;
- (id)initWithCredential:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (id)multiPartBodyData;
- (id)parameters;
- (void)performJSONRequestWithHandler:(id /* block */)arg1;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (long long)requestMethod;
- (bool)requiresAuthorization;
- (void)setAccount:(id)arg1;
- (void)setApplicationID:(id)arg1;
- (void)setCallingPID:(int)arg1;
- (void)setCredential:(id)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setRequestMethod:(long long)arg1;
- (void)setTimestampSkewStorageDelegate:(id)arg1;
- (void)sharedPrivateInit;
- (id)signedURLRequest;
- (id)timestampSkewStorageDelegate;

@end
