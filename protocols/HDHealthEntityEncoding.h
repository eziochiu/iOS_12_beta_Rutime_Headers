/* made by EzioChiu.
 */

@protocol HDHealthEntityEncoding

@required

+ (HDEntityEncoder *)entityEncoderForProfile:(void *)arg1 database:(void *)arg2 purpose:(void *)arg3 encodingOptions:(void *)arg4 authorizationFilter:(void *)arg5; // needs 5 arg types, found 10: HDProfile *, HDSQLiteDatabase *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*

@end
