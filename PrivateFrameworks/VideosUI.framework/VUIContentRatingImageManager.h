/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIContentRatingImageManager : NSObject {
    NSDictionary * _imageRecords;
}

@property (nonatomic, retain) NSDictionary *imageRecords;

+ (void)_addImageRecordToDictionary:(id)arg1 ratingSystem:(long long)arg2 ratingLabel:(id)arg3 resourceName:(id)arg4 isTemplatedImage:(bool)arg5;
+ (id)_cleanedRatingLabel:(id)arg1;
+ (id)_imageForUnknownRatingLabel:(id)arg1;
+ (id)_imageRecordLookupKeyWithRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_imageRecordForContentRating:(id)arg1;
- (id)_imageRecordForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
- (id)imageForContentRating:(id)arg1;
- (id)imageForRatingLabel:(id)arg1 inRatingSystem:(long long)arg2;
- (id)imageRecords;
- (bool)isTemplatedImageForContentRating:(id)arg1;
- (id)records;
- (void)setImageRecords:(id)arg1;

@end
