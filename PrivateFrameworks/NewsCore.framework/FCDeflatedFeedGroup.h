/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCDeflatedFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    NSArray * _headlines;
    NTPBFeedViewportGroup * _pbGroup;
    FCSharedStringIndex * _sharedStrings;
    NSArray * _videoPlaylistHeadlines;
}

@property (nonatomic, readonly, copy) FCColorGradient *backgroundGradient;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) long long groupType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NTPBFeedViewportGroup *pbGroup;
@property (nonatomic, readonly) FCSharedStringIndex *sharedStrings;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NTPBSpecialEventsConfig *specialEventsConfig;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) FCColor *titleColor;
@property (nonatomic, readonly, copy) NSArray *videoPlaylistHeadlines;

- (void).cxx_destruct;
- (id)backgroundGradient;
- (id)backingTagID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)discoverMoreVideosInfo;
- (id)edition;
- (long long)feedElementType;
- (long long)groupType;
- (id)headlines;
- (id)identifier;
- (id)initWithPBGroup:(id)arg1 sharedStrings:(id)arg2;
- (bool)isGap;
- (unsigned long long)mergeID;
- (unsigned long long)options;
- (id)pbGroup;
- (id)sharedStrings;
- (id)sourceIdentifier;
- (id)specialEventsConfig;
- (id)subtitle;
- (id)title;
- (id)titleColor;
- (id)videoPlaylistHeadlines;

@end
