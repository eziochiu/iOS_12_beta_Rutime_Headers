/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReporterRegistry : NSObject <DKExtensionRegistry> {
    struct NSMutableDictionary { Class x1; } * _componentDedup;
    struct NSMutableDictionary { Class x1; } * _generatorLookup;
}

@property (nonatomic, retain) NSMutableDictionary *componentDedup;
@property (nonatomic, readonly) NSSet *components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class extensionClass;
@property (nonatomic, retain) NSMutableDictionary *generatorLookup;
@property (nonatomic, readonly) NSSet *generators;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class responseObjectClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addExtensionAdapter:(id)arg1;
- (struct NSMutableDictionary { Class x1; }*)componentDedup;
- (struct NSSet { Class x1; }*)components;
- (void)enumerateExtensionAdaptersWithBlock:(id /* block */)arg1;
- (Class)extensionClass;
- (id)generatorForComponentIdentity:(id)arg1;
- (struct NSMutableDictionary { Class x1; }*)generatorLookup;
- (id)generators;
- (id)init;
- (Class)responseObjectClass;
- (void)setComponentDedup:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setGeneratorLookup:(struct NSMutableDictionary { Class x1; }*)arg1;

@end
