/* made by EzioChiu.
 */

@protocol CSSearchableIndexServiceInterface <NSObject>

@required

- (void)performIndexJob:(CSIndexJob *)arg1;
- (void)performIndexJob:(void *)arg1 acknowledgementHandler:(void *)arg2; // needs 2 arg types, found 7: CSIndexJob *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
