/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRemoteImageProxy : INImage {
    NSString * _proxyIdentifier;
    NSString * _storageServiceIdentifier;
}

@property (setter=_setProxyIdentifier:, nonatomic, copy) NSString *_proxyIdentifier;
@property (setter=_setStorageServiceIdentifier:, nonatomic, copy) NSString *_storageServiceIdentifier;
@property (nonatomic, readonly) bool isValid;

+ (void)requestProxyByStoringImage:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_proxyIdentifier;
- (void)_retrieveImageDataWithReply:(id /* block */)arg1;
- (void)_setProxyIdentifier:(id)arg1;
- (void)_setStorageServiceIdentifier:(id)arg1;
- (id)_storageServiceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)purgeStoredImageWithCompletion:(id /* block */)arg1;

@end
