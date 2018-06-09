/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShiftLocation : NSObject {
    double  _accuracy;
    GEOApplicationAuditToken * _auditToken;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    id /* block */  _errorHandler;
    id /* block */  _functionHandler;
    GEOLatLng * _latLng;
    id /* block */  _mustGoToNetworkCallback;
    bool  _recordCacheInfo;
    struct __CFRunLoop { } * _runLoop;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) GEOLatLng *latLng;

- (void).cxx_destruct;
- (id)_initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5;
- (void)_performOnCallbackQueue:(id /* block */)arg1;
- (double)accuracy;
- (id)auditToken;
- (void)dealloc;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackQueue:(id)arg6;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackQueue:(id)arg6 auditToken:(id)arg7;
- (id)initWithLatLng:(id)arg1 accuracy:(double)arg2 completionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 mustGoToNetworkCallback:(id /* block */)arg5 callbackRunLoop:(struct __CFRunLoop { }*)arg6;
- (id)initWithLatLng:(id)arg1 auditToken:(id)arg2 functionHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4 callbackQueue:(id)arg5;
- (id)latLng;
- (void)performCompletionHandlerWithShiftedCoordinate:(struct { double x1; double x2; })arg1 accuracy:(double)arg2 function:(id)arg3 wasFunctionCached:(bool)arg4;
- (void)performErrorHandler:(id)arg1;
- (void)performMustGoToNetwork;

@end
