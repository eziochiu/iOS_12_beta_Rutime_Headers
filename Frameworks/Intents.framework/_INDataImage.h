/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INDataImage : INImage {
    NSData * _imageData;
}

@property (nonatomic, copy) NSData *imageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (bool)_requiresRetrieval;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImageData:(id)arg1;

@end
