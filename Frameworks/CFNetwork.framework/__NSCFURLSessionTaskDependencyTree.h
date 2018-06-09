/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLSessionTaskDependencyTree : NSURLSessionTaskDependencyTree {
    NSMutableDictionary * _dependencies;
    __NSCFURLSessionTaskDependencyTreeNode * _effectiveTree;
    NSURL * _mainDocumentURL;
}

+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;

- (id)_dependencies;
- (id)_effectiveTree;
- (void)dealloc;
- (id)mainDocumentURL;
- (void)setMainDocumentURL:(id)arg1;
- (void)set_dependencies:(id)arg1;
- (void)set_effectiveTree:(id)arg1;

@end
