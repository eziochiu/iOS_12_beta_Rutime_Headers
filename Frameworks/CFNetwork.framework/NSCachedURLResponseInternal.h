/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSCachedURLResponseInternal : NSObject {
    struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFCachedURLResponse {} *x2; } * _cachedURLResponse;
    NSData * data;
    NSURLResponse * response;
    unsigned long long  storagePolicy;
    NSDictionary * userInfo;
}

- (void)dealloc;

@end
