/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
 */

@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    int  _counter;
    struct { /* ? */ } ** _keys;
    int  _keysCount;
}

- (id)allObjects;
- (void)dealloc;
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary { }*)arg1;
- (id)nextObject;

@end
