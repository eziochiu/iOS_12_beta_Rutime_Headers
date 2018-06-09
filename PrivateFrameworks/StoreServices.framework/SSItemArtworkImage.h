/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemArtworkImage : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary * _dictionary;
    NSString * _imageKind;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, readonly) NSString *URLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long height;
@property (nonatomic, copy) NSString *imageKind;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) double imageScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (getter=isPrerendered, nonatomic, readonly) bool prerendered;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long width;

- (id)URL;
- (id)URLString;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (long long)height;
- (id)imageKind;
- (long long)imageOrientation;
- (double)imageScale;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPrerendered;
- (void)setImageKind:(id)arg1;
- (void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (long long)width;

@end