/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet {
    unsigned long long  _commentCount;
    bool  _hasUserLiked;
    unsigned long long  _likeCount;
}

@property (nonatomic, readonly) unsigned long long commentCount;
@property (nonatomic, readonly) bool hasUserLiked;
@property (nonatomic, readonly) unsigned long long likeCount;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (unsigned long long)commentCount;
- (bool)hasUserLiked;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (unsigned long long)likeCount;

@end
