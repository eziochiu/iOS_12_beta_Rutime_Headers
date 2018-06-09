/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerGraph : NSObject {
    NSMapTable * _childrenByNode;
    unsigned long long  _connectionIdentifier;
    NSMapTable * _finalVisitationDepthByNode;
    <BWInferenceSchedulerGraphNode> * _head;
    NSMapTable * _parentsByNode;
}

- (id)_addScalingNodesForNodesExpectingInputs:(id)arg1 nodesProvidingOutput:(id)arg2 dependencyProvider:(id)arg3;
- (void)_annotateNode:(id)arg1 withTraversalDepth:(long long)arg2;
- (id)_connectNodesExpectingInputs:(id)arg1 toNodesProvidingOutput:(id)arg2;
- (id)_newScalingNodesForScalingRequirement:(id)arg1 directlyConsumingGraphInput:(bool)arg2;
- (void)_prepareToConnectNode:(id)arg1;
- (int)buildWithInferenceRequirements:(id)arg1 dependencyProvider:(id)arg2 formatProvider:(id)arg3;
- (void)dealloc;
- (id)initWithConnectionIdentifier:(unsigned long long)arg1;
- (id)newTraversalWithStrategy:(long long)arg1;

@end
