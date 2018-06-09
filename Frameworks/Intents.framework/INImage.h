/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INImage : NSObject <INCacheableObject, INImageExport, INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    struct { 
        double width; 
        double height; 
    }  _imageSize;
}

@property (setter=_setBundlePath:, nonatomic, copy) NSString *_bundlePath;
@property (setter=_setIdentifier:, nonatomic, copy) NSString *_identifier;
@property (setter=_setImageData:, nonatomic, copy) NSData *_imageData;
@property (setter=_setImageSize:, nonatomic) struct { double x1; double x2; } _imageSize;
@property (readonly) INImage *_keyImage;
@property (setter=_setName:, nonatomic, copy) NSString *_name;
@property (nonatomic, readonly) bool _requiresRetrieval;
@property (setter=_setUri:, nonatomic, copy) NSURL *_uri;
@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (nonatomic, readonly, copy) NSData *cd_encodedDataImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_bundleImageWithURL:(id)arg1;
+ (id)_classesInCluster;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(id /* block */)arg3;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (void)initialize;
+ (void)registerImageLoadersOnce;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundlePath;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_description;
- (id)_descriptionAtIndent:(unsigned long long)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_imageData;
- (struct { double x1; double x2; })_imageSize;
- (id)_in_writeableFilePersistenceConfiguration;
- (id)_initWithData:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (id)_keyImage;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (id)_name;
- (id)_preferredImageLoader;
- (void)_requestProxy:(id /* block */)arg1;
- (bool)_requiresRetrieval;
- (void)_retrieveImageDataWithReply:(id /* block */)arg1;
- (void)_setBundlePath:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setImageData:(id)arg1;
- (void)_setImageSize:(struct { double x1; double x2; })arg1;
- (void)_setName:(id)arg1;
- (void)_setUri:(id)arg1;
- (id)_uri;
- (id)cacheIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)generateCachePayloadWithCompletion:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

+ (struct CGSize { double x1; double x2; })imageSizeForIntentResponse:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithUIImage:(id)arg1;

- (void)fetchUIImageWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (id)cd_encodedDataImage;

@end
