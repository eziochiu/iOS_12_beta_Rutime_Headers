/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaPlayerItem : NSObject <NSCopying> {
    NSURL * _backgroundImageURL;
    NSString * _bookmarkIdentifier;
    NSArray * _downloadPingURLs;
    long long  _initialOrientation;
    unsigned long long  _itemIdentifier;
    long long  _itemType;
    double  _playableDuration;
    NSArray * _playbackPingURLs;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, retain) NSURL *backgroundImageURL;
@property (nonatomic, copy) NSString *bookmarkIdentifier;
@property (nonatomic) double bookmarkedStartTime;
@property (nonatomic, copy) NSArray *downloadPingURLs;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic) long long itemType;
@property (nonatomic) double playableDuration;
@property (nonatomic, copy) NSArray *playbackPingURLs;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (id)URL;
- (id)_newPingURLsWithArray:(id)arg1;
- (id)backgroundImageURL;
- (id)bookmarkIdentifier;
- (double)bookmarkedStartTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)downloadPingURLs;
- (id)initWithItem:(id)arg1;
- (long long)initialOrientation;
- (unsigned long long)itemIdentifier;
- (long long)itemType;
- (double)playableDuration;
- (id)playbackPingURLs;
- (void)resetBookmarkedStartTime;
- (void)setBackgroundImageURL:(id)arg1;
- (void)setBookmarkIdentifier:(id)arg1;
- (void)setBookmarkedStartTime:(double)arg1;
- (void)setDownloadPingURLs:(id)arg1;
- (void)setInitialOrientation:(long long)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setItemType:(long long)arg1;
- (void)setPlayableDuration:(double)arg1;
- (void)setPlaybackPingURLs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)subtitle;
- (id)title;

@end
