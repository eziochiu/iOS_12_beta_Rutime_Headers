/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationRegistryWithFallbacks : NSObject {
    NSMutableDictionary * _fallbacks;
    KNAnimationRegistry * _registry;
}

- (void).cxx_destruct;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)init;
- (void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2;

@end
