/* made by EzioChiu.
 */

@protocol HUControlPanelRule <NSObject>

@required

- (double)priority;
- (bool)ruleMatchesItem:(HFControlPanelItem *)arg1;
- (void)setPriority:(double)arg1;

@end
