/* made by EzioChiu.
 */

@protocol SXDataTableCellSelector <SXDataTableSelector>

@required

- (unsigned long long)evenColumns;
- (unsigned long long)evenRows;
- (unsigned long long)oddColumns;
- (unsigned long long)oddRows;

@end
