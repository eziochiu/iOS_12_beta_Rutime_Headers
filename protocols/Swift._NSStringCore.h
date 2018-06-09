/* made by EzioChiu.
 */

@protocol Swift._NSStringCore <Swift._NSCopying>

@required

- (const unsigned short*)_fastCharacterContents;
- (unsigned short)characterAtIndex:(long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct { long long x1; long long x2; })arg2;
- (long long)length;

@end
