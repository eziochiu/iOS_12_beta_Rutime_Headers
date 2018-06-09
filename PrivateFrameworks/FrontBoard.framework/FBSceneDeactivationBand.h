/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneDeactivationBand : NSObject <BSDescriptionProviding> {
    NSHashTable * _assertions;
    double  _level;
}

@property (nonatomic, readonly) unsigned long long assertionCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double level;
@property (readonly) Class superclass;

+ (id)bandWithSceneLevel:(double)arg1;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (unsigned long long)assertionCount;
- (unsigned long long)deactivationReasonsForScene:(id)arg1 withSettings:(id)arg2;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithSceneLevel:(double)arg1;
- (double)level;
- (void)removeAssertion:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
