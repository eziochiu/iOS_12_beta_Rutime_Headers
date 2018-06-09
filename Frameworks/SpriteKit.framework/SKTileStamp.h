/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileStamp : NSObject <NSSecureCoding> {
    unsigned int  _columns;
    unsigned int  _rows;
    unsigned int * _tileData;
}

@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned int*tileData;

+ (bool)supportsSecureCoding;
+ (id)tileStampWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int*)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 tileData:(unsigned int*)arg3;
- (bool)isEqualToNode:(id)arg1;
- (unsigned long long)numberOfColumns;
- (unsigned long long)numberOfRows;
- (void)setTileData:(unsigned int*)arg1 size:(unsigned long long)arg2;
- (unsigned int*)tileData;
- (id)tileDefinitionsForTileMap:(id)arg1;

@end
