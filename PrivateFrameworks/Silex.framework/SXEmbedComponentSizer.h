/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedComponentSizer : SXComponentSizer {
    <SXEmbedService> * _embedService;
}

@property (nonatomic, readonly) <SXEmbedService> *embedService;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)arg1 inColumnLayout:(id)arg2;
- (id)embedService;
- (id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 documentController:(id)arg4 layoutAttributes:(id)arg5 embedService:(id)arg6;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inColumnLayout:(id)arg2;

@end
