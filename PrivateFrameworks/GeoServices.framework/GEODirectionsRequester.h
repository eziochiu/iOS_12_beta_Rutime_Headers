/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsRequester : NSObject {
    <_GEODirectionsRequesterServerProxy> * _serverProxy;
}

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
+ (void)useRemoteProxy;

- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)finalizeRequest:(id)arg1;
- (id)init;
- (void)startRequest:(id)arg1 auditToken:(id)arg2 skipFinalize:(bool)arg3 isDoomRequest:(bool)arg4 requestPriority:(id)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end
