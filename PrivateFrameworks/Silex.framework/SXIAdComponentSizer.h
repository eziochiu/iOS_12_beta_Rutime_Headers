/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXIAdComponentSizer : SXComponentSizer {
    SXAdController * _adController;
}

@property (nonatomic, readonly) SXAdController *adController;

+ (double)debugHeight;

- (void).cxx_destruct;
- (id)adController;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 adController:(id)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1;

@end
