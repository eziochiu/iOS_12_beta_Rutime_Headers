/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSectionDisplayDescriptor : PBCodable <NSCopying> {
    NSString * _actionTitle;
    NSString * _actionURLString;
    NSString * _backgroundGradientColor;
    NSData * _discoverMoreVideosInfoData;
    bool  _displaysAsVideoPlaylist;
    struct { 
        unsigned int displaysAsVideoPlaylist : 1; 
        unsigned int useNameColorInWidget : 1; 
        unsigned int videoPlaysMutedByDefault : 1; 
    }  _has;
    NSString * _name;
    NSString * _nameColor;
    bool  _useNameColorInWidget;
    bool  _videoPlaysMutedByDefault;
}

@property (nonatomic, retain) NSString *actionTitle;
@property (nonatomic, copy) NSURL *actionURL;
@property (nonatomic, retain) NSString *actionURLString;
@property (nonatomic, retain) NSString *backgroundGradientColor;
@property (nonatomic, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, retain) NSData *discoverMoreVideosInfoData;
@property (nonatomic) bool displaysAsVideoPlaylist;
@property (nonatomic, readonly) bool hasActionTitle;
@property (nonatomic, readonly) bool hasActionURLString;
@property (nonatomic, readonly) bool hasBackgroundGradientColor;
@property (nonatomic, readonly) bool hasDiscoverMoreVideosInfoData;
@property (nonatomic) bool hasDisplaysAsVideoPlaylist;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameColor;
@property (nonatomic) bool hasUseNameColorInWidget;
@property (nonatomic) bool hasVideoPlaysMutedByDefault;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameColor;
@property (nonatomic) bool useNameColorInWidget;
@property (nonatomic) bool videoPlaysMutedByDefault;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)actionTitle;
- (id)actionURLString;
- (id)backgroundGradientColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoverMoreVideosInfoData;
- (bool)displaysAsVideoPlaylist;
- (bool)hasActionTitle;
- (bool)hasActionURLString;
- (bool)hasBackgroundGradientColor;
- (bool)hasDiscoverMoreVideosInfoData;
- (bool)hasDisplaysAsVideoPlaylist;
- (bool)hasName;
- (bool)hasNameColor;
- (bool)hasUseNameColorInWidget;
- (bool)hasVideoPlaysMutedByDefault;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)nameColor;
- (bool)readFrom:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setActionURLString:(id)arg1;
- (void)setBackgroundGradientColor:(id)arg1;
- (void)setDiscoverMoreVideosInfoData:(id)arg1;
- (void)setDisplaysAsVideoPlaylist:(bool)arg1;
- (void)setHasDisplaysAsVideoPlaylist:(bool)arg1;
- (void)setHasUseNameColorInWidget:(bool)arg1;
- (void)setHasVideoPlaysMutedByDefault:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameColor:(id)arg1;
- (void)setUseNameColorInWidget:(bool)arg1;
- (void)setVideoPlaysMutedByDefault:(bool)arg1;
- (bool)useNameColorInWidget;
- (bool)videoPlaysMutedByDefault;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)actionURL;
- (id)discoverMoreVideosInfo;
- (void)setActionURL:(id)arg1;
- (void)setDiscoverMoreVideosInfo:(id)arg1;

@end