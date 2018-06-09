/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanRequest : NSObject <NSURLConnectionDataDelegate> {
    NSDictionary * _bootstrapSettings;
    id /* block */  _completionBlock;
    NSURLConnection * _connection;
    NSError * _error;
    NSDictionary * _internetSettings;
    struct dispatch_queue_s { } * _queue;
    NSMutableData * _receivedData;
    NSMutableURLRequest * _request;
    NSArray * _requestCookies;
    NSURLResponse * _response;
    NSArray * _responseCookies;
    int  nextConnectionTypeIndex;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSURLConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct dispatch_queue_s { }*queue;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSMutableURLRequest *request;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic) NSData *serializedCookies;
@property (readonly) Class superclass;

+ (id)connectionSettingsForServiceType:(long long)arg1;
+ (id)createSessionRequest;
+ (void)initialize;
+ (bool)isRetriableErrorCode:(long long)arg1;
+ (void)load;
+ (id)loadPlansRequestWithUrl:(id)arg1 postData:(id)arg2;
+ (id)newInitiatePurchaseWithSessionId:(id)arg1 planId:(id)arg2;
+ (id)newPurchaseWithSessionId:(id)arg1 receipt:(id)arg2 userId:(id)arg3 userName:(id)arg4;
+ (id)plansRequestWithSignIdMap:(id)arg1 renewalIccid:(id)arg2 urls:(id)arg3;
+ (id)requestHandoffTokenWithSignIdMap:(id)arg1 urls:(id)arg2;
+ (void)setBootstrapConnectionSettings:(id)arg1;
+ (void)setInternetConnectionSettings:(id)arg1;
+ (void)setRequestUrls:(id)arg1;
+ (id)subscriptionDetailsRequestWithIccids:(id)arg1 signIdMap:(id)arg2 urls:(id)arg3;

- (void)_callback;
- (bool)_canTryAnotherConnectionType;
- (id)_connectionSettingsForNextConnectionType;
- (id)_initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4 internetSettings:(id)arg5 bootstrapSettings:(id)arg6;
- (bool)_isRetryableError:(id)arg1;
- (void)_startRequestWithNextConnectionTypeOrFail;
- (void)cancel;
- (id /* block */)completionBlock;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initGetWithUrl:(id)arg1;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2;
- (id)initJsonPostWithUrl:(id)arg1 jsonData:(id)arg2 internetSettings:(id)arg3 bootstrapSettings:(id)arg4;
- (id)initPostWithUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 httpMethod:(id)arg2 httpHeaders:(id)arg3 httpBody:(id)arg4;
- (struct dispatch_queue_s { }*)queue;
- (id)receivedData;
- (id)request;
- (id)response;
- (id)serializedCookies;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setError:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setReceivedData:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSerializedCookies:(id)arg1;
- (void)startRequestWithReplyQueue:(struct dispatch_queue_s { }*)arg1 completion:(id /* block */)arg2;

@end
