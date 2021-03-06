/* made by EzioChiu.
 */

@protocol PKPassGroupStackViewDatasource <NSObject>

@required

- (PKGroup *)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfGroup:(PKGroup *)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)numberOfGroups;

@optional

- (PKGroup *)featuredGroup;
- (UIView *)footerForGroupStackView:(PKPassGroupStackView *)arg1;
- (UIView *)groupStackView:(PKPassGroupStackView *)arg1 headerForPassType:(unsigned long long)arg2;
- (bool)groupStackView:(PKPassGroupStackView *)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (UIView<PKPGSVSectionSubheaderView> *)groupStackView:(PKPassGroupStackView *)arg1 subheaderForPassType:(unsigned long long)arg2;
- (bool)groupStackView:(PKPassGroupStackView *)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (bool)groupStackViewShouldShowHeaderViews:(PKPassGroupStackView *)arg1;

@end
