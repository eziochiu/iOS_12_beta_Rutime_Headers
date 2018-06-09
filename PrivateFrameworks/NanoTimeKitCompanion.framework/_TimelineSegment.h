/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _TimelineSegment : NSObject {
    unsigned long long  _count;
    _TimelineEntryNode * _leftmostNode;
    _TimelineEntryNode * _rightmostNode;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) _TimelineEntryNode *leftmostNode;
@property (nonatomic, readonly) _TimelineEntryNode *rightmostNode;

- (void).cxx_destruct;
- (bool)containsNode:(id)arg1;
- (bool)contractFromLeft;
- (bool)contractFromRight;
- (unsigned long long)count;
- (double)duration;
- (bool)expandToLeft;
- (bool)expandToRight;
- (id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3;
- (id)leftmostNode;
- (id)rightmostNode;
- (bool)shiftLeft;
- (bool)shiftRight;

@end
