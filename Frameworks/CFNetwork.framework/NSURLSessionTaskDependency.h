/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionTaskDependency : NSObject

@property (nonatomic, readonly, retain) NSURLSessionTask *mainDocumentTask;
@property (nonatomic, readonly, retain) NSURLSessionTask *parentTask;
@property (nonatomic, retain) NSURLSessionTaskDependencyDescription *taskDependencyDescription;

+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(bool)arg3;

@end
