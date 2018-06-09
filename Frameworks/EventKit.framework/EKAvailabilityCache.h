/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCache : NSObject {
    NSString * _accountID;
    NSMutableDictionary * _addressesToCachedSpanRanges;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    unsigned long long  _cancelledID;
    NSMutableDictionary * _ignoredEventIDsToAddressBasedCaches;
    unsigned long long  _nextRequestID;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _sourceIsInvalid;
    bool  _sourceSupportsAvailabilityRequests;
}

+ (long long)_convertType:(long long)arg1;
+ (id)_generateEventKitSpansFromPersistenceSpans:(id)arg1;
+ (bool)_isValidStartDate:(id)arg1 endDate:(id)arg2;
+ (void)_logRequestElapsedTime:(double)arg1 forNumberOfAddresses:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_dictionaryForIgnoredEventID:(id)arg1;
- (void)_handleResults:(id)arg1 resultsBlock:(id /* block */)arg2 ignoredEventID:(id)arg3;
- (void)cancelAvailabilityRequestWithID:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithSource:(id)arg1;
- (id)requestAvailabilityBetweenStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 resultsBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;

@end
