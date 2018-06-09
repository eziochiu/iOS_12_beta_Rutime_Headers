/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    GEOApplicationAuditToken * _auditToken;
    bool  _cancelled;
    GEOETATrafficUpdateRequest * _currentRequest;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didStart;
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    GEOProtobufSession * _protobufSession;
    GEOProtobufSessionTask * _task;
    GEOMapServiceTraits * _traits;
    id /* block */  _willSendRequestHandler;
}

@property (retain) GEOETATrafficUpdateRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOProtobufSessionTask *task;
@property (nonatomic, copy) id /* block */ willSendRequestHandler;

- (void).cxx_destruct;
- (void)_startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)cancelRequest;
- (id)currentRequest;
- (void)didCompleteTask;
- (id /* block */)errorHandler;
- (id /* block */)finishedHandler;
- (id)init;
- (id)initWithAuditToken:(id)arg1 traits:(id)arg2;
- (id)protobufSession;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)protobufSession:(id)arg1 willSendRequestForTask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCurrentRequest:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setTask:(id)arg1;
- (void)setWillSendRequestHandler:(id /* block */)arg1;
- (void)startRequest:(id)arg1 connectionProperties:(id)arg2 willSendRequest:(id /* block */)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id)task;
- (void)updateRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id /* block */)willSendRequestHandler;

@end
