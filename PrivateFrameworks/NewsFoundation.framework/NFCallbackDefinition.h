/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFCallbackDefinition : NSObject {
    id /* block */  _callbackBlock;
    <NFDefinitionContainer> * _privateContainer;
}

@property (nonatomic, readonly) id /* block */ callbackBlock;
@property (nonatomic, readonly) <NFDefinitionContainer> *privateContainer;

- (void).cxx_destruct;
- (id /* block */)callbackBlock;
- (id)initWithCallbackBlock:(id /* block */)arg1 privateContainer:(id)arg2;
- (id)privateContainer;

@end
