/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
 */

@interface PHMediaFormatConversionManager : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<PHMediaFormatConversionImplementation> * _conversionImplementation;
    PHMediaFormatConversionJob * _currentlyProcessingJob;
    NSURL * _directoryForTemporaryFiles;
    NSObject<OS_dispatch_queue> * _preflightQueue;
    NSMutableArray * _queuedJobs;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    id /* block */  _transferBehaviorUserPreferenceOverride;
}

@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation;
@property (retain) PHMediaFormatConversionJob *currentlyProcessingJob;
@property (nonatomic, retain) NSURL *directoryForTemporaryFiles;
@property (retain) NSObject<OS_dispatch_queue> *preflightQueue;
@property (retain) NSMutableArray *queuedJobs;
@property unsigned long long state;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (void).cxx_destruct;
- (id)callbackQueue;
- (void)cancellationRequestedForJob:(id)arg1;
- (void)configureTransferBehaviorUserPreferenceForRequest:(id)arg1;
- (id)conversionImplementation;
- (id)currentlyProcessingJob;
- (id)directoryForTemporaryFiles;
- (void)enqueueConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (id)jobForConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preflightAllRelatedRequestsForCurrentJob;
- (void)preflightConversionRequest:(id)arg1;
- (void)preflightConversionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)preflightQueue;
- (void)processQueuedJobs;
- (id)queuedJobs;
- (id)rootAncestorRequestForRequest:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setConversionImplementation:(id)arg1;
- (void)setCurrentlyProcessingJob:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setPreflightQueue:(id)arg1;
- (void)setQueuedJobs:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateQueue:(id)arg1;
- (void)setTransferBehaviorUserPreferenceOverride:(id /* block */)arg1;
- (void)setupConversionImplementation;
- (unsigned long long)state;
- (id)stateQueue;
- (void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg1;

@end
