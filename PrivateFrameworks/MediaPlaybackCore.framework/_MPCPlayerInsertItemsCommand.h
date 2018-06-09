/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand> {
    NSArray * _devices;
    NSSet * _supportedCustomDataQueueIdentifiers;
    NSSet * _supportedInsertionPositions;
    NSSet * _supportedQueueTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *supportedCustomDataQueueIdentifiers;
@property (nonatomic, retain) NSSet *supportedInsertionPositions;
@property (nonatomic, retain) NSSet *supportedQueueTypes;

- (void).cxx_destruct;
- (id)_insertWithOptions:(id)arg1;
- (bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(bool)arg2 atInsertionPosition:(int)arg3;
- (id)devices;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;
- (void)setDevices:(id)arg1;
- (void)setSupportedCustomDataQueueIdentifiers:(id)arg1;
- (void)setSupportedInsertionPositions:(id)arg1;
- (void)setSupportedQueueTypes:(id)arg1;
- (id)supportedCustomDataQueueIdentifiers;
- (id)supportedInsertionPositions;
- (id)supportedQueueTypes;

@end
