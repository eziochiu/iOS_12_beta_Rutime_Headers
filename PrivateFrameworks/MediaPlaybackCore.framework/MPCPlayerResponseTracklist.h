/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayerResponseTracklist : NSObject {
    unsigned long long  _changeItemSupport;
    long long  _globalItemCount;
    MPSectionedCollection * _items;
    long long  _lastChangeDirection;
    long long  _playingItemGlobalIndex;
    NSIndexPath * _playingItemIndexPath;
    long long  _repeatType;
    MPCPlayerResponse * _response;
    long long  _shuffleType;
    NSString * _uniqueIdentifier;
    long long  _upNextItemCount;
}

@property (nonatomic, readonly) long long globalItemCount;
@property (nonatomic, readonly, copy) MPSectionedCollection *items;
@property (nonatomic, readonly) long long lastChangeDirection;
@property (nonatomic, readonly) MPCPlayerResponseItem *playingItem;
@property (nonatomic, readonly) long long playingItemGlobalIndex;
@property (nonatomic, readonly, copy) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) long long repeatType;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (nonatomic, readonly) long long shuffleType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long upNextItemCount;

+ (id)insertCommandForPlayerPath:(id)arg1 devices:(id)arg2;
+ (id)resetCommandForPlayerPath:(id)arg1 devices:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_determineChangeItemSupport;
- (id)changeItemCommand;
- (id)disableModificationsCommand;
- (long long)globalItemCount;
- (id)initWithResponse:(id)arg1;
- (id)insertCommand;
- (id)items;
- (long long)lastChangeDirection;
- (id)playingItem;
- (long long)playingItemGlobalIndex;
- (id)playingItemIndexPath;
- (id)reorderCommand;
- (id)repeatCommand;
- (long long)repeatType;
- (id)resetCommand;
- (id)response;
- (id)shuffleCommand;
- (long long)shuffleType;
- (id)uniqueIdentifier;
- (long long)upNextItemCount;

@end
