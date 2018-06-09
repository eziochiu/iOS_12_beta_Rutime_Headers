/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKInMemoryWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch>

- (bool)writeAndReturnError:(id*)arg1;
- (void)writeWithCompletionHandler:(id /* block */)arg1;

@end
