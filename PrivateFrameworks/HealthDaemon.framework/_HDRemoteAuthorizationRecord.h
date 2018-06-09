/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDRemoteAuthorizationRecord : NSObject {
    HKAuthorizationRequestRecord * _record;
    id /* block */  _requestFinishedHandler;
    id /* block */  _requestSentHandler;
}

@property (nonatomic, readonly) HKAuthorizationRequestRecord *record;
@property (nonatomic, readonly, copy) id /* block */ requestFinishedHandler;
@property (nonatomic, readonly, copy) id /* block */ requestSentHandler;

- (void).cxx_destruct;
- (id)initWithRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 requestFinishedHandler:(id /* block */)arg3;
- (id)record;
- (id /* block */)requestFinishedHandler;
- (id /* block */)requestSentHandler;

@end