/* made by EzioChiu.
 */

@protocol NFSession <NSObject>

@required

- (void)endSession;
- (void)endSessionWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isFirstInQueue;

@end