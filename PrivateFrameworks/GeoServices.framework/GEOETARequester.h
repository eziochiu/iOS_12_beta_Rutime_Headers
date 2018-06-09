/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequester : NSObject {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMapTable * _pendingRequests;
    NSHashTable * _pendingSimpleRequests;
}

+ (id)sharedRequester;

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)cancelSimpleETARequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 auditToken:(id)arg3 requestMode:(int)arg4 willSendRequest:(id /* block */)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
