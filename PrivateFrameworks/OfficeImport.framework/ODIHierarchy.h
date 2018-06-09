/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIHierarchy : NSObject {
    int  mMaxMappableTreeDepth;
    NSMutableDictionary * mNodeInfoMap;
    ODIState * mState;
    int  mType;
}

+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (void)dealloc;
- (id)infoForNode:(id)arg1;
- (id)initWithType:(int)arg1 state:(id)arg2;
- (void)map;
- (void)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)mapNode:(id)arg1;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;

@end
