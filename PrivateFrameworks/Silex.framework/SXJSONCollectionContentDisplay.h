/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONCollectionContentDisplay : SXJSONObject <SXCollectionContentDisplay>

@property (nonatomic, readonly) unsigned long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long distribution;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } gutter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } maximumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } minimumWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool variableSizing;
@property (nonatomic, readonly) unsigned long long widows;

+ (id)typeString;

- (unsigned long long)alignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)distributionWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)widowsWithValue:(id)arg1 withType:(int)arg2;

@end
