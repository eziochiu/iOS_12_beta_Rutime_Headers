/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSProcessExecutionPolicy : NSObject <BSDescriptionProviding, NSCopying> {
    NSArray * _provisions;
    FBSProcessExecutionStrategy * _strategy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *provisions;
@property (nonatomic, copy) FBSProcessExecutionStrategy *strategy;
@property (readonly) Class superclass;

+ (id)policyForStrategy:(id)arg1 withProvisions:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)provisions;
- (void)setProvisions:(id)arg1;
- (void)setStrategy:(id)arg1;
- (id)strategy;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
