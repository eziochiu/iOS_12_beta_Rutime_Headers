/* made by EzioChiu.
 */

@protocol DTTapLocalDelegate <NSObject>

@required

- (bool)canFetchWhileArchiving;
- (void)fetchDataForReason:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DTTapMemo *, bool, void*
- (void)pause;
- (void)setTap:(DTTapLocal *)arg1;
- (void)start;
- (void)stop;
- (void)unpause;
- (DTTapStatusMemo *)validateConfig;

@optional

- (void)setTaskForPidBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned int, id /* block */, int, void*

@end
