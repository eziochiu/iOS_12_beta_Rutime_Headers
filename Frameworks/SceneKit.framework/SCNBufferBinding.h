/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBufferBinding : NSObject {
    id /* block */  _block;
    long long  _frequency;
    NSString * _name;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) long long frequency;
@property (nonatomic, copy) NSString *name;

- (id /* block */)block;
- (void)dealloc;
- (long long)frequency;
- (id)name;
- (void)setBlock:(id /* block */)arg1;
- (void)setFrequency:(long long)arg1;
- (void)setName:(id)arg1;

@end
