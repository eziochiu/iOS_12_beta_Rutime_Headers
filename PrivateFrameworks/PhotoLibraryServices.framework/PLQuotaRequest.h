/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLQuotaRequest : AARequest {
    NSString * _authToken;
    NSString * _personID;
}

- (void)dealloc;
- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;
- (id)urlRequest;

@end
