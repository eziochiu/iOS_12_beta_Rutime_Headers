/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    id /* block */  _initErrorHandler;
    id /* block */  _initFinishedHandler;
    GEOProtobufSessionTask * _initializationTask;
    GEOProtobufSession * _protobufSession;
    id /* block */  _updateErrorHandler;
    id /* block */  _updateFinishedHandler;
    GEOProtobufSessionTask * _updateTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initErrorHandler;
@property (nonatomic, copy) id /* block */ initFinishedHandler;
@property (nonatomic, retain) GEOProtobufSessionTask *initializationTask;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateErrorHandler;
@property (nonatomic, copy) id /* block */ updateFinishedHandler;
@property (nonatomic, retain) GEOProtobufSessionTask *updateTask;

+ (id)acInitURL;
+ (id)acUpdateURL;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelRequest;
- (void)didCompleteInitTask;
- (void)didCompleteUpdateTask;
- (id)init;
- (id /* block */)initErrorHandler;
- (id /* block */)initFinishedHandler;
- (id)initializationTask;
- (id)protobufSession;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)setInitErrorHandler:(id /* block */)arg1;
- (void)setInitFinishedHandler:(id /* block */)arg1;
- (void)setInitializationTask:(id)arg1;
- (void)setUpdateErrorHandler:(id /* block */)arg1;
- (void)setUpdateFinishedHandler:(id /* block */)arg1;
- (void)setUpdateTask:(id)arg1;
- (void)startInitRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startUpdateRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id /* block */)updateErrorHandler;
- (id /* block */)updateFinishedHandler;
- (id)updateTask;

@end