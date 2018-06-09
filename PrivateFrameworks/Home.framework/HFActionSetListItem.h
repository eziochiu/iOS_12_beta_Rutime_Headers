/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetListItem : HFItem {
    HMHome * _home;
    bool  _onlyShowsFavorites;
    HMRoom * _room;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool onlyShowsFavorites;
@property (nonatomic, readonly) HMRoom *room;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (bool)onlyShowsFavorites;
- (id)room;
- (void)setOnlyShowsFavorites:(bool)arg1;

@end
