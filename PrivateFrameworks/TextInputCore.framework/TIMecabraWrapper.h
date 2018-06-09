/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIMecabraWrapper : NSObject {
    struct __Mecabra { } * _mecabraRef;
}

@property (readonly) struct __Mecabra { }*mecabraRef;

- (void)dealloc;
- (id)initWithInputMethodType:(int)arg1 learningDictionaryDirectoryURL:(struct __CFURL { }*)arg2 creationOptions:(unsigned long long)arg3;
- (struct __Mecabra { }*)mecabraRef;

@end
