/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFDefinition : NSObject {
    bool  _canBeNil;
    bool  _canBeOverridden;
    Class  _cls;
    id /* block */  _configurationBlock;
    id /* block */  _factory;
    <NFDefinitionContainer> * _privateAccessContainer;
    Protocol * _protocol;
    unsigned long long  _scope;
    unsigned long long  _source;
    id /* block */  _validationBlock;
}

@property (nonatomic) bool canBeNil;
@property (nonatomic) bool canBeOverridden;
@property (nonatomic, retain) Class cls;
@property (nonatomic, copy) id /* block */ configurationBlock;
@property (nonatomic, copy) id /* block */ factory;
@property (nonatomic, retain) <NFDefinitionContainer> *privateAccessContainer;
@property (nonatomic, retain) Protocol *protocol;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) unsigned long long source;
@property (nonatomic, copy) id /* block */ validationBlock;

- (void).cxx_destruct;
- (bool)canBeNil;
- (id)canBeNil:(bool)arg1;
- (bool)canBeOverridden;
- (id)canBeOverridden:(bool)arg1;
- (Class)cls;
- (id /* block */)configurationBlock;
- (id)description;
- (id /* block */)factory;
- (id)inScope:(unsigned long long)arg1;
- (id)initWithClass:(Class)arg1 factory:(id /* block */)arg2;
- (id)initWithProtocol:(id)arg1 factory:(id /* block */)arg2;
- (id)initWithUnsafeFactory:(id /* block */)arg1;
- (id)privateAccessContainer;
- (id)protocol;
- (unsigned long long)scope;
- (void)setCanBeNil:(bool)arg1;
- (void)setCanBeOverridden:(bool)arg1;
- (void)setCls:(Class)arg1;
- (void)setConfigurationBlock:(id /* block */)arg1;
- (void)setFactory:(id /* block */)arg1;
- (void)setPrivateAccessContainer:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setScope:(unsigned long long)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setValidationBlock:(id /* block */)arg1;
- (unsigned long long)source;
- (id /* block */)validationBlock;
- (id)withConfiguration:(id /* block */)arg1;
- (id)withPrivateAccessInContainer:(id)arg1;
- (id)withValidation:(id /* block */)arg1;

@end
