/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASInternPool : _PASZonedObject {
    id /* block */  _copyWithZone;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (id)_intern:(id)arg1 copyInput:(bool)arg2;
- (void)clear;
- (id)init;
- (id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(id /* block */)arg2;
- (id)intern:(id)arg1;
- (id)internNoCopy:(id)arg1;
- (bool)isInterned:(id)arg1;

@end
