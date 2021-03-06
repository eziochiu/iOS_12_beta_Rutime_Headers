/* made by EzioChiu.
 */

@protocol MTLFunction <NSObject>

@required

- (<MTLDevice> *)device;
- (NSDictionary *)functionConstantsDictionary;
- (unsigned long long)functionType;
- (NSString *)label;
- (NSString *)name;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (<MTLArgumentEncoder> *)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (void)setLabel:(NSString *)arg1;
- (NSArray *)stageInputAttributes;
- (NSArray *)vertexAttributes;

@end
