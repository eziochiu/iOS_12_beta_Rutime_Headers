/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INURLImage : INImage {
    NSURL * _imageURL;
}

@property (nonatomic, copy) NSURL *imageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)_requiresRetrieval;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)initWithCoder:(id)arg1;
- (void)setImageURL:(id)arg1;

@end
