/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponseInternal : NSObject {
    struct _CFURLResponse { } * response;
}

- (void)dealloc;
- (id)initWithURLResponse:(struct _CFURLResponse { }*)arg1;

@end
