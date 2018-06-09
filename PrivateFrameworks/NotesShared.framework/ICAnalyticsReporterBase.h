/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAnalyticsReporterBase : NSObject {
    <ICAnalyticsReporterAccessibilityDelegate> * _accessibilityDelegate;
}

@property (nonatomic) <ICAnalyticsReporterAccessibilityDelegate> *accessibilityDelegate;

+ (id)instrumentationKeyForKey:(id)arg1;
+ (double)roundDoubleValue:(double)arg1;
+ (long long)roundIntegerValue:(long long)arg1;

- (void).cxx_destruct;
- (id)accessibilityDelegate;
- (void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)instrumentationKeyForKey:(id)arg1;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;
- (void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2;
- (void)setAccessibilityDelegate:(id)arg1;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (bool)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)whitelistedKeysForAccessibility;
- (id)whitelistedSubkeysForAccessibilityForKey:(id)arg1;

@end
