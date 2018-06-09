/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding {
    struct { id /* block */ x1; unsigned int x2; unsigned int x3; } * _semantics;
    long long  bufferSize;
    long long  semanticsCount;
}

@property (nonatomic) long long bufferSize;
@property (nonatomic) long long semanticsCount;

- (long long)bufferSize;
- (void)dealloc;
- (long long)semanticsCount;
- (void)setBufferSize:(long long)arg1;
- (void)setSemanticsCount:(long long)arg1;

@end
