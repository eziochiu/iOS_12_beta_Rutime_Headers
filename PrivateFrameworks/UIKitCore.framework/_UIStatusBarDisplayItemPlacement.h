/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized> {
    NSHashTable * _allRequiredPlacements;
    NSHashTable * _anyRequiredPlacements;
    bool  _enabled;
    NSHashTable * _excludedPlacements;
    NSSet * _excludedRegionIdentifiers;
    _UIStatusBarIdentifier * _identifier;
    NSDictionary * _itemInfo;
    long long  _priority;
}

@property (nonatomic, readonly, copy) NSHashTable *allRequiredPlacements;
@property (nonatomic, readonly, copy) NSHashTable *anyRequiredPlacements;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly, copy) NSHashTable *excludedPlacements;
@property (nonatomic, readonly, copy) NSSet *excludedRegionIdentifiers;
@property (nonatomic, readonly, copy) _UIStatusBarIdentifier *identifier;
@property (nonatomic, readonly, copy) NSDictionary *itemInfo;
@property (nonatomic) long long priority;

+ (id)placementWithIdentifier:(id)arg1 priority:(long long)arg2;
+ (id)spacerPlacementWithSize:(struct CGSize { double x1; double x2; })arg1 priority:(long long)arg2;

- (void).cxx_destruct;
- (id)allRequiredPlacements;
- (id)anyRequiredPlacements;
- (id)description;
- (id)disabledPlacement;
- (id)excludedPlacements;
- (id)excludedRegionIdentifiers;
- (id)excludingAllPlacementsInRegions:(id)arg1;
- (id)excludingPlacements:(id)arg1;
- (id)identifier;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)itemInfo;
- (long long)priority;
- (id)requiringAllPlacements:(id)arg1;
- (id)requiringAnyPlacements:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (id)withItemInfo:(id)arg1;

@end
