/* made by EzioChiu.
 */

@protocol FUFlightFactoryProtocol <NSObject>

@required

+ (void)loadFlightsWithNumber:(void *)arg1 airlineCode:(void *)arg2 date:(void *)arg3 dateType:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: unsigned long long, NSString *, NSDate *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
