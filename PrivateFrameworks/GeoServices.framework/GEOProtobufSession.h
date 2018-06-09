/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProtobufSession : NSObject {
    <GEODataSession> * _dataSession;
    unsigned long long  _lastTaskIdentifier;
    <GEODataSessionRulesProvider> * _rulesProvider;
}

@property (nonatomic, readonly) <GEODataSession> *dataSession;

+ (id)sharedDelegateQueue;
+ (id)sharedEncodeDecodeQueue;
+ (id)sharedProtobufSession;

- (void).cxx_destruct;
- (id)dataSession;
- (id)init;
- (id)initWithDataSession:(id)arg1 rulesProvider:(id)arg2;
- (id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned int)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)taskWithRequestKind:(int)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 auditToken:(id)arg5 traits:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8 requestCounterTicket:(id)arg9;

@end
