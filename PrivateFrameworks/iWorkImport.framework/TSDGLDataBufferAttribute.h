/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDGLDataBufferAttribute : NSObject {
    unsigned long long  _bufferOffset;
    unsigned int  _bufferUsage;
    int  _componentCount;
    TSDGLDataArrayBuffer * _dataArrayBuffer;
    TSDGLDataBuffer * _dataBuffer;
    int  _dataType;
    bool  _isNormalized;
    int  _locationInShader;
    NSString * _name;
}

@property (nonatomic) unsigned long long bufferOffset;
@property (nonatomic, readonly) unsigned int bufferUsage;
@property (nonatomic, readonly) int componentCount;
@property (nonatomic) TSDGLDataArrayBuffer *dataArrayBuffer;
@property (nonatomic) TSDGLDataBuffer *dataBuffer;
@property (nonatomic, readonly) int dataType;
@property (nonatomic, readonly) bool isNormalized;
@property (nonatomic) int locationInShader;
@property (nonatomic, copy) NSString *name;

+ (id)attributeWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(bool)arg4 componentCount:(unsigned long long)arg5;

- (unsigned long long)bufferOffset;
- (unsigned int)bufferUsage;
- (int)componentCount;
- (id)dataArrayBuffer;
- (id)dataBuffer;
- (int)dataType;
- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 bufferUsage:(unsigned int)arg2 dataType:(int)arg3 normalized:(bool)arg4 componentCount:(unsigned long long)arg5;
- (bool)isNormalized;
- (int)locationInShader;
- (id)name;
- (void)setBufferOffset:(unsigned long long)arg1;
- (void)setBufferUsage:(unsigned int)arg1;
- (void)setComponentCount:(int)arg1;
- (void)setDataArrayBuffer:(id)arg1;
- (void)setDataBuffer:(id)arg1;
- (void)setLocationInShader:(int)arg1;
- (void)setName:(id)arg1;

@end
