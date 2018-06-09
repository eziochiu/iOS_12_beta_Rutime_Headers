/* made by EzioChiu.
 */

@protocol MPUStackViewDataSource <NSObject>

@required

- (long long)numberOfItemsInStackView:(MPUStackView *)arg1;
- (void)stackView:(MPUStackView *)arg1 applyAttributesToItem:(MPUStackItemView *)arg2 atIndex:(long long)arg3;
- (void)stackView:(MPUStackView *)arg1 didCreateItem:(MPUStackItemView *)arg2;

@end
