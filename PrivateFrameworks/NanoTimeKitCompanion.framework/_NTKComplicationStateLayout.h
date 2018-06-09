/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKComplicationStateLayout : NSObject {
    NTKComplicationLayoutRule * _defaultRule;
    NSMutableDictionary * _overrideRules;
}

@property (nonatomic, retain) NTKComplicationLayoutRule *defaultRule;

- (void)dealloc;
- (id)defaultRule;
- (id)ruleForLayoutOverride:(long long)arg1;
- (void)setDefaultRule:(id)arg1;
- (void)setRule:(id)arg1 forLayoutOverride:(long long)arg2;

@end
