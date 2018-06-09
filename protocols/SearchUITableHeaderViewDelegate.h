/* made by EzioChiu.
 */

@protocol SearchUITableHeaderViewDelegate <NSObject>

@required

- (void)clearResultsFromSection:(SFResultSection *)arg1;
- (NSString *)currentQueryString;
- (bool)sectionIsClearable:(SFResultSection *)arg1;
- (void)toggleExpansionForSection:(SFResultSection *)arg1;

@end