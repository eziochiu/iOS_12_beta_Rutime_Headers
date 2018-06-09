/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyPlayerQueueLazySectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _hardQueueRange;
    MPCMediaPlayerLegacyPlaylistManager * _playlistManager;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _softQueueRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCMediaPlayerLegacyPlaylistManager *playlistManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaylistManager:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)playlistManager;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
