/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode {
    unsigned long long  _bleed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _childrenDefaultPositions;
    unsigned long long  _density;
    NSArray * _visibleNodesForCurrentDensity;
}

@property (nonatomic) unsigned long long density;
@property (nonatomic, retain) NSArray *visibleNodesForCurrentDensity;

+ (id)hours12ZeusWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;

- (void).cxx_destruct;
- (bool)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2;
- (void)_setupPositions;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })childDefaultPositionForIndex:(long long)arg1;
- (void)createSubNodes;
- (unsigned long long)density;
- (id)initWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;
- (void)setDensity:(unsigned long long)arg1;
- (void)setVisibleNodesForCurrentDensity:(id)arg1;
- (id)visibleNodesForCurrentDensity;

@end
