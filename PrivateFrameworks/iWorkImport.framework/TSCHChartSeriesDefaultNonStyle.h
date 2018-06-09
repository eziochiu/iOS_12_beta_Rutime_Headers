/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesDefaultNonStyle : NSObject <TSCHStyleActAlike>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)boxedDefaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultNonStyle;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)properties;

- (id)autorelease;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (id)boxedValueForProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (bool)definesProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (bool)overridesProperty:(int)arg1;
- (id)properties;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)valueForProperty:(int)arg1;

@end
