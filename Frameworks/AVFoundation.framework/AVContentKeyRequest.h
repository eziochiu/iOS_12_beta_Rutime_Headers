/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeyRequest : NSObject {
    AVContentKeyRequestInternal * _contentKeyRequest;
}

@property (readonly) bool canProvidePersistableContentKey;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (nonatomic, readonly) NSData *initializationData;
@property (readonly) long long status;

+ (id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2;
+ (int)_prepareCryptor:(struct OpaqueFigCPECryptor { }*)arg1 forRenewal:(bool)arg2 andReturnKeyRequestID:(unsigned long long*)arg3;
+ (void)_validateHLSEncryptionMethod:(id)arg1;
+ (void)_validateProtocolVersionList:(id)arg1;

- (bool)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_clearContext;
- (void)_copyAndStoreCryptorUUID;
- (void)_ensureResponseInfoSentToCustomURLHandler;
- (int)_extractAndStoreDefualtKeyIDFromInitializationData:(id)arg1;
- (id)_getRetryReasonForError:(int)arg1;
- (void)_handleKeyResponseError:(id)arg1;
- (void)_handleKeyResponseSuccess;
- (id)_keySystem;
- (int)_prepareForKeyRenewal;
- (void)_sendDataToCustomURLHandler:(id)arg1;
- (void)_sendDictionaryForURLRequest:(id)arg1;
- (void)_sendFinishLoadingToCustomURLHandler;
- (void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg1;
- (void)_sendResponseInfoToCustomURLHandler;
- (struct OpaqueFigCPECryptor { }*)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 error:(id*)arg2;
- (void)_setError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (bool)canProvidePersistableContentKey;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)error;
- (struct OpaqueFigCPECryptor { }*)figCryptor;
- (id)identifier;
- (id)initWithContentKeySession:(id)arg1 customURLHandler:(struct OpaqueFigCustomURLHandler { }*)arg2 identifier:(id)arg3 requestInfo:(struct __CFDictionary { }*)arg4 requestID:(unsigned long long)arg5 providesPersistableKey:(bool)arg6;
- (id)initWithContentKeySession:(id)arg1 customURLProviderContext:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 providesPersistableKey:(bool)arg5;
- (id)initWithContentKeySession:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 preloadingRequestOptions:(id)arg4 providesPersistableKey:(bool)arg5;
- (id)initializationData;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)processContentKeyResponse:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1;
- (void)processContentKeyResponseError:(id)arg1;
- (void)renewExpiringContentKeyResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (bool)respondByRequestingPersistableContentKeyRequestAndReturnError:(id*)arg1;
- (long long)status;

@end
