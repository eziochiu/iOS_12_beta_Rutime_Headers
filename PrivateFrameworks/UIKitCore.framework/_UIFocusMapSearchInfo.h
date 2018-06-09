/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMapSearchInfo : NSObject {
    bool  _didFindFocusBlockingBoundary;
    NSMutableArray * _mutableDestinationRegions;
    NSMutableArray * _mutableSnapshots;
}

@property (nonatomic, readonly, copy) NSArray *destinationRegions;
@property (nonatomic) bool didFindFocusBlockingBoundary;
@property (nonatomic, retain) NSMutableArray *mutableDestinationRegions;
@property (nonatomic, retain) NSMutableArray *mutableSnapshots;
@property (nonatomic, readonly, copy) NSArray *snapshots;

- (void).cxx_destruct;
- (void)addDestinationRegion:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)destinationRegions;
- (bool)didFindFocusBlockingBoundary;
- (id)init;
- (id)mutableDestinationRegions;
- (id)mutableSnapshots;
- (void)setDidFindFocusBlockingBoundary:(bool)arg1;
- (void)setMutableDestinationRegions:(id)arg1;
- (void)setMutableSnapshots:(id)arg1;
- (id)snapshots;

@end
