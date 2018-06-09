/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFMultiDelegate : NSObject {
    NSHashTable * _children;
}

@property (nonatomic, readonly) NSHashTable *children;
@property (nonatomic, readonly) id delegate;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)children;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeDelegate:(id)arg1;
- (void)replaceDelegate:(id)arg1 withDelegate:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;

@end
