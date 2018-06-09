/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreLyricsRequest : NSObject <NSCopying> {
    MPModelSong * _song;
}

@property (nonatomic, retain) MPModelSong *song;

+ (bool)supportsLyricsForURLBagDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setSong:(id)arg1;
- (id)song;

@end
