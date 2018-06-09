/* made by EzioChiu.
 */

@protocol TPNumberPadButtonProtocol <NSObject>

@required

- (unsigned int)character;
- (id)initForCharacter:(unsigned int)arg1;
- (void)setCharacter:(unsigned int)arg1;

@optional

- (void)loadImagesForCurrentCharacter;

@end
