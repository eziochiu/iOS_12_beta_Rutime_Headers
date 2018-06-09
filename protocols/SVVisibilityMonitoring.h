/* made by EzioChiu.
 */

@protocol SVVisibilityMonitoring <NSObject>

@required

- (bool)appeared;
- (id)object;
- (void)onDidAppear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVisibilityMonitoring> *, void*
- (void)onDidDisappear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVisibilityMonitoring> *, void*
- (void)onVisiblePercentageChange:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVisibilityMonitoring> *, double, void*
- (void)onWillAppear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVisibilityMonitoring> *, void*
- (void)onWillDisappear:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVisibilityMonitoring> *, void*
- (unsigned long long)state;
- (double)visiblePercentage;

@end
