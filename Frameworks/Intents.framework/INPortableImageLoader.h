/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding> {
    <INPortableImageLoaderHelping> * _helper;
    NSString * _helperClassName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <INPortableImageLoaderHelping> *helper;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)canLoadImageDataForImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)helper;
- (id)initWithCoder:(id)arg1;
- (void)loadImageDataFromImage:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (void)loadImageDataFromImage:(id)arg1 completion:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;
- (void)setHelper:(id)arg1;

@end
