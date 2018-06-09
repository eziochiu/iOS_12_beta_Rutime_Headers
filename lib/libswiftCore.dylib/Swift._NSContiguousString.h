/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Swift/libswiftCore.dylib
 */

@interface Swift._NSContiguousString : Swift._SwiftNativeNSString <Swift._NSStringCore> {
    void _guts;
}

@property (nonatomic, readonly) long long length;

- (const unsigned short*)_fastCharacterContents;
- (unsigned short)characterAtIndex:(long long)arg1;
- (id)copyWithZone:(void*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)length;

@end
