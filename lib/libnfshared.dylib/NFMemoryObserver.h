/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFMemoryObserver : NSObject {
    NSObject<OS_dispatch_source> * _source;
}

- (void)start;
- (void)stop;

@end
