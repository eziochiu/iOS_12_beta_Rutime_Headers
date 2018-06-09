/* made by EzioChiu.
 */

@protocol ABContactViewDelegate <NSObject, UITableViewDelegate>

@optional

- (void)contactView:(CNContactView *)arg1 didSelectItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (double)contactView:(CNContactView *)arg1 heightForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)numberOfGroupsInContactView:(CNContactView *)arg1;

@end
