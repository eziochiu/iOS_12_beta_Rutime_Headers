/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapter : NSObject {
    MPMediaLibraryArtworkDataSource * _artworkDataSource;
    MPMediaLibraryArtworkRequest * _artworkRequest;
    long long  _chapterType;
    unsigned long long  _indexInChaptersWithAnyType;
    unsigned long long  _indexInChaptersWithSameType;
    double  _playbackDuration;
    double  _playbackTime;
    id  _value;
    id /* block */  _valueLoader;
}

@property (nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource;
@property (nonatomic, retain) MPMediaLibraryArtworkRequest *artworkRequest;
@property (nonatomic) long long chapterType;
@property (nonatomic) unsigned long long indexInChaptersWithAnyType;
@property (nonatomic) unsigned long long indexInChaptersWithSameType;
@property (nonatomic) double playbackDuration;
@property (nonatomic) double playbackTime;
@property (nonatomic, retain) id value;
@property (nonatomic, copy) id /* block */ valueLoader;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (long long)_sortByChapterIndex:(id)arg1;
- (id)artworkCatalog;
- (id)artworkDataSource;
- (id)artworkRequest;
- (long long)chapterType;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexInChaptersWithAnyType;
- (unsigned long long)indexInChaptersWithSameType;
- (id)initWithCoder:(id)arg1;
- (double)playbackDuration;
- (double)playbackTime;
- (void)setArtworkDataSource:(id)arg1;
- (void)setArtworkRequest:(id)arg1;
- (void)setChapterType:(long long)arg1;
- (void)setIndexInChaptersWithAnyType:(unsigned long long)arg1;
- (void)setIndexInChaptersWithSameType:(unsigned long long)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setPlaybackTime:(double)arg1;
- (void)setValue:(id)arg1;
- (void)setValueLoader:(id /* block */)arg1;
- (id)title;
- (id)value;
- (id /* block */)valueLoader;

// Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI

- (id)wlk_dictionaryRepresentation;

@end
