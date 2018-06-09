/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    GEOProtobufSession * _protobufSession;
    id /* block */  _statusErrorHandler;
    id /* block */  _statusFinishedHandler;
    GEOProtobufSessionTask * _statusTask;
    id /* block */  _submissionErrorHandler;
    id /* block */  _submissionFinishedHandler;
    GEOProtobufSessionTask * _submissionTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOProtobufSession *protobufSession;
@property (nonatomic, copy) id /* block */ statusErrorHandler;
@property (nonatomic, copy) id /* block */ statusFinishedHandler;
@property (nonatomic, retain) GEOProtobufSessionTask *statusTask;
@property (nonatomic, copy) id /* block */ submissionErrorHandler;
@property (nonatomic, copy) id /* block */ submissionFinishedHandler;
@property (nonatomic, retain) GEOProtobufSessionTask *submissionTask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelRequest;
- (void)didCompleteStatusTask;
- (void)didCompleteSubmissionTask;
- (id)init;
- (id)protobufSession;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)setStatusErrorHandler:(id /* block */)arg1;
- (void)setStatusFinishedHandler:(id /* block */)arg1;
- (void)setStatusTask:(id)arg1;
- (void)setSubmissionErrorHandler:(id /* block */)arg1;
- (void)setSubmissionFinishedHandler:(id /* block */)arg1;
- (void)setSubmissionTask:(id)arg1;
- (void)startStatusRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;
- (id /* block */)statusErrorHandler;
- (id /* block */)statusFinishedHandler;
- (id)statusTask;
- (id /* block */)submissionErrorHandler;
- (id /* block */)submissionFinishedHandler;
- (id)submissionTask;

@end
