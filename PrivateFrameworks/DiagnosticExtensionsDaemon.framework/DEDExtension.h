/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDExtension : NSObject <DEDSecureArchiving, NSCopying> {
    DEDExtensionIdentifier * _dedExtensionIdentifier;
    NSString * _identifier;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) DEDExtensionIdentifier *dedExtensionIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *identifier;
@property (retain) NSString *name;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)extensionWithDEExtension:(id)arg1;
+ (id)extensionWithDicionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dedExtensionIdentifier;
- (id)description;
- (id)identifier;
- (id)name;
- (id)serialize;
- (void)setDedExtensionIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
