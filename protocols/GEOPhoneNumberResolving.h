/* made by EzioChiu.
 */

@protocol GEOPhoneNumberResolving <NSObject>

@required

- (void)resolvePhoneNumbers:(void *)arg1 handler:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOPhoneNumberResolutionResultSet *, void*, NSObject<OS_dispatch_queue> *

@end
