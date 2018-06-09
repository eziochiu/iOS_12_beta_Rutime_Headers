/* made by EzioChiu.
 */

@protocol SXCollectionContentDisplay <SXContentDisplay>

@required

- (unsigned long long)alignment;
- (unsigned long long)distribution;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })gutter;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })maximumWidth;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })minimumWidth;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })rowSpacing;
- (bool)variableSizing;
- (unsigned long long)widows;

@end
