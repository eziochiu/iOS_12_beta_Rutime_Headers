/* made by EzioChiu.
 */

@protocol TLKObserver

@required

- (bool)inBatchUpdate;
- (void)propertiesDidChange;
- (void)setInBatchUpdate:(bool)arg1;

@end
