/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtocolInternal : NSObject {
    NSCachedURLResponse * cachedResponse;
    <NSURLProtocolClient> * client;
    NSLock * mutex;
    NSURLRequest * request;
}

- (void)dealloc;
- (id)init;

@end
