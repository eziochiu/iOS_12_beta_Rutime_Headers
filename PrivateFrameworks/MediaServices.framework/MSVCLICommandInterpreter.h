/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLICommandInterpreter : NSObject {
    NSMutableDictionary * _commandToInvocationsMap;
    NSMutableArray * _retainedBlockHandlers;
}

- (void).cxx_destruct;
- (void)addHandlerToCommand:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
- (bool)executeWithArgumentCount:(int)arg1 arguments:(const char **)arg2;
- (bool)handlerExistsForCommand:(id)arg1;
- (id)init;

@end
