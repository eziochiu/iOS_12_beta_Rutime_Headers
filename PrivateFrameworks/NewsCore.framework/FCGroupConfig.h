/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGroupConfig : NSObject {
    NSDictionary * _articleMetadataByArticleID;
    unsigned long long  _cutoffCount;
    unsigned long long  _cutoffTimeSecs;
    NSDictionary * _dictionary;
    FCColorGradient * _groupBackgroundColorGradient;
    NSArray * _groupFonts;
    FCColor * _groupTitleColor;
}

@property (nonatomic, readonly) NSString *articleListID;
@property (nonatomic, retain) NSDictionary *articleMetadataByArticleID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic) unsigned long long cutoffCount;
@property (nonatomic) unsigned long long cutoffTimeSecs;
@property (nonatomic, retain) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *feedID;
@property (nonatomic, readonly) NSString *groupActionTitle;
@property (nonatomic, readonly) NSString *groupActionURLString;
@property (nonatomic, retain) FCColorGradient *groupBackgroundColorGradient;
@property (nonatomic, retain) NSArray *groupFonts;
@property (nonatomic, readonly) NSString *groupName;
@property (nonatomic, readonly) NSString *groupSubtitle;
@property (nonatomic, retain) FCColor *groupTitleColor;
@property (nonatomic, readonly) NSString *groupTitleFontName;
@property (nonatomic, readonly) double groupTitleFontSize;
@property (nonatomic, readonly) double groupTitleFontSizeiPad;
@property (nonatomic, readonly) double groupTitleFontTracking;
@property (nonatomic, readonly) double groupTitleFontTrackingiPad;
@property (nonatomic, readonly) double groupTitleOffsetHeight;
@property (nonatomic, readonly) double groupTitleOffsetHeightiPad;
@property (nonatomic, readonly) double groupTitleOffsetY;
@property (nonatomic, readonly) double groupTitleOffsetYiPad;
@property (nonatomic, readonly) NSString *sectionID;

- (void).cxx_destruct;
- (id)articleListID;
- (id)articleMetadataByArticleID;
- (id)channelID;
- (unsigned long long)cutoffCount;
- (unsigned long long)cutoffTimeSecs;
- (id)dictionary;
- (id)feedID;
- (id)groupActionTitle;
- (id)groupActionURLString;
- (id)groupBackgroundColorGradient;
- (id)groupFonts;
- (id)groupName;
- (id)groupSubtitle;
- (id)groupTitleColor;
- (id)groupTitleFontName;
- (double)groupTitleFontSize;
- (double)groupTitleFontSizeiPad;
- (double)groupTitleFontTracking;
- (double)groupTitleFontTrackingiPad;
- (double)groupTitleOffsetHeight;
- (double)groupTitleOffsetHeightiPad;
- (double)groupTitleOffsetY;
- (double)groupTitleOffsetYiPad;
- (id)initWithDictionary:(id)arg1;
- (id)sectionID;
- (void)setArticleMetadataByArticleID:(id)arg1;
- (void)setCutoffCount:(unsigned long long)arg1;
- (void)setCutoffTimeSecs:(unsigned long long)arg1;
- (void)setDictionary:(id)arg1;
- (void)setGroupBackgroundColorGradient:(id)arg1;
- (void)setGroupFonts:(id)arg1;
- (void)setGroupTitleColor:(id)arg1;

@end
