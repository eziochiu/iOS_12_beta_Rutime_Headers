/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSessionTask : NSObject <GEODataSessionTask, GEODataSessionTaskDelegate, GEODataSessionTaskRulesObserver, GEOStateCapturing> {
    NSObject<OS_os_activity> * _activity;
    <GEODataSessionTask> * _completedSubtask;
    <GEODataSessionTaskDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didStart;
    double  _endTime;
    int  _requestKind;
    <GEODataSessionTaskRules> * _rules;
    GEODataSession * _session;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    double  _startTime;
    unsigned long long  _stateCaptureHandle;
    unsigned int  _taskIdentifier;
    GEODataURLSessionTask * _urlTask;
    bool  _willSendRequestDelegateCalled;
    GEODataSessionTask * _xpcTask;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *activity;
@property (nonatomic, readonly) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) <GEODataSessionTask> *completedSubtask;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEODataSessionTaskDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) double elapsedTime;
@property (nonatomic, readonly) NSString *entityTag;
@property (nonatomic, readonly) NSError *error;
@property (readonly) bool failedDueToCancel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long incomingPayloadSize;
@property (nonatomic, readonly) NSURL *originalRequestURL;
@property (nonatomic, readonly) unsigned long long outgoingPayloadSize;
@property (nonatomic, readonly) <NSObject> *parsedResponse;
@property float priority;
@property (nonatomic, readonly) bool protocolBufferHasPreamble;
@property (nonatomic, readonly) NSData *receivedData;
@property (nonatomic, readonly) NSString *remoteAddressAndPort;
@property (nonatomic, readonly) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, readonly) int requestKind;
@property (nonatomic, readonly) long long responseSource;
@property (nonatomic) GEODataSession *session;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int taskIdentifier;
@property (nonatomic, retain) GEODataURLSessionTask *urlTask;
@property (nonatomic, retain) GEODataSessionTask *xpcTask;

- (void).cxx_destruct;
- (id)activity;
- (void)cancel;
- (id)captureStateWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)clientMetrics;
- (id)completedSubtask;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)delegateQueue;
- (bool)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2;
- (double)elapsedTime;
- (id)entityTag;
- (id)error;
- (bool)failedDueToCancel;
- (bool)getHeaderValue:(id*)arg1 forField:(id)arg2;
- (unsigned long long)incomingPayloadSize;
- (id)initWithSession:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 requestKind:(int)arg5 requestCounterTicket:(id)arg6;
- (id)originalRequestURL;
- (unsigned long long)outgoingPayloadSize;
- (id)parsedResponse;
- (float)priority;
- (bool)protocolBufferHasPreamble;
- (id)receivedData;
- (id)remoteAddressAndPort;
- (id)requestCounterTicket;
- (int)requestKind;
- (long long)responseSource;
- (void)rulesDidChooseCompletedSubtask:(id)arg1;
- (id)session;
- (id)sessionIsolation;
- (void)setCompletedSubtask:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setSession:(id)arg1;
- (void)setUrlTask:(id)arg1;
- (void)setXpcTask:(id)arg1;
- (void)start;
- (void)startSubtasksApplyingRules:(id)arg1 URL:(id)arg2 XPC:(id)arg3;
- (unsigned int)taskIdentifier;
- (id)urlTask;
- (bool)validateTileResponseWithError:(id*)arg1;
- (bool)validateTransportWithError:(id*)arg1;
- (id)xpcTask;

@end
