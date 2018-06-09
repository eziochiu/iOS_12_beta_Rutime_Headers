/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderEffectsStates : NSObject {
    NSMutableDictionary * mObjects;
}

- (void)clear;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setState:(id)arg1 forStateInfo:(id)arg2;
- (void)setValueState:(id)arg1 forKey:(id)arg2;
- (id)stateForStateInfo:(id)arg1 createIfNil:(bool)arg2;
- (id)valueStateForKey:(id)arg1;

@end
