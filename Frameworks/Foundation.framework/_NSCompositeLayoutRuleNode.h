/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode <_NSLayoutRuleNodeParent> {
    NSMutableArray * _childNodes;
}

@property (readonly, copy) NSArray *_childRuleNodes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_addChildRuleNode:(id)arg1;
- (id)_childRuleNodes;
- (void)_removeChildRuleNode:(id)arg1;
- (id)childNodesCreatingIfNecessary;
- (void)dealloc;
- (id)debugDescription;

@end
