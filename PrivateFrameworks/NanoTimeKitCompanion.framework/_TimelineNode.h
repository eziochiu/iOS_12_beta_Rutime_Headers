/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _TimelineNode : NSObject {
    _TimelineNode * _leftNode;
    _TimelineNode * _rightNode;
}

@property (nonatomic, readonly) _TimelineEntryNode *leftEntryNode;
@property (nonatomic, retain) _TimelineNode *leftNode;
@property (nonatomic, readonly) _TimelineEntryNode *rightEntryNode;
@property (nonatomic, retain) _TimelineNode *rightNode;

- (void).cxx_destruct;
- (id)leftEntryNode;
- (id)leftNode;
- (id)rightEntryNode;
- (id)rightNode;
- (void)setLeftNode:(id)arg1;
- (void)setRightNode:(id)arg1;

@end
