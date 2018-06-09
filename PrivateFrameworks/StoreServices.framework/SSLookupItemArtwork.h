/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItemArtwork : NSObject {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) NSDictionary *lookupDictionary;
@property (nonatomic, readonly) long long width;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)URL;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4;
- (id)URLWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3;
- (void)dealloc;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 forColorKind:(id)arg5;
- (long long)height;
- (id)initWithLookupDictionary:(id)arg1;
- (id)lookupDictionary;
- (long long)width;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)MP_colorForColorKind:(id)arg1;
- (id)MP_rawURLString;
- (id)initWithRawMediaLookupDictionary:(id)arg1;

@end
