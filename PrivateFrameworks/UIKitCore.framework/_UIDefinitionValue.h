/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDefinitionValue : NSObject {
    NSAttributedString * _definition;
    NSString * _localizedDictionaryName;
    NSString * _longDefinition;
    ASAsset * _rawAsset;
    NSString * _term;
}

@property (readonly) NSAttributedString *definition;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *longDefinition;
@property (nonatomic, retain) ASAsset *rawAsset;
@property (readonly) NSString *term;

- (void).cxx_destruct;
- (id)definition;
- (id)description;
- (id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3 longDefinition:(id)arg4;
- (id)localizedDictionaryName;
- (id)longDefinition;
- (id)rawAsset;
- (void)setRawAsset:(id)arg1;
- (id)term;

@end
