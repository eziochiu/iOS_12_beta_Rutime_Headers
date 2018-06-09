/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPodcast : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, retain) MPModelPodcastAuthor *author;
@property (nonatomic, copy) NSURL *feedURL;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic) bool supportsSubscription;
@property (nonatomic, copy) NSString *title;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__author_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__title_KEY;
+ (id)kindWithEpisodeKind:(id)arg1;

- (id)artworkCatalog;

@end
