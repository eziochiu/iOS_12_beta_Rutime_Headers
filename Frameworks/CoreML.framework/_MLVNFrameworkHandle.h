/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLVNFrameworkHandle : NSObject {
    int (* _scenePrintElementCountImpl;
    int (* _scenePrintLengthImpl;
    int (* _scenePrintsFromPixelBuffersImpl;
    bool  _valid;
}

@property (nonatomic, readonly) int (*scenePrintElementCountImpl;
@property (nonatomic, readonly) int (*scenePrintLengthImpl;
@property (nonatomic, readonly) int (*scenePrintsFromPixelBuffersImpl;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)sharedHandle;

- (unsigned long long)elementCountForScenePrintRequestRevision:(long long)arg1;
- (id)init;
- (bool)isValid;
- (unsigned long long)lengthInBytesForScenePrintRequestRevision:(long long)arg1;
- (int (*)scenePrintElementCountImpl;
- (int (*)scenePrintLengthImpl;
- (id)scenePrintsFromPixelBuffers:(struct __CVBuffer { }*)arg1 version:(long long)arg2 augmentationOptions:(id)arg3 error:(id*)arg4;
- (int (*)scenePrintsFromPixelBuffersImpl;

@end
