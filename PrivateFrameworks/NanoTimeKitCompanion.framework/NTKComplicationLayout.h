/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationLayout : NSObject {
    _NTKComplicationStateLayout * _stateLayouts;
}

+ (id)layoutWithDefaultRule:(id)arg1;

- (id)_layoutForState:(long long)arg1;
- (void)dealloc;
- (id)defaultLayoutRuleForState:(long long)arg1;
- (id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2;
- (void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2;
- (void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3;

@end
