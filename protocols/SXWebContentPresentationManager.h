/* made by EzioChiu.
 */

@protocol SXWebContentPresentationManager <NSObject>

@required

- (double)height;
- (id /* block */)loadBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)onLoad:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)onPresentable:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*
- (id /* block */)presentableBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, double, void*, id, SEL
- (unsigned long long)presentationState;
- (void)refresh;
- (void)setPresentationState:(unsigned long long)arg1;

@end
