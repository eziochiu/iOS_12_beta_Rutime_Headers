/* made by EzioChiu.
 */

@protocol AFClientLiteClientCommandHandling

@required

- (oneway void)handleCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SABaseCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SABaseCommand *, NSError *, void*

@end
