/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVItemTimeMarkerEvent : NSObject {
    MPAVItem * _AVItem;
    MPTimeMarker * _URLMarker;
    MPTimeMarker * _artworkMarker;
    MPTimeMarker * _chapterMarker;
    MPTimeMarker * _closedCaptionMarker;
}

@property (nonatomic, retain) MPAVItem *AVItem;
@property (nonatomic, retain) MPTimeMarker *URLMarker;
@property (nonatomic, retain) MPTimeMarker *artworkMarker;
@property (nonatomic, retain) MPTimeMarker *chapterMarker;
@property (nonatomic, retain) MPTimeMarker *closedCaptionMarker;

- (void).cxx_destruct;
- (id)AVItem;
- (id)URLMarker;
- (id)artworkMarker;
- (id)chapterMarker;
- (id)closedCaptionMarker;
- (id)crossedMarkerOfType:(int)arg1;
- (id)initWithTimeMarkerNotificationUserInfo:(id)arg1;
- (void)setAVItem:(id)arg1;
- (void)setArtworkMarker:(id)arg1;
- (void)setChapterMarker:(id)arg1;
- (void)setClosedCaptionMarker:(id)arg1;
- (void)setURLMarker:(id)arg1;

@end
