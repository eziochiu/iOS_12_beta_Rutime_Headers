/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCChangeTag : NSObject <RCSerializable> {
    NSString * _contentHash;
    NSString * _identifier;
    NSString * _lastModifiedString;
}

@property (nonatomic, readonly, copy) NSString *contentHash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastModifiedString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentHash;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedString;

@end
