/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationGroup : MPModelObject {
    NSURL * _refreshURL;
}

@property (nonatomic) unsigned long long groupType;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, copy) NSURL *refreshURL;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, retain) MPSectionedCollection *sectionedItems;
@property (nonatomic, copy) NSArray *subgroups;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__groupType_KEY;
+ (id)__lastUpdatedDate_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__refreshURL_KEY;
+ (id)__sectionIndex_KEY;
+ (id)__sectionedItems_KEY;
+ (id)__subgroups_KEY;
+ (id)__title_KEY;

- (void).cxx_destruct;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)refreshURL;
- (void)setRefreshURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (void)enumerateItemsUsingBlock:(id /* block */)arg1;

@end
