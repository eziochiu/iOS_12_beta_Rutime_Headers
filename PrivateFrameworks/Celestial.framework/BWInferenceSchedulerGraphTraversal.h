/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerGraphTraversal : NSObject {
    NSMutableDictionary * _accumulatedNodesLeadingToNode;
    NSMapTable * _childrenByNode;
    long long  _currentDepth;
    NSMapTable * _finalVisitationDepthByNode;
    <BWInferenceSchedulerGraphNode> * _headNode;
    NSArray * _lastVisitedNodes;
    NSMapTable * _parentsByNode;
    long long  _strategy;
}

@property (nonatomic, readonly) NSDictionary *accumulatedNodesLeadingToNode;

- (id)_nextNodes;
- (id)accumulatedNodesLeadingToNode;
- (void)dealloc;
- (id)initWithHeadNode:(id)arg1 strategy:(long long)arg2 childrenByNode:(id)arg3 parentsByNode:(id)arg4 depthMap:(id)arg5;
- (void)visitNodesWithBlock:(id /* block */)arg1;

@end
