/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseFunctionBlock : ML3DatabaseFunction {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)registerWithConnection:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
