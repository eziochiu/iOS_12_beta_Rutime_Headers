/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFLWorkflowSerialization : NSObject

+ (id)dataBySerializingWorkflow:(id)arg1 error:(out id*)arg2;
+ (id)dictionaryBySerializingWorkflow:(id)arg1 error:(out id*)arg2;
+ (id)workflowByDeserializingData:(id)arg1 error:(out id*)arg2;
+ (id)workflowByDeserializingDictionary:(id)arg1 error:(out id*)arg2;

@end
