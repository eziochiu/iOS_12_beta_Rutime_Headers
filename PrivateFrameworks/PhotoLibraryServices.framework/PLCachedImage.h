/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCachedImage : UIImage {
    PLLoadRequestKey * _cacheKey;
    int  _format;
    NSDictionary * _metadata;
}

@property (nonatomic, copy) PLLoadRequestKey *cacheKey;
@property (nonatomic) int format;
@property (nonatomic, retain) NSDictionary *metadata;

- (id)cacheKey;
- (void)dealloc;
- (id)description;
- (int)format;
- (id)metadata;
- (void)setCacheKey:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setMetadata:(id)arg1;

@end
