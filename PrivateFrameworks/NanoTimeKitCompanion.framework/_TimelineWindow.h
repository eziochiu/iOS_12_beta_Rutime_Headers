/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _TimelineWindow : NSObject <NTKComplicationTimelineWindow> {
    _TimelineEntryNode * _focalNode;
    _TimelineSegment * _leftSegment;
    unsigned long long  _maxNodes;
    _TimelineSegment * _rightSegment;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _TimelineEntryNode *focalNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TimelineSegment *leftSegment;
@property (nonatomic, readonly) _TimelineSegment *rightSegment;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsNode:(id)arg1;
- (id)focalNode;
- (id)initWithFocalNode:(id)arg1 maxNodes:(unsigned long long)arg2;
- (unsigned long long)leftEntryCount;
- (id)leftSegment;
- (id)leftmostContiguousEntryDate;
- (id)leftmostNode;
- (void)rebalance;
- (unsigned long long)rightEntryCount;
- (id)rightSegment;
- (id)rightmostContiguousEntryDate;
- (id)rightmostNode;
- (void)updateFocalNodeWithDate:(id)arg1;

@end