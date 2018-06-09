/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPLayerDelegateProxy : NSObject <CALayerDelegate> {
    <TPLayerDelegateProxyDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)clearDelegate;
- (void)displayLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
