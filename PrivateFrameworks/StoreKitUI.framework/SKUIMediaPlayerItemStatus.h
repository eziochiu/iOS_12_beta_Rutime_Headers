/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying> {
    double  _currentTime;
    double  _duration;
    bool  _hideDuration;
    NSString * _itemIdentifier;
    long long  _itemType;
    long long  _playState;
    NSString * _storeAlbumID;
    NSString * _storeID;
}

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) bool hideDuration;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) long long itemType;
@property (nonatomic) long long playState;
@property (nonatomic, copy) NSString *storeAlbumID;
@property (nonatomic, copy) NSString *storeID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTime;
- (id)description;
- (double)duration;
- (bool)hideDuration;
- (id)init;
- (id)itemIdentifier;
- (long long)itemType;
- (long long)playState;
- (void)setCurrentTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setHideDuration:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemType:(long long)arg1;
- (void)setPlayState:(long long)arg1;
- (void)setStoreAlbumID:(id)arg1;
- (void)setStoreID:(id)arg1;
- (id)storeAlbumID;
- (id)storeID;

@end
