/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INBundleImage : INImage {
    INImageBundle * _imageBundle;
    NSString * _imageName;
}

@property (nonatomic, copy) INImageBundle *imageBundle;
@property (nonatomic, copy) NSString *imageName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_in_bundleImageFileWritingPath;
- (id)_initWithIdentifier:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)_requiresRetrieval;
- (void)encodeWithCoder:(id)arg1;
- (id)imageBundle;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringRepresentation:(id)arg1;
- (void)setImageBundle:(id)arg1;
- (void)setImageName:(id)arg1;
- (id)stringRepresentation;

@end
