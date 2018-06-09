/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMachOSection : NSObject {
    unsigned long long  _localAddress;
    unsigned long long  _mappingSize;
}

- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 remoteAddress:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (unsigned long long)localAddress;
- (unsigned long long)mappingSize;

@end
