/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelStoreBrowseSection : MPModelObject

@property (getter=isBrick, nonatomic) bool brick;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (getter=isMemberOfChartSet, nonatomic) bool memberOfChartSet;
@property (nonatomic, retain) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (nonatomic) long long sectionType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long uniformContentItemType;

+ (id)__brick_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__previouslyRetrievedNestedResponse_KEY;
+ (id)__sectionType_KEY;
+ (id)__title_KEY;
+ (id)__uniformContentItemType_KEY;

@end
