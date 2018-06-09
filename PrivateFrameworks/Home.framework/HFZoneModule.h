/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFZoneModule : HFItemModule <HFHomeObserver> {
    HFItem * _createNewZoneItem;
    HFStaticItemProvider * _createNewZoneItemProvider;
    HFCurrentZonesItem * _currentZoneItem;
    HFStaticItemProvider * _currentZoneItemProvider;
    bool  _expanded;
    HFStaticItemProvider * _expandedItemProvider;
    NSSet * _itemProviders;
    HMRoom * _room;
    HFZoneItemProvider * _zoneItemProvider;
    HFZoneSuggestionItemProvider * _zoneSuggestionItemProvider;
}

@property (nonatomic, retain) HFItem *createNewZoneItem;
@property (nonatomic, retain) HFStaticItemProvider *createNewZoneItemProvider;
@property (nonatomic, readonly) HFCurrentZonesItem *currentZoneItem;
@property (nonatomic, retain) HFStaticItemProvider *currentZoneItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) HFStaticItemProvider *expandedItemProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, readonly) HMRoom *room;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFZoneItemProvider *zoneItemProvider;
@property (nonatomic, retain) HFZoneSuggestionItemProvider *zoneSuggestionItemProvider;

- (void).cxx_destruct;
- (void)_reloadItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (bool)canExpand;
- (id)createNewZoneItem;
- (id)createNewZoneItemProvider;
- (id)currentZoneItem;
- (id)currentZoneItemProvider;
- (id)expandedItemProvider;
- (void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3;
- (void)home:(id)arg1 didAddZone:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3;
- (void)home:(id)arg1 didRemoveZone:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForZone:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 room:(id)arg2;
- (bool)isExpanded;
- (id)itemProviders;
- (id)room;
- (void)setCreateNewZoneItem:(id)arg1;
- (void)setCreateNewZoneItemProvider:(id)arg1;
- (void)setCurrentZoneItemProvider:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedItemProvider:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setZoneItemProvider:(id)arg1;
- (void)setZoneSuggestionItemProvider:(id)arg1;
- (bool)toggleExpansion;
- (id)zoneItemProvider;
- (id)zoneSuggestionItemProvider;

@end
