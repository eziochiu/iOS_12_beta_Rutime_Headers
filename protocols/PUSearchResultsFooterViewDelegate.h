/* made by EzioChiu.
 */

@protocol PUSearchResultsFooterViewDelegate <NSObject>

@required

- (void)updateTableFooterViewFrame;

@optional

- (void)didSelectTapToRadarButton:(UIButton *)arg1;

@end
