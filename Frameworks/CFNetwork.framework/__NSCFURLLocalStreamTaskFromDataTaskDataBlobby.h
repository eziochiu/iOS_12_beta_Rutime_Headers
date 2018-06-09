/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject {
    id /* block */  _completion;
    NSObject<OS_dispatch_data> * _remainingData;
}

- (void)callCompletion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)drain:(struct __CFWriteStream { }*)arg1;
- (id)initWithData:(id)arg1 completion:(id /* block */)arg2;

@end
