/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest> {
    AVAssetResourceLoadingRequestInternal * _loadingRequest;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (nonatomic, readonly) AVAssetResourceLoadingDataRequest *dataRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURLRequest *redirect;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) AVAssetResourceLoadingRequestor *requestor;
@property (nonatomic, copy) NSURLResponse *response;
@property (readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;

- (void)_appendToCachedData:(id)arg1;
- (void)_cacheContentInformation:(id)arg1;
- (bool)_canSetOrUseCachedContentInformation;
- (struct OpaqueFigCustomURLHandler { }*)_contentKeySessionCustomURLHandler;
- (bool)_contentKeySessionIsAttached;
- (struct OpaqueFigCustomURLHandler { }*)_customURLHandler;
- (struct OpaqueFigCustomURLLoader { }*)_customURLLoader;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (id)_getAndClearCachedData;
- (bool)_isRequestForContentKey;
- (void)_performCancellationByClient;
- (id)_requestDictionary;
- (unsigned long long)_requestID;
- (struct __CFDictionary { }*)_requestInfo;
- (id)_resourceLoader;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (void)_sendResponseInfoToCustomURLHandler;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_setDataRequest:(id)arg1;
- (bool)_shouldInformDelegateOfFigCancellation;
- (bool)_tryToMarkAsCancelled;
- (id)_weakReference;
- (id)contentInformationRequest;
- (id)createKeyRequestDataUsingCryptorForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 performAsync:(bool)arg4 error:(id*)arg5;
- (id)dataRequest;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (bool)finished;
- (void)forwardRequestToContentKeySession;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithResourceLoader:(id)arg1 URL:(id)arg2 httpRequestHeaders:(id)arg3 requestOffset:(id)arg4 requestLength:(id)arg5 allowedContentTypes:(id)arg6 figCryptor:(struct OpaqueFigCPECryptor { }*)arg7 cryptorKeyRequestID:(unsigned long long)arg8 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg9 figAssetImageGenerator:(struct OpaqueFigAssetImageGenerator { }*)arg10;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (id)initWithResourceLoader:(id)arg1 requestInfo:(struct __CFDictionary { }*)arg2 requestID:(unsigned long long)arg3;
- (bool)isCancelled;
- (bool)isFinished;
- (id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)redirect;
- (id)request;
- (id)requestor;
- (id)response;
- (id)serializableRepresentation;
- (void)setRedirect:(id)arg1;
- (void)setResponse:(id)arg1;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;

@end
