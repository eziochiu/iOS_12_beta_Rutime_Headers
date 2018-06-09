/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKClosure : NSObject <NSCoding> {
    void entity;
    void store;
}

@property (nonatomic, readonly) CKEntity *entity;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) CKKnowledgeStore *store;

- (id /* block */).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (void)execute;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)store;

@end
