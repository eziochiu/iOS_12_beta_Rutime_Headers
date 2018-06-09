/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLSessionManager : NSObject <NSCacheDelegate, NSURLSessionDataDelegate> {
    NSArray * _customURLProtocols;
    NSObject<OS_dispatch_queue> * _eventQueue;
    SSCircularBuffer * _httpArchiveBuffer;
    unsigned long long  _memoryPressureCachedMaxSize;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned int  _memoryPressureStatus;
    SSMetricsController * _metricsController;
    NSMutableDictionary * _recordResponseMap;
    NSObject<OS_dispatch_queue> * _recordResponseQueue;
    NSMutableDictionary * _requestData;
    NSObject<OS_dispatch_queue> * _requestDataQueue;
    NSMutableDictionary * _responseData;
    NSObject<OS_dispatch_queue> * _responseDataQueue;
    NSMutableDictionary * _sendTimingDataMap;
    NSObject<OS_dispatch_queue> * _sendTimingDataQueue;
    NSMutableDictionary * _sessions;
    NSObject<OS_dispatch_queue> * _sessionsQueue;
    NSMapTable * _taskDelegates;
    NSObject<OS_dispatch_queue> * _taskDelegatesQueue;
    NSMutableDictionary * _taskMetrics;
    NSObject<OS_dispatch_queue> * _taskMetricsQueue;
}

@property (nonatomic, copy) NSArray *customURLProtocols;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SSCircularBuffer *httpArchiveBuffer;
@property (nonatomic) unsigned long long httpArchiveBufferSize;
@property (nonatomic, retain) SSMetricsController *metricsController;
@property (nonatomic, retain) NSMutableDictionary *recordResponseMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *recordResponseQueue;
@property (nonatomic, retain) NSMutableDictionary *requestData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestDataQueue;
@property (nonatomic, retain) NSMutableDictionary *responseData;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseDataQueue;
@property (nonatomic, retain) NSMutableDictionary *sendTimingDataMap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sendTimingDataQueue;
@property (nonatomic, retain) NSMutableDictionary *sessions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionsQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *taskDelegates;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *taskDelegatesQueue;
@property (nonatomic, retain) NSMutableDictionary *taskMetrics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *taskMetricsQueue;

+ (id)_DNSServerIPAddresses;
+ (id)_bagPerformanceValuesWithDelegate:(id)arg1;
+ (id)_fetchNetworkQualityReports;
+ (bool)_fetchedFromCache:(id)arg1;
+ (id)_legacyBagValueForKey:(id)arg1;
+ (double)_localTimeIntervalToServerTimeInterval:(double)arg1;
+ (unsigned long long)_messageSizeFromTask:(id)arg1 isRequest:(bool)arg2 delegate:(id)arg3;
+ (id)_metricsDictionaryWithDelegate:(id)arg1;
+ (double)_randomDouble;
+ (id)_resolvedIPAddressFromTask:(id)arg1;
+ (id)_responseDateFromTask:(id)arg1 delegate:(id)arg2;
+ (bool)_shouldCollectNetworkLogs;
+ (bool)_shouldCreateLocalCache;
+ (id)_tidStateForTask:(id)arg1 delegate:(id)arg2;
+ (double)_timingDataMetricToServerTimeInterval:(id)arg1;
+ (id)bagValueForKey:(id)arg1 delegate:(id)arg2 type:(unsigned long long)arg3;
+ (id)eventFromTimingData:(id)arg1 delegate:(id)arg2 task:(id)arg3 error:(id)arg4;
+ (id)eventFromTimingData:(id)arg1 requestProperties:(id)arg2 task:(id)arg3 error:(id)arg4;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2;
+ (id)eventFromTimingData:(id)arg1 task:(id)arg2 error:(id)arg3;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)_PIDFromAuditTokenData:(id)arg1;
- (id)_URLCacheForDelegate:(id)arg1;
- (id)_URLCacheIDForDelegate:(id)arg1;
- (void)_appendResponseData:(id)arg1 forSessionTask:(id)arg2;
- (id)_delegateForTask:(id)arg1;
- (void)_insertEventIntoDatabase:(id)arg1 delegate:(id)arg2;
- (void)_listenForLowMemoryWarning;
- (void)_logAPSResultsWithTask:(id)arg1;
- (void)_logCacheHitForTask:(id)arg1 metrics:(id)arg2;
- (void)_removeDelegateForTask:(id)arg1;
- (void)_removeRecordResponseDataForSessionTask:(id)arg1;
- (void)_removeResponseDataForSessionTask:(id)arg1;
- (id)_requestDataForSessionTask:(id)arg1;
- (id)_responseDataForSessionTask:(id)arg1;
- (id)_saveHTTPArchiveBufferToDiskDecompressed:(bool)arg1;
- (bool)_sendTimingDataForSessionTask:(id)arg1;
- (id)_sessionConfigurationWithDelegate:(id)arg1 collectTimingData:(bool)arg2;
- (id)_sessionIDWithDelegate:(id)arg1 collectTimingData:(bool)arg2;
- (id)_sessionWithDelegate:(id)arg1 collectTimingData:(bool*)arg2;
- (void)_setAPSTopicWithTask:(id)arg1;
- (void)_setDelegate:(id)arg1 forTask:(id)arg2;
- (void)_setRequestData:(id)arg1 forSessionTask:(id)arg2;
- (void)_setSendTimingData:(id)arg1 forSessionTask:(id)arg2;
- (void)_setTaskMetrics:(id)arg1 forSessionTask:(id)arg2;
- (bool)_shouldDisableCellularForDelegate:(id)arg1;
- (bool)_shouldEnableAPSRWithTask:(id)arg1;
- (bool)_shouldRecordResponseBodyForDataTask:(id)arg1;
- (bool)_shouldRequireCelluarForDelegate:(id)arg1;
- (bool)_shouldSetCookiesForDelegate:(id)arg1;
- (id)_taskMetricsForSessionTask:(id)arg1;
- (id)customURLProtocols;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)eventQueue;
- (void)flushHTTPArchiveBuffer;
- (id)httpArchiveBuffer;
- (unsigned long long)httpArchiveBufferSize;
- (id)init;
- (id)metricsController;
- (id)recordResponseMap;
- (id)recordResponseQueue;
- (id)requestData;
- (id)requestDataQueue;
- (id)responseData;
- (id)responseDataQueue;
- (id)sendTimingDataMap;
- (id)sendTimingDataQueue;
- (id)sessions;
- (id)sessionsQueue;
- (void)setCustomURLProtocols:(id)arg1;
- (void)setEventQueue:(id)arg1;
- (void)setHttpArchiveBuffer:(id)arg1;
- (void)setHttpArchiveBufferSize:(unsigned long long)arg1;
- (void)setMetricsController:(id)arg1;
- (void)setRecordResponseMap:(id)arg1;
- (void)setRecordResponseQueue:(id)arg1;
- (void)setRequestData:(id)arg1;
- (void)setRequestDataQueue:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseDataQueue:(id)arg1;
- (void)setSendTimingDataMap:(id)arg1;
- (void)setSendTimingDataQueue:(id)arg1;
- (void)setSessions:(id)arg1;
- (void)setSessionsQueue:(id)arg1;
- (void)setTaskDelegates:(id)arg1;
- (void)setTaskDelegatesQueue:(id)arg1;
- (void)setTaskMetrics:(id)arg1;
- (void)setTaskMetricsQueue:(id)arg1;
- (id)taskDelegates;
- (id)taskDelegatesQueue;
- (id)taskMetrics;
- (id)taskMetricsQueue;

@end
