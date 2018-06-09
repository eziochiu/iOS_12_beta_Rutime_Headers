/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSection : NSObject <NSCopying, NSSecureCoding, NTSectionDisplayDescriptor> {
    NSString * _actionTitle;
    NSURL * _actionURL;
    NTPBSectionDisplayDescriptor * _displayDescriptor;
    NSString * _identifier;
    NSOrderedSet * _items;
    bool  _openVideoPlaylistInApp;
    NSString * _personalizationFeatureID;
    SFRankingFeedback * _rankingFeedback;
    NSString * _referralBarName;
    NSArray * _videoPlaylistHeadlines;
}

@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, readonly, copy) NSString *backgroundGradientColor;
@property (nonatomic, readonly, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, copy) NTPBSectionDisplayDescriptor *displayDescriptor;
@property (nonatomic, readonly) bool displaysAsVideoPlaylist;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSOrderedSet *items;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameColor;
@property (nonatomic) bool openVideoPlaylistInApp;
@property (nonatomic, readonly, copy) NSString *personalizationFeatureID;
@property (nonatomic, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, copy) NSString *referralBarName;
@property (nonatomic, readonly) bool useNameColorInWidget;
@property (nonatomic, readonly, copy) NSArray *videoPlaylistHeadlines;
@property (nonatomic, readonly) bool videoPlaysMutedByDefault;

+ (id)_itemClassesByType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionURL;
- (id)backgroundGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverMoreVideosInfo;
- (id)displayDescriptor;
- (bool)displaysAsVideoPlaylist;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionTitle:(id)arg2 actionURL:(id)arg3 personalizationFeatureID:(id)arg4 items:(id)arg5 videoPlaylistHeadlines:(id)arg6 rankingFeedback:(id)arg7 displayDescriptor:(id)arg8 referralBarName:(id)arg9 openVideoPlaylistInApp:(bool)arg10;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)name;
- (id)nameColor;
- (bool)openVideoPlaylistInApp;
- (id)personalizationFeatureID;
- (id)rankingFeedback;
- (id)referralBarName;
- (void)setActionTitle:(id)arg1;
- (void)setActionURL:(id)arg1;
- (void)setDisplayDescriptor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setOpenVideoPlaylistInApp:(bool)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setReferralBarName:(id)arg1;
- (bool)useNameColorInWidget;
- (id)videoPlaylistHeadlines;
- (bool)videoPlaysMutedByDefault;

@end
