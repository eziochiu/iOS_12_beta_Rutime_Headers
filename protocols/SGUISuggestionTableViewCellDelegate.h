/* made by EzioChiu.
 */

@protocol SGUISuggestionTableViewCellDelegate <NSObject>

@required

- (void)suggestionCell:(UITableViewCell *)arg1 didTapConfirmForSuggestion:(id <SGRealtimeSuggestion>)arg2;
- (void)suggestionCell:(UITableViewCell *)arg1 didTapIgnoreForSuggestion:(id <SGRealtimeSuggestion>)arg2;

@end
