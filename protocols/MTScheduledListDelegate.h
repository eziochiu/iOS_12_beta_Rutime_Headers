/* made by EzioChiu.
 */

@protocol MTScheduledListDelegate <NSObject>

@required

- (void)scheduledListDidChange:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: MTScheduledList *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
