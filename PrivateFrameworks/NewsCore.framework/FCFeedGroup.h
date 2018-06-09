/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    FCFeedDescriptor * _L2FeedDescriptor;
    FCColorGradient * _backgroundGradient;
    NSDate * _creationDate;
    NTPBDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
    FCFeedEdition * _edition;
    NSArray * _elements;
    long long  _groupType;
    NSArray * _headlines;
    NSString * _identifier;
    bool  _isFirstFromEdition;
    unsigned long long  _mergeID;
    unsigned long long  _options;
    NSString * _sourceIdentifier;
    NTPBSpecialEventsConfig * _specialEventsConfig;
    NSString * _subtitle;
    NSString * _title;
    FCColor * _titleColor;
    NSArray * _videoPlaylistHeadlines;
}

@property (nonatomic, readonly, copy) FCFeedDescriptor *L2FeedDescriptor;
@property (nonatomic, readonly, copy) FCColorGradient *backgroundGradient;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) bool canBeExtended;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) bool hasStrictHeadlineOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isFirstFromEdition;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) bool shouldPresentCollapsed;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NTPBSpecialEventsConfig *specialEventsConfig;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) FCColor *titleColor;
@property (nonatomic, readonly, copy) NSArray *videoPlaylistHeadlines;

+ (id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2;
+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;

- (void).cxx_destruct;
- (id)L2FeedDescriptor;
- (id)backgroundGradient;
- (id)backingTagID;
- (bool)canBeExtended;
- (id)copyWithEdition:(id)arg1 isFirst:(bool)arg2;
- (id)copyWithElements:(id)arg1;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (id)discoverMoreVideosInfo;
- (id)edition;
- (id)elements;
- (long long)feedElementType;
- (long long)groupType;
- (bool)hasStrictHeadlineOrder;
- (unsigned long long)hash;
- (id)headlines;
- (id)identifier;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 specialEventsConfig:(id)arg3 elements:(id)arg4 options:(unsigned long long)arg5;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 backgroundGradient:(id)arg6 discoverMoreVideosInfo:(id)arg7 videoPlaylistHeadlines:(id)arg8 L2FeedDescriptor:(id)arg9 elements:(id)arg10 options:(unsigned long long)arg11;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleColor:(id)arg7 backgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 specialEventsConfig:(id)arg12 edition:(id)arg13 isFirstFromEdition:(bool)arg14 elements:(id)arg15 options:(unsigned long long)arg16 mergeID:(unsigned long long)arg17;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 backgroundGradient:(id)arg7 discoverMoreVideosInfo:(id)arg8 videoPlaylistHeadlines:(id)arg9 L2FeedDescriptor:(id)arg10 elements:(id)arg11 options:(unsigned long long)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFromEdition;
- (bool)isGap;
- (unsigned long long)mergeID;
- (unsigned long long)options;
- (bool)shouldPresentCollapsed;
- (id)sourceIdentifier;
- (id)specialEventsConfig;
- (id)subtitle;
- (id)title;
- (id)titleColor;
- (id)videoPlaylistHeadlines;

@end
