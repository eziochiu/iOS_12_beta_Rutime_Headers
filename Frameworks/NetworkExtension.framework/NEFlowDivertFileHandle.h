/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFlowDivertFileHandle : NEFileHandle {
    NSNumber * _controlUnit;
    NSData * _keyMaterial;
}

@property (readonly) NSNumber *controlUnit;
@property (readonly) NSData *keyMaterial;

- (void).cxx_destruct;
- (id)controlUnit;
- (id)description;
- (id)dictionary;
- (id)getUnitForSocket:(int)arg1;
- (id)initFlowDivertControlSocket;
- (id)initFlowDivertControlSocketDisableAppMap:(bool)arg1;
- (id)initFlowDivertDataSocket;
- (id)initFromDictionary:(id)arg1;
- (id)keyMaterial;
- (unsigned long long)type;

@end