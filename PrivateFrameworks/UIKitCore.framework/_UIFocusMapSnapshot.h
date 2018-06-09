/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSMutableArray * _containersBeingAdded;
    NSMutableArray * _containersBeingAddedFocusSystems;
    bool  _didCaptureSnapshot;
    NSHashTable * _eligibleEnvironments;
    NSHashTable * _filteredOriginalRegions;
    UIFocusSystem * _focusSystem;
    _UIFocusRegion * _focusedRegion;
    NSHashTable * _ineligibleEnvironments;
    bool  _isSearchingRegionsOfInterestContainer;
    <_UIFocusMapArea> * _mapArea;
    NSMutableArray * _mutableUnoccludedRegions;
    NSArray * _regions;
    <_UIFocusRegionContainer> * _regionsContainer;
    <_UIFocusRegionContainer> * _rootContainer;
    <_UIFocusMapArea> * _searchArea;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_debugInfo, nonatomic, readonly) _UIFocusMapSnapshotDebugInfo *debugInfo;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly, copy) _UIFocusRegion *focusedRegion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <_UIFocusMapArea> *mapArea;
@property (nonatomic, readonly, copy) NSArray *originalRegions;
@property (nonatomic, readonly, copy) NSArray *regions;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *regionsContainer;
@property (nonatomic, readonly) <_UIFocusRegionContainer> *rootContainer;
@property (nonatomic, readonly) UIScreen *screen;
@property (getter=_searchArea, nonatomic, readonly) <_UIFocusMapArea> *searchArea;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_capture;
- (id)_debugInfo;
- (id)_debugInfoWithFocusMapSearchInfo:(id)arg1;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2;
- (id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3;
- (id)_searchArea;
- (void)addRegion:(id)arg1;
- (void)addRegions:(id)arg1;
- (void)addRegionsInContainer:(id)arg1;
- (void)addRegionsInContainers:(id)arg1;
- (id)coordinateSpace;
- (id)debugQuickLookObject;
- (id)focusSystem;
- (id)focusedRegion;
- (id)init;
- (id)mapArea;
- (id)originalRegions;
- (id)regions;
- (id)regionsContainer;
- (id)regionsForOriginalRegion:(id)arg1;
- (id)rootContainer;
- (id)screen;
- (id)searchArea;

@end
