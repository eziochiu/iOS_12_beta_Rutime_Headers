/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelMediaClip : MPModelObject

@property (nonatomic, copy) id /* block */ previewArtworkCatalogBlock;
@property (nonatomic, copy) NSArray *staticAssets;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__previewArtworkCatalogBlock_KEY;
+ (id)__staticAssets_KEY;
+ (id)__title_KEY;

- (id)previewArtworkCatalog;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredPlaybackProperties;

@end
