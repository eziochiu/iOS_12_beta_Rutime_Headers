/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTaskDependencyTree : NSObject

@property (nonatomic, retain) NSMutableDictionary *_dependencies;
@property (nonatomic, retain) __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
@property (nonatomic, retain) NSURL *mainDocumentURL;

+ (id)dependencyTreeDefaultWeb;
+ (id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2;
+ (id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2;
+ (id)mimeTypeForURLString:(id)arg1;

- (id)_parentForMimeType:(id)arg1;
- (id)_parentForURLPath:(id)arg1;

@end
