/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentLayout : SXJSONObject <SXComponentLayout>

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } columnRange;
@property (nonatomic, readonly) struct _SXComponentContentInset { bool x1; bool x2; bool x3; bool x4; bool x5; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long horizontalContentAlignment;
@property (nonatomic, readonly) unsigned long long ignoreDocumentGutter;
@property (nonatomic, readonly) unsigned long long ignoreDocumentMargin;
@property (nonatomic, readonly) <SXEdgeSpacing> *margin;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } maximumContentWidth;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } minimumHeight;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } suggestedHeight;
@property (readonly) Class superclass;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

- (unsigned long long)horizontalContentAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentGutterWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentMarginWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)sideForValue:(id)arg1 withType:(int)arg2;

@end
