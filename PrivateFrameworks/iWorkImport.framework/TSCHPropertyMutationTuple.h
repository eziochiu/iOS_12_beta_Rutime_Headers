/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPropertyMutationTuple : NSObject {
    NSDictionary * mMutations;
    <TSCHStyleOwning> * mStyleOwner;
}

@property (readonly) NSDictionary *mutations;
@property (readonly) <TSCHStyleOwning> *styleOwner;

- (void).cxx_destruct;
- (id)description;
- (id)indirectTuple;
- (id)initWithStyleOwner:(id)arg1 mutationMap:(id)arg2;
- (id)initWithStyleOwner:(id)arg1 mutations:(id)arg2;
- (id)mutations;
- (id)styleOwner;
- (id)styleOwnerRef;

@end
