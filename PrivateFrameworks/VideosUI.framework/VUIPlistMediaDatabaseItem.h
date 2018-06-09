/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <NSCopying> {
    VUIContentRating * _contentRating;
    VUIMediaItemCredits * _credits;
    NSNumber * _duration;
    NSNumber * _episodeNumber;
    NSNumber * _local;
    NSURL * _previewFrameURL;
    NSDate * _releaseDate;
    VUIPlistMediaDatabaseSeason * _season;
    NSString * _studio;
}

@property (nonatomic, copy) VUIContentRating *contentRating;
@property (nonatomic, copy) VUIMediaItemCredits *credits;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *episodeNumber;
@property (getter=isPlayable, nonatomic, readonly, copy) NSNumber *playable;
@property (nonatomic, copy) NSURL *previewFrameURL;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic) VUIPlistMediaDatabaseSeason *season;
@property (nonatomic, copy) NSString *studio;

- (void).cxx_destruct;
- (id)contentRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credits;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)episodeNumber;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isLocal;
- (id)isPlayable;
- (id)previewFrameURL;
- (id)releaseDate;
- (id)season;
- (void)setContentRating:(id)arg1;
- (void)setCredits:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setEpisodeNumber:(id)arg1;
- (void)setPreviewFrameURL:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setStudio:(id)arg1;
- (id)studio;

@end
