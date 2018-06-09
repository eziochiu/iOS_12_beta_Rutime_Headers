/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {
    NSMutableDictionary * _dependentToParentStreamIDs;
    NSMutableDictionary * _parentToParentStreamIDs;
    NSMutableArray * children;
    NSMutableArray * childrenResourceIdentifiers;
    NSURLSessionTaskDependencyDescription * dependencyDescription;
    NSNumber * rootParentStreamID;
}

@property (nonatomic, retain) NSMutableDictionary *_dependentToParentStreamIDs;
@property (nonatomic, retain) NSMutableDictionary *_parentToParentStreamIDs;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, retain) NSMutableArray *childrenResourceIdentifiers;
@property (nonatomic, retain) NSURLSessionTaskDependencyDescription *dependencyDescription;
@property (nonatomic, retain) NSNumber *rootParentStreamID;

- (id)_dependentToParentStreamIDs;
- (id)_parentToParentStreamIDs;
- (void)buildTree:(id)arg1 parentsToDependencies:(id)arg2 parentsToChildren:(id)arg3;
- (id)children;
- (id)childrenResourceIdentifiers;
- (void)dealloc;
- (id)dependencyDescription;
- (id)init;
- (id)makePriorityInfoStartingFromStreamID:(int*)arg1;
- (void)makePriorityInfoStartingFromStreamID:(int*)arg1 parentStream:(int)arg2 priorityInfo:(id)arg3 dependentToParentStreamIDs:(id)arg4 parentToParentStreamIDs:(id)arg5;
- (id)rootParentStreamID;
- (void)setChildren:(id)arg1;
- (void)setChildrenResourceIdentifiers:(id)arg1;
- (void)setDependencyDescription:(id)arg1;
- (void)setRootParentStreamID:(id)arg1;
- (void)set_dependentToParentStreamIDs:(id)arg1;
- (void)set_parentToParentStreamIDs:(id)arg1;

@end
