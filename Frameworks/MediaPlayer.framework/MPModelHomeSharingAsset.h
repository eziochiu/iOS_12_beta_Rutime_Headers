/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelHomeSharingAsset : MPModelObject

@property (nonatomic, copy) NSURL *URL;
@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, copy) NSURL *protectedContentSupportStorageFileURL;

+ (id)__URL_KEY;
+ (id)__available_KEY;
+ (id)__protectedContentSupportStorageFileURL_KEY;

@end
