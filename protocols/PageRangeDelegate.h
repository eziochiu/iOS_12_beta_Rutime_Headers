/* made by EzioChiu.
 */

@protocol PageRangeDelegate <NSObject>

@required

- (void)addAllPages:(id)arg1;
- (void)addPage:(id)arg1 forPageIndex:(long long)arg2;
- (bool)canAddAllPages:(id)arg1;
- (bool)canAddPage:(id)arg1 forPageIndex:(long long)arg2;
- (bool)canRemovePage:(id)arg1 forPageIndex:(long long)arg2;
- (bool)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (bool)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2;
- (bool)canShowMenuBar;
- (void)removePage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setEndPage:(id)arg1 forPageIndex:(long long)arg2;
- (void)setStartPage:(id)arg1 forPageIndex:(long long)arg2;

@end
